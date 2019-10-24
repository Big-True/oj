#include<iostream>
#include<vector>
int main(){
    std::vector<std::vector<char>> map;
    char temp;
    int x=0,y=0;
    while (true)
    {
        for(int i=0;i<25;++i){
            temp=std::cin.get();
            if(temp=='Z'){
                break;
            }
            else if(temp==' '){
                y=i/5;
                x=i%5;
            }
            map[i/5][i%5]=temp;
        }
        while ((temp=std::cin.get())!='0')
        {
        }
        for(int i=0;i<5;++i){
            for(int j=0;j<5;++j){
                std::cout<<map[i][j];
            }
            std::cout<<std::endl;
        }
    }
    
    return 0;
}