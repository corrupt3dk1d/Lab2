// Tusk1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>


int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int number1, number2, result = 0;
    char op;
    std::cout << "Hello World!\n";
    std::cout << "Введите 1-ое число:";
    std::cin >> number1;
    std::cout << "Введите 2-ое число:";
    std::cin >> number2;
    std::cout << (number1 + number2) / 2;
    std::cout << "Введите один из знаков операции: +, -, * или /";
    std::cin >> op;
    //if (op == '+') result = number1 + number2;
    //else if (op == '-') result = number1 - number2;
    //else if (op == '*') result = number1 * number2;
    //else if (op == '/') result = number1 / number2;
    //else {
    //    std::cout << "Некорректный ввод";
    //}
    switch (op)
    {
    case '+':
        result = number1 + number2;
        break;
    case '-':
        result = number1 - number2;
        break;
    case '/':
        result = number1 / number2;
        break;
    case '*':
        result = number1 * number2;
        break;
    default:
        std::cout << "Некорректный ввod";

    }

    std::cout << result;


}


