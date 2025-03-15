#include<iostream>
#include<algorithm>
#include<vector>

int factorial(int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 1;
    }
    int fact = 1;
    return n * factorial(n-1);
}

int main(){
    int n = 4;
    int res = factorial(n);
    std::cout<<res<<std::endl;

    return 0;
}