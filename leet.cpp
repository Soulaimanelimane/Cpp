#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

class Solution {
public:
    size_t ft_convert_to_decimal(string str)
    {
        size_t res = 0;
        int p = (int)str.size() - 1;
        for (size_t i = 0; p >= 0; i++)
        {
            if (str[p] == '1')
                res += pow(2,i); 
            p--;
        }
        return res;
    }
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> arr;
        arr.resize(nums.size());
        vector<string> dec;
        dec.resize(nums.size());
        
        for (size_t i = 0; i < nums.size() ; i++)
        {
            for (size_t j = 0; j <= i;j++)
                dec[i] += to_string(nums[j]);
        }
        size_t val = 0;
        for (size_t i = 0; i < dec.size(); i++)
        {
            val = ft_convert_to_decimal(dec[i]);
            // cout << val << endl;
            if (val % 5 == 0)
                arr.at(i) = true;
            else   
                arr.at(i) = false;
        }
        
        return arr;
    }
};

int main()
{ 
    Solution obj;
    vector<int> num= {1,0,1,0,0,0,0,0,0,0,0,1,1,1,0,0,1,0,1,1,1,1,1,1,0,0,0,1,0,1,1,1,1,0,1,1,0,1,0,1,0,0,0,1,0,0,0,0,0,1,0,0,1,1,0,0,1,1,1};
    vector <bool> ech = obj.prefixesDivBy5(num);
    for(bool e : ech)
    {
        cout << e << endl;
    }
}