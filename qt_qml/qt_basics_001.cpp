#include <QCoreApplication>
#include<iostream>
#include<string>
#include<QDebug>
#include<QString>
using namespace std;


enum Color{
    Red,
    Green,
    Blue
};

struct product{
    std::string name;
    double price;
    QString brand;

    void getProductDetails() const;

};


void product::getProductDetails() const{
    std::cout<<"Name : "<<name<<std::endl;
    qInfo()<<"Price : "<<price;
    qInfo()<<"Brand : "<< brand;

}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    product p1{"Laptop", 54000.00, "Lenevo"};

    p1.getProductDetails();



    return a.exec();
}
