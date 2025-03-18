#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

// Binary search : find contacts in a phone book
int findContacts(std::vector<std::string>&s, std::string key){
    int low = 0;
    int high = s.size() - 1;
    while(low <= high){
        int mid = (low + high)/2;
        if(s[mid] == key){ return mid;}
        if(s[mid] < key){low = mid + 1;}
        if(s[mid] > key){high = mid - 1;}
    }
    return -1;

}

int main(){
    std::vector<std::string> contacts{"Ashutosh", "Ashish", "Madhu", "Akshay"};
    sort(contacts.begin(), contacts.end());
    // sort the array
    std::string key;
    cout<<"Enter the name to search: "<<endl;
    cin>>key;
    int found = findContacts(contacts, key);
    if(found!=-1){
        cout<<"Contact found! at index : "<<found<<endl;
    }
    else{
        cout<<"Contact not found!!"<<endl;
    }
    return 0;


}