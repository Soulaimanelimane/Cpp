#include "test.hpp"
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>

template <typename T> 
T add(T a , T b)
{
    return a+b;
}

std::vector<int> jackopstall_dq(int sz)
{
    std::vector<int> ord;
    if (sz == 0)
        return ord;
    
    ord.push_back(0);
    if (sz == 1)
        return ord;
        
	int elem1 = 1;
    int elem2 = 1;
    int prev = 1;

	while (elem2 <= sz)
	{
		int next = elem2 + 2 * elem1;
		elem1 = elem2;
		elem2 = next;

		for (int k = elem2 - 1; k >= prev; k--)
		{
			if (k < sz)
				ord.push_back(k);
		}
		prev = elem2;
	}
	return ord;
}


int main()
{
    std::vector<int> ord = jackopstall_dq(4);
    for (size_t i = 0; i < ord.size(); i++)
    {
        std::cout << ord[i] << std::endl;
    }
    
    
}