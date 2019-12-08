#include<iostream>
#include<vector>
#include<algorithm>
#include<iomanip>
int main(){
    int w,h,size;
    while (true)
    {
        std::cin>>w>>h;
        if(w!=0){
            std::vector<int> a(w*h);
            for (int i = 0; i < w*h; i++)
            {
                std::cin>>a[i];
            }
            std::cin>>size;
            std::sort(a.begin(),a.end());
            std::vector<std::pair<int,int>> p;
            for(auto i:a){
                if(p.empty()){
                    p.push_back({i,1});
                }
                else{
                    if(p.back().first==i){
                        p.back().second++;
                    }
                    else{
                        p.push_back({i,1});
                    }
                }
            }
            int h=a[0];
            int s=1;
            while((p.size()!=s)&&(h-100*(p[s].first-p[s-1].first)*p[s-1].second>0)){
                h-=100*(p[s].first-p[s-1].first)*p[s-1].second;
                s++;
            }
            if(p.size()==s){
                std::cout<<std::setprecision(2)<<((float)h)/(100.0*w*h)+a.back()<<std::endl;
            }
            else{
                std::cout<<std::setprecision(2)<<((float)h)/(100.0*p[s].second)+p[s-1].first<<std::endl;
            }
        }
        else{
            return 0;
        }
    }
}