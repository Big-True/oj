#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
int main(){
    std::string a,b;
    while(true){
        if(std::cin>>a>>b){
            std::vector<int> c(26),d(26);
            for(auto i:a){
                c[i-65]++;
            }
            for(auto i:b){
                d[i-65]++;
            }
            std::sort(c.begin(),c.end());
            std::sort(d.begin(),d.end());
            std::cout<<(c==d?"YES":"NO")<<std::endl;
        }
        else{
            return 0;
        }
    }
}