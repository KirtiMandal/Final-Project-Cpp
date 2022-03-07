#include<iostream>
using namespace std;

class A{
	public:
void display(){
cout<<"A "<<endl;
}	
};

class B:public A{
public:
void display1(){
cout<<"B"<<endl;
}
};

class C: public A{
public:
void display2(){
cout<<"C"<<endl;
}
};


class D: public A{
public:
void display3(){
cout<<"D"<<endl;
}
};

class E: public A{
public:
void display4(){
cout<<"E"<<endl;
}
};


int main(){
	A a;
	B b;
	C c;
	D d;
	E e;
	cout<<"calling A in A"<<endl;
	a.display();
	cout<<"calling A and B in B"<<endl;
	b.display();
	b.display1();
	cout<<"calling A and C in C"<<endl;
	c.display();
	c.display2();
	cout<<"calling A and D in D"<<endl;
	d.display();
	d.display3();
	cout<<"calling A and E in E"<<endl;
	e.display();
	e.display4();
	
	cout<<"Hashhhh! Finally ....."<<endl;


	
}


