#include<iostream>
#include<vector>
int main(){
    int s,a,b,c,w,times=0;
    std::vector<std::vector<int>> v,p;
    while(true){
        std::cin>>s;
        if(s!=0){
            times++;
            w=0;
            v.clear();
            p.clear();
            for(int i=0;i<s;++i){
                std::cin>>a>>b>>c;
                v.push_back({a,-b-1,a-c+1});
            }
            bool r=true;
            while(r){
                std::vector<int>t;
                w=0;
                for(auto i:v){
                    if(i[2]<0){
                        w++;
                    }
                }
                if(p.size()==0){
                    w=s;
                }
                for(auto &i:v){
                    i[2]--;
                    if(i[2]==i[1]){
                        i[2]=i[0]-1;
                    }
                    if(i[2]==-1){
                        if(w<=s/2){
                            i[2]=i[0]-1;
                        }
                    }
                    t.push_back(i[2]);
                }
                p.push_back(t);
                bool f=true;
                for(auto i:t){
                    if(i<0){
                        f=false;
                    }
                }
                if(f){
                    std::cout<<"Case "<<times<<": "<<p.size()<<std::endl;
                    r=false;
                }
                else{
                    for(int i=0;i<p.size()-1;++i){
                        if(p[i]==p.back()){
                            std::cout<<"Case "<<times<<": "<<-1<<std::endl;
                            r=false;
                        }
                    }
                }
            }
        }
        else{
            return 0;
        }
    }
}