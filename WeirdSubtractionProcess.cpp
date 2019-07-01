//link to question: https://codeforces.com/problemset/problem/946/B
#include <iostream>
bool process(int *, int *);
int main()
{
    int a, b;
    std::cin >> a;
    std::cin >> b;
    if (!(process(&a, &b)))
        std::cout << "a: " << a << " b: " << b << std::endl;
}
bool process(int *a, int *b)
{
repeat:
    if (*a == 0 || *b == 0)
        return false;
    else if (*a >= 2 * (*b))
    {
        *a = *a - (2 * (*b));
        goto repeat;
    }
    else if (*b >= 2 * (*a))
    {
        *b = *b - (2 * (*a));
        goto repeat;
    }
    else
        return false;
}