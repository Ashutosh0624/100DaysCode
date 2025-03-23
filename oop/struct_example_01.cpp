#include<iostream>
using namespace std;

enum Color{red, green, blue, orange};


struct product{
    int weight;
    double value;
    Color pcolor;
   

    void getDetails() const;
};

void product::getDetails() const{
    cout<<"Weight of the product : "<<weight<<endl;
    cout<<"Value of the product: "<<value<<endl;
    
    switch(pcolor){
        case red: cout<<"Color is :"<<"Red"<<endl; break;
        case green: cout<<"Color is : "<<"Green"<<endl; break;
        case blue: cout<<"Color is: "<<"Blue"<<endl; break;
        case orange: cout<<"Color is : "<<"Orange"<<endl; break;
    }
}

int main(){
    product p1{12, 56.8, red};
    p1.getDetails();

    return 0;
}