#include <iostream>

bool isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int daysInMonth(int year, int month) {
    switch (month) {
    case 4: case 6: case 9: case 11:
        return 30;
    case 2:
        return isLeapYear(year) ? 29 : 28;
    default:
        return 31;
    }
}

bool validateDate(int year, int month, int day) {
    if (month < 1 || month > 12) return false;
    if (day < 1 || day > daysInMonth(year, month)) return false;
    return true;
}

int dateDifference(int day1, int month1, int year1, int day2, int month2, int year2) {
    if (!validateDate(year1, month1, day1) || !validateDate(year2, month2, day2)) {
        std::cout << "Одна из введённых дат некорректна." << std::endl;
        return -1;
    }

    auto daysFromStartOfYear = [](int year, int month, int day) {
        int days = day;
        for (int m = 1; m < month; ++m) {
            days += daysInMonth(year, m);
        }
        return days;
        };

    auto daysFromEpoch = [&daysFromStartOfYear](int year, int month, int day) {
        int days = 0;
        for (int y = 0; y < year; ++y) {
            days += isLeapYear(y) ? 366 : 365;
        }
        days += daysFromStartOfYear(year, month, day);
        return days;
        };

    int days1 = daysFromEpoch(year1, month1, day1);
    int days2 = daysFromEpoch(year2, month2, day2);

    return (days2 > days1) ? (days2 - days1) : (days1 - days2);
}

int main() {
    setlocale(LC_ALL, "RU");
    int day1, month1, year1;
    int day2, month2, year2;

    std::cout << "Введите первую дату (день, месяц, год): ";
    std::cin >> day1 >> month1 >> year1;

    std::cout << "Введите вторую дату (день, месяц, год): ";
    std::cin >> day2 >> month2 >> year2;

    int daysDiff = dateDifference(day1, month1, year1, day2, month2, year2);
    if (daysDiff != -1) {
        std::cout << "Разность в днях: " << daysDiff << std::endl;
    }

    return 0;
}



#include <iostream>
#include <cstdlib>
#include <ctime>

double calculateAverage(int array[10]) {
    int sum = 0;
    for (int i = 0; i < 10; ++i) {
        sum += array[i];
    }
    return static_cast<double>(sum) / 10;
}

int main() {
    setlocale(LC_ALL, "RU");
    int numbers[10];

    std::srand(std::time(0));

    for (int i = 0; i < 10; ++i)
    {
        numbers[i] = std::rand() % 100;
    }

    double average = calculateAverage(numbers);

    std::cout << "Массив: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << numbers[i] << " ";
    }
    std::cout << "\nСреднее арифметическое: " << average << std::endl;

    return 0;
}
