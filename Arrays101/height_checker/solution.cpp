#include <algorithm>
#include <vector>

struct Solution{
    int heightChecker(std::vector<int>& ivec)
    {
        std::vector<int> order = ivec;

        std::sort(order.begin(), order.end());

        int length = ivec.size();

        int count = 0;
        for(int i = 0; i < length; i++)
        {
            if(ivec[i] != order[i])
                count++;
        }
        return count;
    }
};