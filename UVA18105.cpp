#include<set>
#include<string>
#include<iostream>
#include<algorithm>
int main(){
    std::set<std::string> s;
    char c;
    std::string str;
    std::cin>>std::noskipws;
    while(std::cin>>c){
        if(isalpha(c)){
            str.push_back(isupper(c)?tolower(c):c);
        }
        else if(str!=""){
            s.insert(str);
            str="";
        }
    }
    for(auto d:s){
        std::cout<<d<<std::endl;
    }
    return 0;
}