#include<iostream>
#include<vector>
#include<algorithm>
int g(char c){
    switch (c)
    {
    case 'r':
        return 1;
    case 'g':
        return 2;
    case 'b':
        return 4;
    }
}
int main(){
    char a,b,c,d,e,f;
    while(true){
        if(std::cin>>a>>b>>c>>d>>e>>f){
            std::vector<int> s1({g(a)+g(f),g(b)+g(e),g(c)+g(d)});
            std::cin>>a>>b>>c>>d>>e>>f;
            std::vector<int> s2({g(a)+g(f),g(b)+g(e),g(c)+g(d)});
            std::sort(s1.begin(),s1.end());
            std::sort(s2.begin(),s2.end());
            std::cout<<(s1==s2?"TRUE":"FALSE")<<std::endl;
        }
        else{
            return 0;
        }
    }
}