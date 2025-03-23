#include<iostream>
using namespace std;

enum Color{
    red,
    green,
    yellow
};

int main(){
    Color c = yellow;
    if(c == Color::red){
        cout<<"stop"<<endl;
    }
    else if(c == Color::green){
        cout<<"move"<<endl;
    }
    else{
        cout<<"get ready"<<endl;
    }

    return 0;
}