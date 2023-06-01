#include <iostream>
#include "sort_solution.cpp"

int main()
{
    int array[] = {1, 3, 4, 2, 5};
    int length = sizeof(array) / sizeof(int);
    Sort_array obj;
    obj.arraySort(array, length);
    for(int i = 0; i < length; i++)
    {
        std::cout << array[i] << std::endl;
    }
}