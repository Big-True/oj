#include<iostream>
#include<vector>
std::vector<int> step(std::vector<int> &v){
    std::vector<int> t(v.size());
    for(int i=0;i<v.size();i++){
        t[i]=abs(v[i]-v[(i+1)%v.size()]);
    }
    return t;
}
int main(){
    int times,sets,loops;
    std::cin>>times;
    for(int i=0;i<times;i++){
        std::cin>>sets;
        std::vector<int> temp(sets);
        std::vector<std::vector<int>> v;
        for(int &j:temp){
            std::cin>>j;
        }
        v.push_back(temp);
        while(true)
        {
            v.push_back(step(v.back()));
            int f=1;
            for(auto i:v.back()){
                if(i!=0){
                    f=0;
                }
            }
            if(f==0){
                for(int j=0;j<v.size()-1;j++){
                    if(v[j]==v.back()){
                        f=2;
                        break;
                    }
                }
            }
            if(f==1){
                std::cout<<"ZERO"<<std::endl;
                break;
            }
            if(f==2){
                std::cout<<"LOOP"<<std::endl;
                break;
            }
        }
    }
    return 0;
}