// Tusk2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number, sum;
    int array[] = { 33, 65, 78, 432, -12, 44, 37, 8, 10, 5 };
    std::cout << "Введите число\n";
    std::cin >> number;
    sum = number;
    while (number < 0) {
        std::cin >> number;

    }
    for (int i = 1; i < number; i++) {
        sum += i;
    }
    std::cout << sum << '\n';
    sum = 0;
    for (int i = 0; i < 10; i++) std::cout << array[i] << ' ';
    std::cout << '\n';

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) std::cout << array[i] << ' ';
        else sum += array[i];
        

    }
    std::cout <<'\n' << sum << '\n';



}

