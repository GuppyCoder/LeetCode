#include <vector>
class Solution
{
    public:
        int findMaxConsecutiveOnes(std::vector<int>& ivec);
};

int Solution::findMaxConsecutiveOnes(std::vector<int>& ivec)
{
    int length = ivec.size();
    int left = 0, right = 0, longestSequence = 0;
    int numsZero = 0;
    // while our window is in bounds
    while(right < length)
    {
        // if our right element is 0
        if(ivec[right] == 0)
            numsZero++;
        
        // if our window is invalid expand it
        while(numsZero == 2){
            if(ivec[left] == 0)
                numsZero++;
            left++;
        }

        if(longestSequence < (right - left + 1))
            longestSequence = right - left + 1;
        // expand our window
        right++;
    }
    return longestSequence;
}