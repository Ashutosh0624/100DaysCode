#include<iostream>
#include<memory>
using namespace std;

// Radar class as a strategy 
class Radar{
    public:
    virtual void detectObject() = 0;
    virtual ~Radar(){
        cout<<"radar detrived classes object destroyed"<<endl;
    }
};

// Interface designed, now the concrete design 
// Concrete strategy 1
class shortRangeRadar: public Radar{
    public:
    void detectObject(){
        cout<<"Object detected at short distance: "<<endl;
    }
};
// Concrete strategy 2
class longRangeRadar: public Radar{
    public:
    void detectObject(){
        cout<<"Object detected at long distance: "<<endl;
    }
};

// client code 
class RadarSystem{
private:
std::unique_ptr<Radar>strategy; // base class pointer 

public:
     void setStrategy(std::unique_ptr<Radar>newStrategy){
        strategy = std::move(newStrategy); // transfer the ownership
     }

     void performanceDetection(){
        if(strategy){
            strategy->detectObject();
        }
        else{
            cout<<"No detection strategy set: !!"<<endl;
        }
     }
};

int main(){
    RadarSystem radarEngine;

    //set short range radar 
    radarEngine.setStrategy(std::make_unique<shortRangeRadar>());
    radarEngine.performanceDetection();


    radarEngine.setStrategy(std::make_unique<longRangeRadar>());
    radarEngine.performanceDetection();

    return 0;
}