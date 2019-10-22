#include<iostream>
#include<string>
std::string min(std::string s1,std::string s2){
    for(std::size_t i=0;i<s1.size();++i){
        if(s1[i]<s2[i]){
            return s1;
        }
        else if(s1[i]>s2[i]){
            return s2;
        }
    }
    return s1;
}
void next(std::string &s){
    std::string temp;
    for(std::size_t i=1;i<s.size();++i){
        temp.push_back(s[i]);
    }
    temp.push_back(s[0]);
    s=temp;
}
int main(){
    int times=0,temp=0;
    std::cin>>times;
    for(std::size_t i=0;i<times;++i){
        std::string now,minstr;
        std::cin>>now;
        minstr=now;
        for(std::size_t j=0;j<minstr.size();++j){
            next(now);
            minstr=min(minstr,now);
        }
        std::cout<<minstr<<std::endl;
    }
    return 0;
}