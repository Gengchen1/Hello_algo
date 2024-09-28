#include <iostream>
#include <vector>
#include "Hello_algo.h"

void PrintValue(int value)
{
    std::cout << value << std::endl;
}

void test_arr()
{
    int arr[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout << &arr[i][j] << std::endl;
        }
    }
}


int main()
{
    // int a = forLoop(100);
    // int b = whileLoop(100);
    // std::cout << a << "," << b << nestedForLoop(3) << std::endl;

    // PrintValue(recur(100)); 
    // PrintValue(tailRecur(100, 0));
    // PrintValue(fib(10));
    // PrintValue(forLoopRecur(100));
    // PrintValue(constant(100));
    // PrintValue(linear(100));
    // PrintValue(quadratic(100));
    // std::vector<int> vec(100, 1);
    // PrintValue(bubbleSort(vec));
    // PrintValue(exponential(10));
    // PrintValue(expRecur(10));
    // PrintValue(logarithmic(10));
    // PrintValue(logRecur(10));
    // PrintValue(linearLogRecur(10));
    // PrintValue(factorialRecur(10));
    int a;
    int *p;
    p = new int;
    *p = 10;
    std::cout << *p << std::endl;
    std::cout << p << std::endl;
    delete p;
    std::cout << *p << std::endl;
    std::cout << p << std::endl;
    p = new int[20];
    delete[] p;

    // test_arr();

    std::cin.get();
}