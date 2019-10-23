#include<iostream>
#include<string>
int main(){
    long times=0;
    std::cin>>times;
    for(int j=0;j<times;++j){
        std::string s;
        std::cin>>s;
        for(int i=1;i<=s.size();i++){
            if(s.size()%i==0){
                bool same=true;
                for(int j=0;j<s.size()/i;++j){
                    if(s.substr(0,i)!=s.substr(j*i,i)){
                        same=false;
                    }
                }
                if(same){
                    std::cout<<i<<std::endl;
                    break;
                }
            }
        }
    }
    return 0;
}