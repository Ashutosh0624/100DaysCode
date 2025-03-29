#include<iostream>
#include<memory>
using namespace std;

// strategy class
class bank{
    public:
    virtual void selectBranch() = 0;
    virtual ~bank() = default;
};

// concrete strategy classes 
class SBI: public bank{
    public:
    std::string city;
    void selectBranch(){
        cout<<"Enter the bank name: "<<endl;
        cin>>city;
        cout<<"You have selected branch : "<<city<<endl;
    }
};

class HDFC: public bank{
    public: 
    std::string city;
    void selectBranch(){
        cout<<"Enter the branch city name: "<<endl;
        cin>>city;
        cout<<"You have selected branch : "<<city<<endl;
    }
};

// client code or the context class 
class bankingSystem{
    private:
    std::unique_ptr<bank>bankStrategy;

    public:
    //  function to select the bank 
    void setStrategy(std::unique_ptr<bank> newbank){
        bankStrategy = std::move(newbank);
    }

    void verifyBank(){
        bankStrategy->selectBranch();
    }

};

int main(){
    bankingSystem b1;

    b1.setStrategy(std::make_unique<SBI>());
    b1.verifyBank();

    b1.setStrategy(std::make_unique<HDFC>());
    b1.verifyBank();

    return 0;
}