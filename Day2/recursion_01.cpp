#include<iostream>
using namespace std;

int power_num(int A, int n){
    if(A == 0){
        return 0;
    }
    if(n == 0){
        return 1;
    }
    int res = A;
    return A*power_num(A, n-1);
}

int main(){
    int A = 2;
    int n = 4;
    int res = power_num(A, n);
    cout<<res<<endl;
    return 0;
}