#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    setlocale(LC_ALL, "ru");
    srand(static_cast<unsigned int>(time(0)));

    int arrayRandom[10];
    int arrayUser[10];

    for (int i = 0; i < 10; i++) {
        arrayRandom[i] = rand() % 11;
    }

    std::cout << "Введите 10 чисел от 0 до 10: " << std::endl;
    for (int i = 0; i < 10; i++) {
        int num;
        while (true) {
            std::cout << "Введите число для ячейки " << i + 1 << ": ";
            std::cin >> num;
            if (num >= 0 && num <= 10) {
                arrayUser[i] = num;
                break;
            }
            else {
                std::cout << "Ошибка! Введите число от 0 до 10. " << std::endl;
            }
        }
    }
    std::cout << "Рандомный массив: " << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << arrayRandom[i] << "\t";
    }
    std::cout << std::endl;

    std::cout << "Введенный массив: " << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cout << arrayUser[i] << "\t";
    }
    std::cout << std::endl;

    std::cout << "Совпадения: " << std::endl;
    for (int i = 0; i < 10; i++) {
        if (arrayRandom[i] == arrayUser[i]) {
            std::cout << "Ячейка " << i + 1 << ": совпадение чисел! " << std::endl;
        }
    }

    return 0;
}