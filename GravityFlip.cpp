//link: https://ibb.co/mN2Sxjh
#include <iostream>
#include <iterator>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void print(int *array, int n)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
int main()
{

    int n;
    std::cin >> n;
    int array[n];
    for (int i = 0; i < n; ++i)
        std::cin >> array[i];

    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n - i; ++j)
            if (array[j] > array[j + 1])
                swap(&array[j], &array[j + 1]);
    print(array, n);
    return 0;
}