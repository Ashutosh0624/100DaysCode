#include<iostream>
using namespace std;

int fibonacci(int n){
    // recursive way to calcualte the fibonaci term 
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}
int main(){
    int n;
    cin>>n;
    int res = fibonacci(n);
    cout<<"fibbonaci term :"<<res<<endl;
    return 0;
}