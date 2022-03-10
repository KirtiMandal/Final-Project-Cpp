#include<iostream>
using namespace std;

class ABC{
public:
void setProtMemb(int i){
m_protMemb=i;
}

void disp(){
cout<<m_protMemb<<endl;
}

protected:
int m_protMemb;
void Protfunc(){
cout<<"Access allowed\n";
}

};

class XYZ:public ABC{
public:
void useProtFunc(){
Protfunc();
}
};


int main(){
ABC a;
XYZ x;
// not accessible----a.m_protMemb;
// not accessible---- a.setProtMemb(0);
// not accessible----a.Display();
// not accessible----a.Protfunc();
// not accessible----x.setProtMemb(5);
// not accessible----x.Display();
x.useProtFunc();

}
