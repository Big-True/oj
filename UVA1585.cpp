#include<iostream>
#include<string>
int main(){
    std::string a;
    long b=0,c=0,s=0;
    std::cin>>s;
    for(std::size_t i=0;i<s;i++){
        b=c=0;
        std::cin>>a;
        for(auto d:a){
            d=='X'?b=0:c+=++b;
        }
        std::cout<<c<<std::endl;
    }
    return 0;
}