#include <iostream>

int main()
{
    setlocale(LC_ALL, "ru");

    /*Задание №1*/

    int T, S;

    std::cout << "Введите расстояние до аэропорта: ";
    std::cin >> S;
    std::cout << "Введите время за которое надо добраться: ";
    std::cin >> T;
    std::cout << "Вам нужно ехать со скоростью " << S / T << "км/ч \n";

    /*Задание №2*/

    int H1, M1, S1;
    int H2, M2, S2;


    std::cout << "Введите время начала:" << std::endl;
    std::cout << "Часы: ";
    std::cin >> H1;
    std::cout << "Минуты: ";
    std::cin >> M1;
    std::cout << "Секунды: ";
    std::cin >> S1;

    std::cout << "Введите время окончания:" << std::endl;
    std::cout << "Часы: ";
    std::cin >> H2;
    std::cout << "Минуты: ";
    std::cin >> M2;
    std::cout << "Секунды: ";
    std::cin >> S2;

    int SS = H1 * 3600 + M1 * 60 + S1;
    int SE = H2 * 3600 + M2 * 60 + S2;

    if (SE < SS) {
        std::cout << "Ошибка!!! Время завершения меньше времени начала." << std::endl;
        return 1;
    }

    int R = SE - SS;

    int M = R / 60;

    std::cout << "Стоимость поездки: " << M * 2 << " гривен." << std::endl;


    /*Задание №3*/

    float S;
    float RB;
    float B1, B2, B3;

    std::cout << "Введите расстояние: ";
    std::cin >> S;
    std::cout << "Введите расход бензина: ";
    std::cin >> RB;
    std::cout << "Введите стоимость первого бензина: ";
    std::cin >> B1;
    std::cout << "Введите стоимость второго бензина: ";
    std::cin >> B2;
    std::cout << "Введите стоимость третьего бензина: ";
    std::cin >> B3;

    float B = (RB / 100) * S;

    float P1 = B * B1;
    float P2 = B * B2;
    float P3 = B * B3;

    std::cout << "\nСравнительная таблица:\n";
    std::cout << " --------------------------------------------------\n";
    std::cout << "| Виды бензина| Стоимость поездки                  |\n";
    std::cout << " --------------------------------------------------\n";
    std::cout << "| 1-й         | " << P1 << "\t                     |\n";
    std::cout << "| 2-й         | " << P2 << "\t                     |\n";
    std::cout << "| 3-й         | " << P3 << "\t                     |\n";
    std::cout << " --------------------------------------------------\n";

    return 0;

}