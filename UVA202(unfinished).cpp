#include<iostream>
#include<vector>
int main(){
    int a,b,remain,times,rnd;
    std::vector<int> rem;
    std::cin>>times;
    for (int i = 0; i < times; i++)
    {
        std::cin>>a>>b;
        std::cout<<a<<'/'<<b<<" = "<<a/b<<'.';
        remain=a%b;
        rnd=0;
        while(true){
            rem.push_back(remain);
            remain*=10;
            if(remain==0){
                rnd=0;
                break;
            }
            for(auto j: rem){
                if(j==remain%b){
                    break;
                }
            }
            rnd++;
            std::cout<<remain/b;
            remain%=b;
        }
        std::cout<<'('<<rnd<<')'<<std::endl;
    }
    
    return 0;
}