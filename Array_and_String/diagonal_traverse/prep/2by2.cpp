#include "diagonal_2by2.cpp"

int main()
{
    std::vector<std::vector<int>> vivec = {{1,2,3,4},{3,4,5,6}};

    for(auto i = 0; i < vivec.size(); i++)
    {
        for(auto j = 0; j < vivec[0].size(); j++)
        {
            std::cout << vivec[i][j] << ' ';
        }
        std::cout << std::endl;
    }

    Solution obj;
    std::vector<int> diagonal = obj.findDiagonalOrder(vivec);
    for(auto i: diagonal)
    {
        std::cout << i << ' ';
    }
    std::cout << std::endl;
}