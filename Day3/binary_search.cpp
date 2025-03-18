#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int binary_search(std::vector<int>&v1, int key){
    // Binary search only works on sorted arrays.
    sort(v1.begin(), v1.end());

    int low = 0;
    int high = v1.size() - 1;
    while(low <= high){
        int mid = (low + high)/2;
        if(v1[mid] == key) return mid;
        if (v1[mid] < key) {low = mid + 1;}
        if (v1[mid] > key) {high = mid - 1;}

    }
    return -1;
}
int main(){
    std::vector<int>v1{12, 45, 88, -9, 99, -1};
    int key;
    cin>>key;
    
    int index = binary_search(v1, key);
    if(index != -1){
        cout<<"element found !! at index : "<<index<<"th "<<endl;
    }
    else{
        cout<<"Element not found!!"<<endl;
    }
    return  0;
}