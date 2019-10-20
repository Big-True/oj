#include<iostream>
#include<string>
int main(){
    char a;
    bool in=false;
    std::string s="`1234567890-=QWERTYUIOP[]\\ASDFGHJKL;'ZXCVBNM,./";
    while((a=std::cin.get())!=EOF){
        in=false;
        for(int i=1;i!=48;++i){
            if(s[i]==a){
                std::cout<<s[i-1];
                in=true;
                break;
            }
        }
        if(in==false){
            std::cout<<a;
        }
    }
    return 0;
}