#include<vector>
#include<iostream>
#include<queue>
#include<deque>
std::vector<std::vector<int>> ts;
int which(int num){
    for(int i=0;i<ts.size();++i){
        for(int j=0;j<ts[i].size();++j){
            if(ts[i][j]==num){
                return i;
            }
        }
    }
}
int main(){
    int ti,te,temp,times=0;
    std::string s;
    while(true){
        std::cin>>ti;
        if(ti==0){
            return 0;
        }
        else{
            std::cout<<"Scenario #"<<++times<<std::endl;
            ts.clear();
            ts.resize(ti);
            for(int i=0;i<ti;++i){
                std::cin>>te;
                ts[i].resize(te);
                for(int j=0;j<te;++j){
                    std::cin>>ts[i][j];
                }
            }
            std::deque<std::queue<int>> t;
            while(true){
                std::cin>>s;
                if(s[0]=='S'){
                    std::cout<<std::endl;
                    break;
                }
                else if(s[0]=='E'){
                    std::cin>>temp;
                    bool f=true;
                    for(auto& i:t){
                        if(which(i.front())==which(temp)){
                            i.push(temp);
                            f=false;
                        }
                    }
                    if(f){
                        t.resize(t.size()+1);
                        t.back().push(temp);
                    }
                }
                else{
                    if(!t.empty()){
                        std::cout<<t.front().front()<<std::endl;
                        t.front().pop();
                        if(!t.empty()){
                            if(t.front().empty()){
                                t.pop_front();
                            }
                        }
                    }
                }
            }
        }
    }
}