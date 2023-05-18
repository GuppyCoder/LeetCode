/*The following program will show how to delete from the beginning and the end of an array.*/
#include <iostream>

int main()
{
    int array[10];
    int length = 0;
    for(int i = 0; i < 10; i++)
    {
        array[i] = i;
        length++;
        std::cout << i;
    }
    std::cout << std::endl;

    // Deleting from the end
    length--;

    for(int i = 0; i < length; i++)
    {
        std::cout << i;
    }
    std::cout << std::endl;

    // Deleting from the beginning
    for(int i = 1; i < length; i++)
    {
        array[i-1] = array[i];
    }
    length--;

    for(int i = 0; i < length; i++)
    {
        std::cout << array[i];
    }
    std::cout << std::endl;
}