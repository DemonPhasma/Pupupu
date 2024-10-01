#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    setlocale(LC_ALL, "ru");
    srand(static_cast<unsigned int>(time(0)));

    int array[20];

    for (int i = 0; i < 20; i++) {
        array[i] = rand() % 6 + 5;
    }

    std::cout << "Числа в массиве:" << std::endl;
    for (int i = 0; i < 20; i++) {
        std::cout << array[i] << "\t";
        if ((i + 1) % 10 == 0) {
            std::cout << std::endl;
        }
    }
    return 0;
}

