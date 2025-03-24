#include<iostream>
#include<vector>
using namespace std;

int calc(int a, int b){
    char operation;
    cout<<"Enter the operation you want to perform!"<<endl;
    cin>>operation;

    switch(operation){
        case '+': return a+b; break;
        case '*': return a*b; break;
        case '/': return a/b; break;
        case '-': return a-b; break;
    }
   return -1;
} 

int calculator(int a, int b){
    return calc(a, b);
}

int main(){
    int a = 10; 
    int b = 20;

    cout<<calculator(a, b)<<endl;

    return 0;
}