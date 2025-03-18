#include<iostream>
using namespace std;

int powerRec(int n, int p){
    if(n == 0){
        return 0;
    }
    if(n == 1 || p == 0){
        return 1;
    }
    if(p == 1){
        return n;
    }
    return n * powerRec(n, p-1);
}

int main(){
    int n;
    int p;
    cin>>n>>p;
    cout<<powerRec(n, p)<<endl;
    return 0;
}