#include<vector>
#include<iostream>
#include<string>
#include<iomanip>
int main(){
    std::vector<std::vector<std::string>> s{{""}};
    std::string str;
    char c;
    bool f=true;
    while(std::getline(std::cin,str))
    {
        f=true;
        for(auto i:str)
        {
            if(i==' '){
                if(s.back().back()!=""){
                    s.back().push_back("");
                    f=true;
                }
            }
            else{
                s.back().back()+=i;
                f=false;
            }
        }
        if(f){
            s.back().pop_back();
        }
        if(std::cin.peek()==EOF){
            break;
        }
        s.push_back({""});
    }
    int size=0;
    for(auto i:s){
        size=i.size()>size?i.size():size;
    }
    std::vector<int> lenth(size);
    for(auto i:s){
        for(int j=0;j<i.size();++j){
            lenth[j]=i[j].size()>lenth[j]?i[j].size():lenth[j];
        }
    }
    for(int i=0;i<s.size();++i){
        for(int j=0;j<s[i].size();++j){
            if(j+1!=s[i].size()){
                std::cout<<std::setiosflags(std::ios::left)<<std::setw(lenth[j]+1);
            }
            std::cout<<s[i][j];
        }
        std::cout<<std::endl;
    }
    return 0;
}