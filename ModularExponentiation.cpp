//link to question: https://codeforces.com/problemset/problem/913/A
#include <iostream>
#include <math.h>
int main()
{
    int m, n;
    std::cin >> n;
    std::cin >> m;
    n = pow(2, n);
    int result = m % n;
    std::cout << result<<std::endl;
}