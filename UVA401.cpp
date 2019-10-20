#include<iostream>
#include<string>
int main(){
    std::string s;
    std::string i("ABCDEFGHIJKLMNOPQRSTUVWXYZ123456789");
    std::string j("A   3  HIL JM O   2TUVWXY51SE Z  8 ");
    bool p=true,m=true;
    while(std::cin>>s){
        p=m=true;
        for(int k=0;k<=s.size()/2;++k){
            if(s[k]!=s[s.size()-1-k]){
                p=false;
            }
            if(i.find_first_of(s[k])!=j.find_first_of(s[s.size()-1-k])){
                m=false;
            }
        }
        std::cout<<s<<(p?(m?" -- is a mirrored palindrome.":" -- is a regular palindrome."):(m?" -- is a mirrored string.":" -- is not a palindrome."))<<std::endl<<std::endl;
    }
    return 0;
}