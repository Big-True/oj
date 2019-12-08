#include<iostream>
#include<vector>
#include<algorithm>
int main(){
    int a,b,c,t=1;
    while (true)
    {
        std::cin>>a>>b;
        if(a!=0){
            std::vector<int> v(a);
            for(int i=0;i<a;++i){
                std::cin>>v[i];
            }
            std::sort(v.begin(),v.end());
            std::cout<<"CASE# "<<t++<<":"<<std::endl;
            for(int i=0;i<b;++i){
                std::cin>>c;
                bool l=true;
                for(int j=0;j<v.size();++j){
                    if(v[j]==c){
                        std::cout<<c<<" found at "<<j+1 <<std::endl;
                        l=false;
                        break;
                    }
                }
                if(l){
                    std::cout<<c<<" not found"<<std::endl;
                }
            }
        }
        else{
            return 0;
        }
    }
    
}