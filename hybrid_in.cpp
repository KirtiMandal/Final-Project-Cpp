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

class D:public B,public C{
	public:
void display3(){
cout<<"D"<<endl;
}
};


int main(){
	A a;
	B b;
	C c;
	D d;
	cout<<"calling A in A"<<endl;
	a.display();
	cout<<"calling A and B in B"<<endl;
	b.display();
	b.display1();
	cout<<"calling A and C in C"<<endl;
	c.display();
	c.display2();
	cout<<"calling A B C and D in D"<<endl;
	//d.display();
	d.display1();
	d.display2();
	d.display3();
	cout<<"Hashhhh! Finally ....."<<endl;


	
}


