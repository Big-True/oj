#include<set>
#include<iostream>
#include<string>
int main(){
    std::string t;
    std::set<std::string> v;
    while(std::cin>>t){
        v.insert(t);
    }
    for(auto i:v){
        for(int j=1;j<i.size();++j){
            if(v.count(i.substr(0,j)) && v.count(i.substr(j,i.size()-j))){
                std::cout<<i<<std::endl;
                break;
            }
        }
    }
    return 0;
}