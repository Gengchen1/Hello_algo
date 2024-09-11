#include <iostream>
#include <vector>
#include "Hello_algo.h"

void PrintValue(int value)
{
    std::cout << value << std::endl;
}


int main()
{
    int a = forLoop(100);
    int b = whileLoop(100);
    std::cout << a << "," << b << nestedForLoop(3) << std::endl;

    PrintValue(recur(100)); 
    PrintValue(tailRecur(100, 0));
    PrintValue(fib(10));
    PrintValue(forLoopRecur(100));
    PrintValue(constant(100));
    PrintValue(linear(100));
    PrintValue(quadratic(100));
    std::vector<int> vec(100, 1);
    PrintValue(bubbleSort(vec));
    PrintValue(exponential(10));
    PrintValue(expRecur(10));
    PrintValue(logarithmic(10));
    PrintValue(logRecur(10));
    PrintValue(linearLogRecur(10));
    PrintValue(factorialRecur(10));



    std::cin.get();
}