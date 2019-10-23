#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
long ch(char c){
    switch (c)
    {
    case 'C':
        return 12010;
        break;
    case 'H':
        return 1008;
        break;
    case 'O':
        return 16000;
        break;
    case 'N':
        return 14010;
        break;
    }
    return 0;
}
int main(){
    int times=0;
    std::cout<<std::fixed<<std::setprecision(3);
    std::cin>>times;
    for(std::size_t i=0;i<times;++i){
        std::string now;
        std::cin>>now;
        long result=0;
        int temp=0;
        char tempch=now[0];
        for(std::size_t i=1;i<now.size();i++){
            switch (now[i])
            {
            case 'C':
                result+=(temp==0?1:temp)*ch(tempch);
                temp=0;
                tempch='C';
                break;
            case 'H':
                result+=(temp==0?1:temp)*ch(tempch);
                temp=0;
                tempch='H';
                break;
            case 'O':
                result+=(temp==0?1:temp)*ch(tempch);
                temp=0;
                tempch='O';
                break;
            case 'N':
                result+=(temp==0?1:temp)*ch(tempch);
                temp=0;
                tempch='N';
                break;
            default:
                temp=temp*10+now[i]-'0';
                break;
            }
        }
        result+=(temp==0?1:temp)*ch(tempch);
        std::cout<<double(result)/1000<<std::endl;
    }
    return 0;
}