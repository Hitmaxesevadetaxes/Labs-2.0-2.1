// Lab2.1.cpp
// <Боднар Данило>
// Лабораторна робота № 2g
// Лінійні програми
// Варіант 2


#include <iostream>
#include <cmath>  
#include <Windows.h>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

int main()

{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    // Введення кута
    double alpha;
    std::cout << "Введіть значення кута alpha (у радіанах): ";
    std::cin >> alpha;

    // Обчислення z1 за першою формулою
    double z1 = cos(alpha) + sin(alpha) + cos(3 * alpha) + sin(3 * alpha);

    // Обчислення z2 за другою формулою
    double z2 = 2 * sqrt(2) * cos(alpha) * sin( M_PI / 4 + 2 * alpha);

    // Виведення результатів
    std::cout << "z1 = " << z1 << std::endl;
    std::cout << "z2 = " << z2 << std::endl;
    if (std::fabs(z1 - z2) < 1e-6) { 
        std::cout << "Результати збігаються." << std::endl;
    }
    else {
        std::cout << "Результати не збігаються." << std::endl;
    }

    return 0;
}

