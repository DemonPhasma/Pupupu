#include <iostream>

int calculateFuel(int weight) {
    if (weight <= 400) 
    {
        return 2;
    }
    else if (weight <= 900) 
    {
        return 5;
    }
    else if (weight <= 1400) 
    {
        return 8;
    }
    else if (weight <= 1900)
    {
        return 10;
    }
    else 
    {
        return -1;
    }
}


int main() 
{
    setlocale(LC_ALL, "ru");
    int weight, distanceAB, distanceBC;

    std::cout << "Введите вес груза (в кг): ";
    std::cin >> weight;
    std::cout << "Введите расстояние от A до B (в км): ";
    std::cin >> distanceAB;
    std::cout << "Введите расстояние от B до C (в км): ";
    std::cin >> distanceBC;

    int fueluse = calculateFuel(weight);
    if (fueluse == -1) {
        std::cout << "Грузовик не едет с таким весом." << std::endl;
        return 1;
    }
    int totalFueluse = fueluse * (distanceAB + distanceBC);

    int fueluseAB = fueluse * distanceAB;
    int fuelToRefuel = totalFueluse - fueluseAB;

    if (fuelToRefuel > 500) {
        std::cout << "Не хватит топлива в баке." << std::endl;
    }
    else {
        std::cout << "Необходимо заправить " << fuelToRefuel << " литров топлива в пункте B." << std::endl;
    }

    return 0;
}
    