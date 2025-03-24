#include<iostream>
#include<vector>
#include<fstream>
using namespace std;

int main(){
    ifstream file("data.txt");

    if(!file){
        cerr <<"x !! Error, file not found!!"<<endl;
    }
    
    else{
    cout<<"File opened successfully!!"<<endl;
    }


    return 0;
}

