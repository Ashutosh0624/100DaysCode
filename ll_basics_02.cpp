#include<iostream>
#include<algorithm>
#include<vector>
#include<list>

void add_elements(std::vector<int>&v1){
    for(int i=0; i<5; i++){
        v1.push_back(i*10);
    }
}
int main(){
    std::pair<int, int> p1{1,2};
    std::cout<<p1.first<<" "<<p1.second<<std::endl;
    int n = 3;
    std::vector<std::pair<int, int>>v1(n);
    for(int i = 0; i<n; i++){
        std::cin>>v1[i].first>>v1[i].second;
    }
    std::cout<<"Entered values are :"<<std::endl;
    for(int i=0; i<v1.size(); i++){
        std::cout<<v1[i].first<<" "<<v1[i].second<<std::endl;
    }
    swap(v1[0], v1[2]);
    std::pair<int, std::string>p2 {31, "Ashutosh"};
    std::cout<<p2.first<<" "<<p2.second<<std::endl;
    std::cout<<"Entered values are :"<<std::endl;
    for(int i=0; i<v1.size(); i++){
        std::cout<<v1[i].first<<" "<<v1[i].second<<std::endl;
    }
    std::vector<int>v2;
    std::cout<<std::endl;
    std::cout<<"Second vector"<<std::endl;
    add_elements(v2);
    for(int i=0; i<v2.size();i++){
        std::cout<<v2[i]<<" ";
    }
    return 0;
}