#include<iostream>
#include<vector>
#include<string>
std::vector<std::vector<int>> v;
std::pair<int,int> find(int a){
    for(int i=0;i<v.size();++i){
        for(int j=0;j<v[i].size();++j){
            if(v[i][j]==a){
                return std::pair<int,int> {i,j};
            }
        }
    }
}
void reput(int a){
    std::pair<int,int> p=find(a);
    for(int i=p.second+1;i<v[p.first].size();++i){
        v[v[p.first][i]].push_back(v[p.first][i]);
    }
    v[p.first].resize(p.second+1);
}
void put(int a,int b){
    std::pair<int,int> p=find(a);
    std::pair<int,int> q=find(b);
    for(int i=p.second;i<v[p.first].size();++i){
        v[q.first].push_back(v[p.first][i]);
    }
    v[p.first].resize(p.second);
}
int main(){
    int s,a,b;
    std::string s1,s2;
    std::cin>>s;
    v.resize(s);
    for(int i=0;i<s;++i){
        v[i]={i};
    }
    while(true){
        std::cin>>s1;
        if(s1=="quit"){
            break;
        }
        else{
            std::cin>>a>>s2>>b;
            if(find(a).first!=find(b).first){
                if(s1=="move"){
                    if(s2=="onto"){
                        reput(a);
                        reput(b);
                        put(a,b);
                    }
                    else{
                        reput(a);
                        put(a,b);
                    }
                }
                else{
                    if(s2=="onto"){
                        reput(b);
                        put(a,b);
                    }
                    else{
                        put(a,b);
                    }
                }
            }
        }
    }
    for(int i=0;i<v.size();++i){
        std::cout<<i<<':';
        for(int j=0;j<v[i].size();++j){
            std::cout<<' '<<v[i][j];
        }
        std::cout<<std::endl;
    }
    return 0;
}