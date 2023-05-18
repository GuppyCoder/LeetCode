#include <iostream>

// Goal: Push all the Ones to the back of the array
int main()
{
    int array[2] = {3, 1};
    int length = sizeof(array)/ sizeof(int);
    for(int i = 0; i < length; i++)
    {
        while(array[i] == 3)
        {
            array[i] = array[length - 1];
            length--;
        }
    }

    for(int i = 0; i < length; i++)
    {
        std::cout << array[i] << ' ';
    }
    std::cout << std::endl;
}