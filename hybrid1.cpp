#include<iostream>
using namespace std;

class A{
public:
int a=1;
};

class B:public A{
public:
int b=2;
void dispb(){
cout<<"printing values of class A and B in b"<<endl;
cout<<a<<endl;
cout<<b<<endl;
}
};

class C:public B{
public:
int c=3;
void dispc(){
cout<<"printing values of class A B and C in c"<<endl;
cout<<a<<endl;
cout<<b<<endl;
cout<<c<<endl;
}
};

class D:public B{
public:
int d=4;
void dispd(){
cout<<"printing values of class A B and D in D"<<endl;
cout<<a<<endl;
cout<<b<<endl;
cout<<d<<endl;
}
};

class E:public C,public D{
public:
int e=5;
void dispe(){
cout<<"printing values of class C D and E in E"<<endl;
//cout<<a;
//cout<<b;
cout<<c<<endl;
cout<<d<<endl;
cout<<e<<endl;
}
};

class F:public D{
public:
int f=6;
void dispf(){
cout<<"printing values of class A B D and F in F"<<endl;
cout<<a<<endl;
cout<<b<<endl;
cout<<d<<endl;
cout<<f<<endl;
}
};


int main(){
A a1;
B b1;
C c1;
D d1;
E e1;
F f1;
b1.dispb();
c1.dispc();
d1.dispd();
e1.dispe();
f1.dispf();

}
