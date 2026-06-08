
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Solution {
public:
    long long minEnergy(int n, int brightness, vector<vector<int>>& intervals) {
        // merge intervals 
        vector<vector<int> > new_inter;
        for (size_t i = 0; i < intervals.size() ; i++)
        {
            if (i+1 < intervals.size() && ( intervals[i][1] > intervals[i+1][0]))
            {
                vector<int> tmp ;
                tmp.push_back(intervals[i][0]);
                tmp.push_back(intervals[i+1][1]);
                new_inter.push_back(tmp);
            }
        }
        long long res = 0;
        for (size_t i = 0; i < new_inter.size(); i++)
        {
            res += ((new_inter[i][1] - new_inter[i][0]) + 1) * (ceil(n / 3)) ;
        }
        return res;
    }
};

int main()
{
    Solution s;
    
    vector<vector<int> > intervals;
    vector<int> vec ;
    vec.push_back(1);
    vec.push_back(3);
    intervals.push_back(vec);
    vector<int> tmp ;
    tmp.push_back(2);
    tmp.push_back(4);
    intervals.push_back(tmp);
    cout << s.minEnergy(4,2, intervals) << endl;;
    return 0;
}

