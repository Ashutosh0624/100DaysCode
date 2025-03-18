#include<iostream>
using namespace std;

int fun(int n){
    static int x;
    if(n>0){
        x++;
        return fun(n-1)+x;
    }
    else{
        return 0;
    }
}

int main(){
    int n = 5;
    int res = fun(n);
    cout<<"value: "<<res<<endl;
    return 0;
}