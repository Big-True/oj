#include<iostream>
#include<vector>
int main(){
    long times=0;
    std::cin>>times;
    for(int j=0;j<times;++j){
        std::vector<int> count={0,0,0,0,0,0,0,0,0,0};
        int endnum=0;
        std::cin>>endnum;
        for(int i=1;i<=endnum;++i){
            count[i%10]++;
            if(i>9){
                count[((i-i%10)/10)%10]++;
            }
            if(i>99){
                count[((i-i%100)/100)%10]++;
            }
            if(i>999){
                count[((i-i%1000)/1000)%10]++;
            }
        }
        for(int i=0;i<10;++i){
            std::cout<<count[i]<<(i==9?'\n':' ');
        }
    }
    return 0;
}