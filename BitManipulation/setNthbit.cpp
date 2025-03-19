#include<iostream>
using namespace std;

int setNthbit(int n, int pos){
    n = n & (1 << pos);
    return n;
}

int main(){
    int n = 16;
    cout<<setNthbit(n, 1);
    cout<<endl;
    return 0;
}