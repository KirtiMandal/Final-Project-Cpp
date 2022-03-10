#include<iostream>
using namespace std;

class ABC{
public:
void display(){
cout<<"this is parent class"<<endl;
}
};

class XYZ:public ABC{
public:
void display(){
cout<<"this is child class"<<endl;
}
};

int main(){
ABC a;
XYZ x;
x.display();

}
