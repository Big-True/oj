#include<string>
#include<iostream>
#include<algorithm>
#include<vector>
std::string tolow(std::string s){
    for(auto &a:s){
        if(a>='A' && a<='Z'){
            a+=32;
        }
    }
    std::sort(s.begin(),s.end());
    return s;
}
int main(){
    std::vector<std::pair<int,std::pair<std::string,std::string>>> v;
    std::string str;
    while(std::cin>>str){
        if(str=="#"){
            break;
        }
        bool f=true;
        for(auto& i:v){
            if(i.second.second==tolow(str)){
                f=false;
                i.first++;
                break;
            }
        }
        if(f){
            v.push_back({1,{str,tolow(str)}});
        }
    }
    std::sort(v.begin(),v.end(),[](std::pair<int,std::pair<std::string,std::string>> v1,std::pair<int,std::pair<std::string,std::string>> v2){return v1.second.first<v2.second.first;});
    for(auto i:v){
        if(i.first==1){
            std::cout<<i.second.first<<std::endl;
        }
    }
    return 0;
}