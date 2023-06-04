#include <vector>
#include <iostream>
#include <algorithm>

class Solution
{
    public:
        std::vector<int> findDiagonalOrder(std::vector<std::vector<int>>& vivec)
        {
            std::vector<int> diagonalOrder;
            std::vector<int> intermediate;

            // check if the vectors are empty
            if(vivec.empty() || vivec.size() == 0)
                return diagonalOrder;

            int vectors = vivec.size();
            int length_of_vectors = vivec[0].size();

            for(int i = 0; i < vectors + length_of_vectors - 1; i++)
            {
                intermediate.clear();

                // we need to figure out the heads of the diagonals which are the first row and last column respectively.
                int r = i < length_of_vectors ? 0 : i - length_of_vectors + 1;
                int c = i < length_of_vectors ? i : length_of_vectors - 1;

                // iterate until one of the indices goes out of scope.
                while(r < vectors && c > -1)
                {
                    intermediate.push_back(vivec[r][c]);
                    r++;
                    c--;
                }

                if(i % 2 == 0)
                {
                    std::reverse(intermediate.begin(), intermediate.end());
                }

                for(int i = 0; i < intermediate.size(); i++)
                {
                    diagonalOrder.push_back(intermediate[i]);
                }
            }
            return diagonalOrder;
        }
};