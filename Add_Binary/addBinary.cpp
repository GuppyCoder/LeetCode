#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string a = "1", b = "1", carry = "", sum_binary = "";

    auto a_it = a.end() - 1, b_it = b.end() - 1, carry_it = carry.end() - 1;

    while(a_it >= a.begin() && b_it >= b.begin())
    {
        if(carry.empty())
        {
            // '1' '0' or '0' '1'
            if(*a_it == '0' && *b_it == '1' || *a_it == '1' && *b_it == '0')
            {
                sum_binary.push_back('1');
                a_it--; b_it--;
            }

            // '0' '0' or '1' '1'
            if(*a_it == *b_it)
            {
                if(*a_it == '0')
                    sum_binary.push_back('0');
                else
                {
                    sum_binary.push_back('0');
                    carry.push_back('1');
                }
                a_it--; b_it--;
            }
        }
    }

    std::reverse(sum_binary.begin(), sum_binary.end());

    for(auto c: sum_binary)
    {
        std::cout << c << ' ';
    }
    std::cout << std::endl;



}