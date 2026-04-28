#include <iostream>
#include <vector>
using namespace std;



class Solution {
public:
    int check_is_equl_zero(vector<int> vc)
    {
        int count = 0;
        size_t t = 0;
        while(t < vc.size())
        {
            count += vc[t];
            t++;
        }
        return count ;
    }
    vector<vector<int> > threeSum(vector<int>& nums) {
        vector<vector<int> > res; 

        size_t k = 0;
        for (size_t i = 0; i < nums.size() ; i++)
        {
            k = i;
            vector<int> tmp;
            tmp.push_back(nums[i]);
            for (size_t j = k + 1; j < k + 2 && j < nums.size()  ; j++)
            {
                tmp.push_back(nums[i]);
            }
            if (check_is_equl_zero(tmp) == 0)
                res.push_back(tmp);
        }
    }
};


int main()
{
    vector<int> arr = {-1,0,1,2,-1,-4};
    Solution s;
    vector<vector<int> > vc = s.threeSum(arr);
    for (size_t i = 0; i < vc.size(); i++)
    {
        vector<int> tmp = vc[i];
        cout << "[ " ;
        for (size_t j = 0; j < tmp.size(); j++)
        {
            cout << tmp[j] << " , ";
        }
        cout << "]"  << endl;
    }
    
}