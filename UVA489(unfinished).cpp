/*
又是一道智障题
下面直接提醒我别做可还行
*/
#include <string>
#include <iostream>
int main()
{
    int times;
    std::string s, t;
    while (true)
    {
        int lt = 0;
        std::cin >> times;
        if (times == -1)
        {
            return 0;
        }
        std::cin >> s >> t;
        for (auto i : t)
        {
            bool l = false;
            for (int j = 0; j < s.size(); j++)
            {
                if (s[j] == i)
                {
                    l = true;
                    s[j] = ' ';
                }
            }
            if (l == false)
            {
                lt++;
            }
        }
        std::cout << "Round " << times << "\nYou ";
        bool l = false;
        for (auto j : s)
        {
            if (j != ' ')
            {
                l = true;
            }
        }
        if (l == false)
        {
            std::cout << "win." << std::endl;
            continue;
        }
        if (lt > 6)
        {
            std::cout << "lose." << std::endl;
            continue;
        }
        std::cout << "chickened out." << std::endl;
    }
}