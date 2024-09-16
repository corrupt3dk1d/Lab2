// Tusk3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
int sum(int x=33, int y=44, bool isPrint = false) {

    int s = x + y;

    if (isPrint) std::cout << s;

    return s;

}

int func1(int n = 1) { 
    //std::cout << 666;  // test
    if (n <= 0) 
        return 0;

    else {

        int sum = 0;
        for (int i = 0; i <= n; i++) {
            sum = sum + i;

        }
        return sum;

    }

}

int func2(int n1, int n2, int& n_link1, int& n_link2) 
{
    n_link1 = n1 + n2;
    n_link2 = n1 * n2;
    return 0;

}
int main()
{
    int arr1[2][3] = { {3, 6, 9},{7, 1, 8} }; //  
    int sum_of_array = 0;
    int arr2[3] = { 0, 0, 0 };
    float number = 20.84, & link1 = number, & link2 = number;
    int number1 = 3, number2 = 5, number3 = 7, number4 = 9;
    // int& link3 = number3, & link4 = number4

    int test = sum();
    std::cout << test;

    int i = 0; // try make it in cycle
    for (auto &arr : arr1) {
        //std::cout << arr;
        for (int n : arr) {
            //std::cout << n << ' ';

            sum_of_array += n;

            arr2[i] += n;
            i++;
        }
        i = 0;
        //std::cout << '\n';
    }
    std::cout << sum_of_array << '\n';
    for (int n: arr2)
        std::cout << n << ' ';

    number -= 1;
    std::cout << '\n' << number << ' ' << link1 << ' ' << link2;
    link1 += 3;
    std::cout << '\n' << number << ' ' << link1 << ' ' << link2;
    link2 -= 10;
    std::cout << '\n' << number << ' ' << link1 << ' ' << link2 << '\n';
    int n = 0;
    std::cin >> n;
    std::cout << func1(n) << '\n';
    std::cout << func1() << '\n';

    
    std::cout << "number3 before func2="<< number3 << '\n' << "number4 before func2=" << number4 << "\nfunc2 out:" <<  func2(number1, number2, number3, number4) << "\nnumber3 after func2 = " << number3 << "\nnumber4 after func2 = " << number4; // punkt 14
    std::string str = "\nHello WORLD";
    std::cout << str;
    for (int i = 0; i < 3; i++) {
        std::cout << '\n' << arr1; // punkt 16
        int var_in_cycle = 133; // punkt 17
        std::cout << '\n' << var_in_cycle; // punkt 18
    }
 

    



  
}
