#include<iostream>
#include<string>
#include<vector>
#include<iomanip>
int main(){
    std::string s;
    int h,w,now,times;
    while(true){
        std::cin>>h;
        std::vector<std::vector<char>> map;
        if (h==0)
        {
            return 0;
        }
        std::cin>>w;
        map.resize(h,std::vector<char>(w));
        for(int i=0;i<h;i++){
            std::cin>>s;
            for(int j=0;j<w;j++){
                map[i][j]=s[j];
            }
        }
        now=0;
        if(times!=0){
            std::cout<<std::endl;
        }
        std::cout<<"puzzle #"<<++times<<":"<<std::endl<<"Across"<<std::endl;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(map[i][j]!='*'){
                    if(j==0 || map[i][j-1]=='*'){
                        std::cout<<std::setw(3)<<++now<<'.';
                        for(int n=j;n<w;n++){
                            if(map[i][n]!='*'){
                                std::cout<<map[i][n];
                            }
                            else{
                                break;
                            }
                        }
                        std::cout<<std::endl;
                    }
                    else if(i==0 || map[i-1][j]=='*'){
                        now++;
                    }
                }
            }
        }
        std::cout<<"Down"<<std::endl;
        now=0;
        for(int i=0;i<h;i++){
            for(int j=0;j<w;j++){
                if(map[i][j]!='*'){
                    if(i==0 || map[i-1][j]=='*'){
                        std::cout<<std::setw(3)<<++now<<'.';
                        for(int n=i;n<h;n++){
                            if(map[n][j]!='*'){
                                std::cout<<map[n][j];
                            }
                            else{
                                break;
                            }
                        }
                        std::cout<<std::endl;
                    }
                    else if(j==0 || map[i][j-1]=='*'){
                        now++;
                    }
                }
            }
        }
    }
    return 0;
}