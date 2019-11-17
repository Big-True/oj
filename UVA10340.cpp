#include<iostream>
#include<string>
int main(){
    std::string a,b;
    std::size_t s=0;
    while(std::cin>>a>>b){
        s=0;
        for(auto i=b.begin();i!=b.end();i++){
            if(a[s]==*i){
                s++;
            }
        }
        std::cout<<(s==a.size()?"Yes":"No")<<std::endl;
    }
    return 0;
}