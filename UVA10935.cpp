#include<iostream>
#include<queue>
int main(){
    int t;
    while(true){
        std::queue<int> q;
        std::cin>>t;
        if(t==0){
            return 0;
        }
        else{
            for(int i=1;i<=t;i++){
                q.push(i);
            }
            std::cout<<"Discarded cards:";
            while(q.size()>1){
                std::cout<<' '<<q.front();
                if(q.size()>2){
                    std::cout<<',';
                }
                q.pop();
                t=q.front();
                q.pop();
                q.push(t);
            }
            std::cout<<'\n'<<"Remaining card: "<<q.front()<<std::endl;
        }
    }
}