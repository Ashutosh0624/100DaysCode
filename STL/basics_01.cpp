#include<iostream>
#include<vector>
using namespace std;

int sumArr(std::vector<int> &v1){
    int sum = 0;
    for(auto &item: v1){
        sum += item;
    }

    return sum;
}

int main(){
   
    std::vector<int>v1{1,2,3,4,5};
    int sum = sumArr(v1);
    cout<<sum<<endl;
    return 0;

}