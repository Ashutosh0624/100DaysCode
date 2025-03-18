#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int searchCommodity(std::vector<std::pair<std::string, int>>&v1, std::string key){
    int low = 0;
    int high = v1.size() - 1;
    while(low <= high){
        int mid = (low + high) / 2;
        if(v1[mid].first == key) {return mid;}
        if(v1[mid].first > key){high = mid - 1;}
        if(v1[mid].first < key){low = mid + 1;}
    }
    return -1;
}

int main(){
    std::vector<std::pair<std::string, int>>v1 = {
        {"Bag", 2000},
        {"Boroplus", 5000}, 
        {"Iphone", 4000}
    };
    sort(v1.begin(), v1.end());
    std::string key;
    cout<<"enter the commodity to look for: "<<endl;
    cin>>key;
    int res = searchCommodity(v1, key);
    if(res!= -1){
        cout<<"commodity found at index : "<<res<<endl;
    }
    else{
        cout<<"Commodity not found !!"<<endl;
    }
    return 0;

}