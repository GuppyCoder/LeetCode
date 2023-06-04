#include <iostream>
#include <vector>

int main()
{
    std::vector<int> ivec = {1, 2, 3, 4};
    auto left = ivec.begin(), right = ivec.end() - 1;
    while(left < right)
    {
        auto temp = *left;
        *left = *right;
        *right = temp;
        left++, right--;
    }
    for(auto i: ivec)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}