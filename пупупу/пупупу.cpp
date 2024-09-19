#include <iostream>


int main()
{
    setlocale(LC_ALL, "ru");

    int num1, num2;
    std::string z;

    std::cout << "\t Калькулятор Made In RPO23-1\n";
    std::cout << "\n";
    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    std::cout << "Введите знак(+, -, *, /, %): ";
    std::cin >> z;

    if (z == "/" && num2 == 0)
    {
        std::cout << "На ноль делят только геи)";
        return 1;
    }
    if (z == "+")
    {
        std::cout << num1 << " + " << num2 << " = " << num1 + num2;
    }
    else if (z == "-")
    {
        std::cout << num1 << " - " << num2 << " = " << num1 - num2;
    }
    else if (z == "/")
    {
        std::cout << num1 << " / " << num2 << " = " << num1 / num2;
    }
    else if (z == "*")
    {
        std::cout << num1 << " * " << num2 << " = " << num1 * num2;
    }
    else if (z == "%")
    {
        std::cout << num1 << " % " << num2 << " = " << (num1 / 100) * num2;
    }

    return 0;
}