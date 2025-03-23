#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findNos(std::vector<int>&v1, int key){
    int start = 0;
    int end = v1.size()-1;

    while(start <= end){
        int mid = (start + end) / 2;
        if(v1[mid] == key){
            return mid;
        }
        if(v1[mid] < key){
            start = mid + 1;
        }
        if(v1[mid] > key){
            end = mid - 1;
        }
    }
    return -1;
}
int main(){
    std::vector<int>v1{90, -4, 12, 88, 10, -2};

    sort(v1.begin(), v1.end());

    int key;

    cout<<"Enter the key to search :"<<endl;
    cin>>key;

    int res = findNos(v1, key);

    if(res != -1){
        cout<<"Key found at : "<<res<<" index"<<endl;
    }
    else{
        cout<<"Key not found!"<<endl;
    }
}

