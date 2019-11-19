#include<iostream>
#include<vector>
std::vector<int> v;
bool isempty(){
    for(auto i:v){
        if(i!=0){
            return false;
        }
    }
    return true;
}
int main(){
    int a,b,c;
    bool l=false;
    while(true){
        std::cin>>a>>b>>c;
        if(a==0){
            return 0;
        }
        else{
            l=false;
            v.clear();
            for(int i=1;i<=a;++i){
                v.push_back(i);
            }
            int ta=v.size()-1,tb=0;
            while(!isempty()){
                int t=0;
                while(t!=b){
                    ta=(ta+1)%v.size();
                    if(v[ta]!=0){
                        t++;
                    }
                }
                t=0;
                while(t!=c){
                    tb=(tb+v.size()-1)%v.size();
                    if(v[tb]!=0){
                        t++;
                    }
                }
                if(ta==tb){
                    v[ta]=0;
                    v[tb]=0;
                    if(l){
                        std::cout<<',';
                    }
                    l=true;
                    if(ta+1>99){
                        std::cout<<ta+1;
                    }
                    else if(ta+1>9){
                        std::cout<<' '<<ta+1;
                    }
                    else{
                        std::cout<<"  "<<ta+1;
                    }
                }
                else{
                    if(l){
                        std::cout<<',';
                    }
                    l=true;
                    if(ta+1>99){
                        std::cout<<ta+1;
                    }
                    else if(ta+1>9){
                        std::cout<<' '<<ta+1;
                    }
                    else{
                        std::cout<<"  "<<ta+1;
                    }
                    v[ta]=0;
                    if(tb+1>99){
                        std::cout<<tb+1;
                    }
                    else if(tb+1>9){
                        std::cout<<' '<<tb+1;
                    }
                    else{
                        std::cout<<"  "<<tb+1;
                    }
                    v[tb]=0;
                }
            }
            std::cout<<std::endl;
        }
    }
}