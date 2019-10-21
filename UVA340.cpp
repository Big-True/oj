#include<iostream>
#include<vector>
#include<algorithm>
int main(){
    int s=0,times=0;
    int temp=0,temp2=0;
    while(std::cin>>s){
        if(s==0){
            break;
        }
        std::cout<<"Game "<<++times<<":"<<std::endl;
        std::vector<int> result;
        for(int i=0;i<s;i++){
            std::cin>>temp;
            result.push_back(temp);
        }
        while(true){
            temp2=0;
            std::vector<int> now;
            for(int i=0;i<s;i++){
                std::cin>>temp;
                temp2+=temp;
                now.push_back(temp);
            }
            if(now[0]==0){
                break;
            }
            int t1=0,t2=0;
            for(int i=0;i<s;i++){
                if(result[i]==now[i]){
                    t1++;
                }
            }
            for(int j=1;j<10;j++){
                int s1=0,s2=0;
                for(int i=0;i<s;i++){
                    if(result[i]==j){
                        s1++;
                    }
                    if(now[i]==j){
                        s2++;
                    }
                }
                t2+=std::min(s1,s2);
            }
            std::cout<<"    ("<<t1<<","<<t2-t1<<")"<<std::endl;
        }
    }
    return 0;
}