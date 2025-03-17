#include<iostream>
using namespace std;

// Program to find factorial using recursion
/*

Factorial : 4! = 24

*/
int factorial(int n){
    if(n == 0 || n==1) return 1;
    return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;

    int res = factorial(n);
    cout<<"result: "<<res<<endl;
    return 0;
}