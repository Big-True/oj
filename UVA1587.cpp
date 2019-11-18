#include <vector>
#include <iostream>
#include <utility>
#include <algorithm>
int main()
{
    std::vector<std::pair<int, int>> p;
    std::vector<int> q;
    int a, b;
    bool l = true;
    while (true)
    {
        p.clear();
        l = false;
        for (int i = 0; i < 6; ++i)
        {
            if (std::cin >> a >> b)
            {
                l = true;
                p.push_back(a < b ? std::pair<int, int>({a, b}) : std::pair<int, int>({b, a}));
            }
        }
        if (l)
        {
            std::sort(p.begin(), p.end());
            if (p[0] == p[1] && p[2] == p[3] && p[4] == p[5])
            {
                q = {p[0].first, p[0].second, p[2].first, p[2].second, p[4].first, p[4].second};
                if ((q[0] == q[2] && q[1] == q[4] && q[3] == q[5]) || (q[0] == q[2] && q[1] == q[5] && q[3] == q[4]) || (q[0] == q[3] && q[1] == q[4] && q[2] == q[5]) || (q[0] == q[3] && q[1] == q[5] && q[2] == q[4]) || (q[0] == q[4] && q[1] == q[2] && q[3] == q[5]) || (q[0] == q[4] && q[1] == q[3] && q[2] == q[5]) || (q[0] == q[5] && q[1] == q[2] && q[3] == q[4]) || (q[0] == q[5] && q[1] == q[3] && q[2] == q[4]))
                {
                    std::cout << "POSSIBLE" << std::endl;
                    continue;
                }
            }
        }
        else
        {
            break;
        }
        std::cout << "IMPOSSIBLE" << std::endl;
    }
    return 0;
}