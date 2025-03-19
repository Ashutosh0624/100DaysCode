#include<iostream>
using namespace std;

bool is_even(int n){
    return ((n & 1) == 0);
}

int main(){
    int n;
    cin>>n;
    cout<<is_even(n)<<endl;
    return 0;
}