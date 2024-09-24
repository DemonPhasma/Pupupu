#include <iostream>


int main()
{
    setlocale(LC_ALL, "ru");

    int num, total_sum = 0;
    std::cout << "Введите число: ";
    std::cin >> num;
    while (num != 0) {
        total_sum += num;
        std::cout << "Введите число: ";
        std::cin >> num;
    }
    std::cout << "Сумма равна " << total_sum << std::endl;
    return 0;

}
