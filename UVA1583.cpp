#include<iostream>
#include<vector>
int to2(int data){
    int temp=0;
    while(data!=0){
        temp+=(data%10);
        data/=10;
    }
    return temp;
}
int main(){
    int times=0,temp=0;
    std::vector<int>t(100001);
    for(int i=0;i<=100000;++i){
        t[to2(i)+i]=(t[to2(i)+i]==0?i:t[to2(i)+i]);
    }
    std::cin>>times;
    for(int i=0;i<times;++i){
        std::cin>>temp;
        std::cout<<t[temp]<<std::endl;
    }
    return 0;
}