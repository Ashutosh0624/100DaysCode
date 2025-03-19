#include<iostream>
#include<vector>
using namespace std;

int findUniqueNo(std::vector<int>&v){
    int res = 0;
     for(int i = 0; i<v.size(); i++){
         res ^= v[i];
     }
     return res;
}

int main(){
    std::vector<int>v1{1,2,2,3,3,4,4,5,5,6,6};
    int uNo = findUniqueNo(v1);
    cout<<"Univque number in the array = "<<uNo<<endl;
    return 0;
}