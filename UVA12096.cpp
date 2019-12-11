#include <iostream>
#include <set>
#include <stack>
#include <string>
#include <vector>
#include <algorithm>
std::vector<std::set<int>> v({{}});
int getid(std::set<int> s)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (s == v[i])
        {
            return i;
        }
    }
    v.push_back(s);
    return v.size() - 1;
}
int main()
{
    int times, ttimes;
    std::string s;
    std::cin >> times;
    for (int i = 0; i < times; i++)
    {
        v.clear();
        v.push_back({});
        std::stack<std::set<int>> st;
        std::cin >> ttimes;
        for (int j = 0; j < ttimes; j++)
        {
            std::cin >> s;
            std::set<int> t1, t2, t;
            switch (s[0])
            {
            case 'P':
                st.push({});
                break;
            case 'D':
                t = st.top();
                st.push(t);
                break;
            case 'U':
                t1 = st.top();
                st.pop();
                t2 = st.top();
                st.pop();
                std::set_union(t1.begin(), t1.end(), t2.begin(), t2.end(), std::inserter(t, t.begin()));
                st.push(t);
                break;
            case 'I':
                t1 = st.top();
                st.pop();
                t2 = st.top();
                st.pop();
                std::set_intersection(t1.begin(), t1.end(), t2.begin(), t2.end(), std::inserter(t, t.begin()));
                st.push(t);
                break;
            case 'A':
                t = st.top();
                st.pop();
                st.top().insert(getid(t));
                break;
            }
            std::cout << st.top().size() << std::endl;
        }
        std::cout << "***" << std::endl;
    }
    return 0;
}