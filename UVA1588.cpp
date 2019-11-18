#include<iostream>
#include<vector>
#include<string>
int main(){
    std::vector<int> a,b;
    std::string t1,t2;
    while(true){
        a.clear();
        b.clear();
        if(std::cin>>t1>>t2){
            int min=201;
            for(auto t:t1){
                a.push_back(t=='1'?1:2);
            }
            for(auto t:t2){
                b.push_back(t=='1'?1:2);
            }
            for (int i = 0; i < a.size()+b.size(); i++)
            {
                std::vector<int> c(a.size()*2+b.size());
                for (int j = 0; j < b.size(); j++)
                {
                    c[a.size()+j]=b[j];
                }
                for (int j = 0; j < a.size(); j++)
                {
                    c[i+j]+=a[j];
                }
                bool f=true;
                int tmin=0;
                for(auto t:c){
                    if(t<4){
                        if(t!=0){
                            tmin++;
                        }
                    }
                    else{
                        f=false;
                    }
                }
                if(f){
                    min=min<tmin?min:tmin;
                }
            }
            std::cout<<min<<std::endl;
        }
        else{
            break;
        }
    }
    return 0;
}