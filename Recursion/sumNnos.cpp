#include<iostream>
using namespace std;

int sumNnos(int  n){
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return (n + sumNnos(n-1));
}

int main(){
    int n = 10;
    cout<<sumNnos(n)<<endl;
    return 0;
}