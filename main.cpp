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

int main()
{
    std::stack<int> st;
    st.push(10);
    st.push(11);
    st.push(12);
    st.push(13);
    while (!st.empty())
    {
        std::cout << st.top() << std::endl;
        st.pop();
    }
    
}