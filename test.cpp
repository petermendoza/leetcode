#include <iostream>
#include <stack>
#include <utility>

using namespace std;
int main()
{
    stack<pair<int, int>> st;
    st.push({5, 5});
    st.push({7, 7});
    cout << st.top().first;

    return 0;
}