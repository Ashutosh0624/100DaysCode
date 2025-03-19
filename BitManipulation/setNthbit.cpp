#include<iostream>
using namespace std;

int setNthbit(int n, int pos){
    n = n | (1 << pos);
    return n;
}

int clearNthBit(int n, int pos){
    return (n & (~(1 << pos)));
}

int main(){
    int n = 16;
    cout<<setNthbit(n, 3)<<endl;
    cout<<clearNthBit(n, 3)<<endl;
    return 0;
}