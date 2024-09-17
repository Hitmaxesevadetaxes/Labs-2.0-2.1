// Lab2.1.cpp
// <������ ������>
// ����������� ������ � 2g
// ˳��� ��������
// ������ 2


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
    // �������� ����
    double alpha;
    std::cout << "������ �������� ���� alpha (� �������): ";
    std::cin >> alpha;

    // ���������� z1 �� ������ ��������
    double z1 = cos(alpha) + sin(alpha) + cos(3 * alpha) + sin(3 * alpha);

    // ���������� z2 �� ������ ��������
    double z2 = 2 * sqrt(2) * cos(alpha) * sin( M_PI / 4 + 2 * alpha);

    // ��������� ����������
    std::cout << "z1 = " << z1 << std::endl;
    std::cout << "z2 = " << z2 << std::endl;
    if (std::fabs(z1 - z2) < 1e-6) { 
        std::cout << "���������� ���������." << std::endl;
    }
    else {
        std::cout << "���������� �� ���������." << std::endl;
    }

    return 0;
}

