#include<iostream>
using namespace std;

class A{
private:
int x=1;
void disp_pri(){
cout<<"Displaying private:"<<endl;
}

protected:
int y=2;
void disp_pro(){
cout<<"Displaying protected:"<<endl;
}

public:
int z=3;
void disp_pub(){
cout<<"Displaying public:"<<endl;
}
};


class B:public A{
public:
void disp_B(){
cout<<"calling access modes of A in B"<<endl;
cout<<y<<endl;
cout<<z<<endl;
A a;
a.disp_pub();
}
};

class C:public B{
public:
void disp_C(){
cout<<"calling access modes of A in C from B "<<endl;
cout<<y<<endl;
cout<<z<<endl;
B b;
b.disp_B();
}
};

int main(){
C c;
c.disp_C();
}

