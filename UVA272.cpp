#include<iostream>
#include<string>
int main(){
    char a;
    bool beg=false;
    while((a=std::cin.get())!=EOF){
        if(a!='\"'){
            std::cout<<a;
        }
        else{
            beg=not beg;
            std::cout<<(beg?"``":"''");
        }
    }
    return 0;
}