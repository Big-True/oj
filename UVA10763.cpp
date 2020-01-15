#include<iostream>
#include<vector>
#include<algorithm>
int main(){
    int times;
    while(true)
    {
        std::cin>>times;
        std::vector<int> v1(times),v2(times);
        if(times==0){
            return 0;
        }
        else{
            for(int i=0;i<times;i++){
                std::cin>>v1[i]>>v2[i];
            }
            std::sort(v1.begin(),v1.end());
            std::sort(v2.begin(),v2.end());
            std::cout<<(v1==v2?"YES":"NO")<<std::endl;
        }
    }
}