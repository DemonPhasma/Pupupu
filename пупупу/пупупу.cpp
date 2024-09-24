#include <iostream>


int main()
{
    setlocale(LC_ALL, "ru");


    double user_summ;
    int choise;
    while (true)
    {

        std::cout << "\t Банк Made IN Фарит Приветствует вас! \n";
        std::cout << "\n";
        std::cout << "Введите сумму: ";
        std::cin >> user_summ;
        std::cout << "\n";
        std::cout << "1) Евро \n";
        std::cout << "2) Доллар \n";
        std::cout << "3) Йена \n";
        std::cout << "4) Фарит \n";
        std::cout << "5) Юань \n";
        std::cout << "\n";

        std::cout << "В какую валюту хотите перевести?\n";
        std::cin >> choise;

        int com = (user_summ / 100) * 5;
        int summ_with_com = user_summ - com;


        if (choise == 1)
        {
            std::cout << "Коммиссия составила: " << com << "\n";
            std::cout << "На ваш счет переведено: " << summ_with_com / 103.22 << " Евро";
            std::cout << "\n";
        }


        else if (choise == 2)
        {
            std::cout << "Коммиссия составила: " << com << "\n";
            std::cout << "На ваш счет переведено " << summ_with_com / 92.92 << " Долларов";
            std::cout << "\n";
            
        }


        else if (choise == 3)
        {
            std::cout << "Коммиссия составила: " << com << "\n";
            std::cout << "На ваш счет переведено " << summ_with_com / 0.65 << " Йен";
            std::cout << "\n";
        }


        else if (choise == 4)
        {
            std::cout << "Коммиссия составила: " << com << "\n";
            std::cout << "На ваш счет переведено " << summ_with_com / 37 << " Фаритов";
            std::cout << "\n";
        }


        else if (choise == 5)
        {
            std::cout << "Коммиссия составила: " << com << "\n";
            std::cout << "На ваш счет переведено " << summ_with_com / 13.11 << " Юаней";
            std::cout << "\n";
        }


        else
        {
            std::cout << "Неправильно!";
        }


        std::cout << "Желаете продолжить обмен валют? \n";
        std::cout << "\n";
        std::cout << "1 - да \n";
        std::cout << "2 - Нет\n";
        std::cout << "\n";
        std::cout << "Введите ответ: ";
        std::cin >> choise;

        if (choise == 1)
        {
            continue;
        }

        else
        {
            break;
        }
    }
    return 0;
}
