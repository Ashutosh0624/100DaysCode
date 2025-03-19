#include<iostream>
using namespace std;

bool poweroftwo(int n){
    return (n > 0) && ((n & (n-1)) == 0);
}

int main(){
    int n = 64;
    cout<<poweroftwo(n)<<endl;
    return 0;
}