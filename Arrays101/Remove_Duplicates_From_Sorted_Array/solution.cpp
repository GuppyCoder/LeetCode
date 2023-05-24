#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec = {1, 1, 2};
    int size = ivec.size();
    int length = size;

    for(int i = 1, j = 0; i < size; i++)
    {
        if(ivec[i] == ivec[j])
        {
            length--;
        }
        else
        {
            ivec[j+1] = ivec[i];
            j++;
        }
    }

    std::cout << length << std::endl;

}