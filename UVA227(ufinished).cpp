/*
当作最后一道做了 我就直接 太恶心了8
摘抄一下：
这道题有问题，描述不清楚，样例也不准确。下面的评论又在瞎猜限制条件，导致越想越复杂。实测限制是：
（1）Z之前可能没有'\n'
（2）‘0’之前移动序列有很多'\n'或空格，移动序列的非法只考虑越界，不考虑有其他字符
（3）输入迷宫矩阵不用考虑有多个空格，样例中有每行最后一个空格直接变成换行的情况，看别人AC的代码发现OJ里数据都是有空格的
（4）输出2个结果之间有空行，最后一个结果后无空行
最后，使用getchar()注意容易多吃或少吃字符，建议判断每一个ch=getchar()

限制条件多的一B
md自己给个好的格式不行吗
*/
#include<iostream>
#include<vector>
int main(){
    std::vector<std::vector<char>> map(5,std::vector<char>(' ',0));
    char temp;
    char temps[5];
    int times=0;
    int x=0,y=0;
    while (true)
    {
        bool rule=true;
        if(times!=0){
            std::cout<<std::endl;
        }
        for(int i=0;i<5;++i){
            std::cin.getline(temps,5,'\n');
            for(int j=0;j<5;++j){
                temp=temps[j];
                if(temp=='Z'){
                    return 0;
                }
                if(temp==' '){
                    x=j;
                    y=i;
                }
                map[i][j]=temp;
            }
        }
        temp=std::cin.get();
        std::cout<<temp;
        while(temp!='0')
        {
            switch (temp)
            {
            case 'A':
                if(y==0){
                    rule=false;
                }
                else{
                    std::swap(map[y][x],map[--y][x]);
                }
                break;
            case 'B':
                if(y==4){
                    rule=false;
                }
                else{
                    std::swap(map[y][x],map[++y][x]);
                }
                break;
            case 'L':
                if(x==0){
                    rule=false;
                }
                else{
                    std::swap(map[y][x],map[y][--x]);
                }
                break;
            case 'R':
                if(x==4){
                    rule=false;
                }
                else{
                    std::swap(map[y][x],map[y][++x]);
                }
                break;
            default:
                rule=false;
            }
        }
        std::cout<<"Puzzle #"<<++times<<":"<<std::endl;
        if(rule){
            for(int i=0;i<5;++i){
                for(int j=0;j<5;++j){
                    std::cout<<map[i][j];
                    if(j!=4){
                        std::cout<<' ';
                    }
                }
                std::cout<<std::endl;
            }
        }
        else{
            std::cout<<"This puzzle has no final configuration."<<std::endl;
        }
    }
    return 0;
}