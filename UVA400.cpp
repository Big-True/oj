#include<vector>
#include<iostream>
#include<vector>
#include<iomanip>
#include<algorithm>
int main(){
    int times=0,len,strlen;
    std::vector<std::string> v;
    std::string tstr;
    int maxsize;
    while(std::cin>>times){
        v.clear();
        maxsize=0;
        std::getline(std::cin,tstr);
        for(int i=0;i<times;++i){
            std::cin>>tstr;
            maxsize=maxsize>tstr.size()?maxsize:tstr.size();
            v.push_back(tstr);
        }
        std::sort(v.begin(),v.end());
        strlen=maxsize+2;
        len=62/strlen;
        int lenth=(v.size()-1)/len+1,now=0;
        std::vector<std::string> out(lenth);
        for(auto i:v){
            out[now]+=i;
            out[now]+="  ";
            now=(now+1)%lenth;
        }
        std::cout<<"------------------------------------------------------------"<<std::endl;
        for(auto i:out){
            std::cout<<i.substr(0,i.size()-2)<<std::endl;
        }
    }
    return 0;
}