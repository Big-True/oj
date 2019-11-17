#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
int main(){
    int times,h,w;
    std::cin>>times;
    for(int i=0;i<times;++i){
        std::cin>>h>>w;
        std::vector<std::string> dna(h);
        for(int j=0;j<h;++j){
            std::cin>>dna[j];
        }
        int total=h*w;
        for(int j=0;j<w;++j){
            std::vector<int> num={0,0,0,0};
            for(int k=0;k<h;++k){
                switch (dna[k][j])
                {
                case 'A':
                    num[0]++;
                    break;
                case 'C':
                    num[1]++;
                    break;
                case 'G':
                    num[2]++;
                    break;
                case 'T':
                    num[3]++;
                    break;
                }
            }
            total-=std::max(std::max(num[0],num[1]),std::max(num[2],num[3]));
            for(int k=0;k<4;++k){
                if(num[k]==std::max(std::max(num[0],num[1]),std::max(num[2],num[3]))){
                    std::cout<<std::vector<char>({'A','C','G','T'})[k];
                    break;
                }
            }
        }
        std::cout<<std::endl<<total<<std::endl;
    }
    return 0;
}