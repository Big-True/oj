#include <cmath>
#include <iostream>
int main()
{
    long double a, b;
    while (std::cin >> a)
    {
        std::getchar();
        std::cin >> b;
        if (a == 0 && b == 0)
        {
            break;
        }
        else
        {
            for (int m = 0; m <= 9; ++m)
            {
                for (int e = 1; e <= 30; ++e)
                {
                    if((1-pow(1/2,m))*pow(2,pow(2,e+1)-1)==a*pow(10,b)){
                        std::cout<<m<<' '<<e<<std::endl;
                    }
                }
            }
        }
    }
    return 0;
}