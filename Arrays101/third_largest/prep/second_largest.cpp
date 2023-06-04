#include <iostream>

int main()
{
    int array[] = {1, 2, 3, 4, 5};

    int length = sizeof(array) / sizeof(int);
    int max = 0, second_max = 0, third_max = 0;

    
    for(int i = 0; i < length; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
    }

    for(int i = 0; i < length; i++)
    {
        if(second_max < array[i] && array[i] < max)
        {
            second_max = array[i];
        }
    }

    for(int i = 0; i < length; i++)
    {
        if(third_max < array[i] && array[i] < second_max)
            third_max = array[i];
    }
    std::cout << "First Max: " << max << ' ' << "Second Max: " << second_max << ' ' << "Third max: " << third_max << std::endl;
}