#include <iostream>
#include <string>
#include <sstream>

int forLoop(int n)
{
    int res = 0;
    // 循环求和 1，2，。。。，n-1, n
    // for(int i = 1; i <= n; ++i)
    // {
    //     res += i;
    // }
    res = ((n + 1)*n) / 2;
    return res;
}

/* while 循环*/
int whileLoop(int n)
{
    int res = 0;
    int i = 1;
    while(i <= n)
    {
        res += i;
        i++;
    }
    return res;
}
/*双层 for 循环*/
std::string nestedForLoop(int n)
{
    std::ostringstream res;
    for(int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            res << "(" << i << ", " << j << "), ";
        }
    }
    return res.str();

}

// int main()
// {
//     int a = forLoop(100);
//     int b = whileLoop(100);
//     std::cout << a << "," << b << nestedForLoop(3) << std::endl;

//     std::cin.get();
// }