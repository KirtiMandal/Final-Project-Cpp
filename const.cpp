#include<iostream>
using namespace std;

class base1{
protected:
int i;
public:
base1(int x){
i=x;
cout<<"constructing base1"<<endl;
}
~base1(){
cout<<"deconstructing base1\n";
}
};

class base2{
protected:
int k;
public:
base2(int x){
k=x;
cout<<"constructing base2"<<endl;
}
~base2(){
cout<<"deconstructing base2\n";
}
};

class derived:public base1,public base2{
int j;
public:
derived(int x,int y,int z):base1(y),base2(z){
j=x;
cout<<"constructing derived"<<endl;
}
~derived(){
cout<<"deconstructing derived\n";
}

void show(){
cout<< i<<" "<<j<<" "<<k<<" "<<endl;
}

};

int main(){
derived ob(3,4,5);
ob.show();
return 0;
}
