#include <iostream>
#include <vector>

class Solution
{
    public:
        std::vector<int> findDiagonalOrder(std::vector<std::vector<int>>& mat)
        {
            // Check for an empty matrix
            if(mat.empty() || mat.size() == 0)
            {
                std::vector<int> final;
                return final;
            }
            // Variables to track the size of the matrix
            int vectors = mat.size();
            int columns_in_vectors = mat[0].size();

            // Indices that will help us progress through
            // The matrix, one element at a time.
            int row = 0, col = 0;

            // keep track of the current direction
            int direction = 1;

            // final result of array
            std::vector<int> result(vectors * columns_in_vectors);
            int r = 0;  // index of our final array?

            // The Uber While loop will help us iterate over the entire array
            while(row < vectors && col < columns_in_vectors)
            {
                // firstly add the current element;
                result[r++] = mat[row][col];

                // depending on the direction 1 = up not1 = down.
                int new_row = row + (direction == 1 ? -1: 1);
                int new_col = col + (direction == 1 ? 1: -1);

                /* Checking to see if the next diagonal element is within the bounds of the matrix. If it is,
                 * we add it to the result. If it is not within bounds we need to find the next head. */
                if(new_row < 0 || new_row == vectors || new_col == columns_in_vectors || new_col < 0)
                {
                    // if current direction is upwards
                    if(direction == 1)
                    {
                        // Tail is hitting the last column or first row.
                        row += (col == columns_in_vectors - 1 ? 1: 0);  // if our column is at final column move down to the head.
                        col += (col < columns_in_vectors - 1 ? 1: 0);
                    }
                    else
                    {
                        // Tail is hitting first column of last row
                        row += (col == 0 ? 1: 0);
                        col += (col > 0 ? 1: 0);
                    }
                }else{
                    row = new_row;
                    col = new_col;
                }
            }
            return result;
        }
};