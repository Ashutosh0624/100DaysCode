#include<iostream>
#include<memory>
using namespace std;

class Sensor{
    public:
    void readData(){
        cout<<"Reading Sensor data: "<<endl;
    }
};
/*

Smart pointers : unique pointers, shared pointers and weak pointers. 

Unique pointer : Sensors ya API's jinka ek hi instance hona chahiye ya one sole owner 

Cant copy unique pointer, only can move the ownership of the resources or memory 


Shared pointer: those resources whose access needs to be given to multiple objects.
Multiple pointers can point to the same object, Internallly uses reference counting
Object destroys when last refernce dies 


*/

class Logger{
    public:
    void log_Data(){
        cout<<"[LOG] logger started : "<<endl;
    }
};

int main(){

    std::unique_ptr<Sensor>s1 = std::make_unique<Sensor>();
    s1->readData();

    std::unique_ptr<Sensor>s2 = std::move(s1);

    s2->readData();
    
    std::shared_ptr<Logger>log1 = std::make_shared<Logger>();
    std::shared_ptr<Logger>log2 = log1;
    

    log1->log_Data();
    log2->log_Data();

    cout<<"use count "<<log1.use_count()<<endl;

    return 0;

}