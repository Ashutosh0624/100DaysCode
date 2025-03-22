#include<iostream>
#include<string>

using namespace std;

class Person{
    std::string name;
    int age;
    std::string address;

    public:
    Person(std::string name, int age): name{name}, age{age}, address{"Singrauli"} {}


    friend void getDetails(Person P1);

    void setDetails(std::string nname, int nage, std::string naddress);
};

void Person::setDetails(std::string nname, int nage, std::string naddress){
    name = nname;
    age = nage;
    address = naddress;
}

void getDetails(Person p1){
    cout<<"Name: "<<p1.name<<endl;
    cout<<"Age: "<<p1.age<<endl;
    cout<<"Address: "<<p1.address<<endl;
}

int main(){
    Person p1{"Ashutosh", 32};
    getDetails(p1);

    return 0;
}