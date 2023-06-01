#include <iostream>
#include "solution.cpp"
int main()
{
    std::vector<int> ivec = {5,1,2,3,4};
    Solution obj;
    std::cout << obj.heightChecker(ivec) << std::endl;
}