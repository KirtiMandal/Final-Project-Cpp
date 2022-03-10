#include<iostream>
using namespace std;

class base{
protected:
	int i,j;
	public:
	void set(int a,int b){
	i=a,j=b;
	}
	void show(){
	cout<<i<<" "<<j<<"\n";
	}
	};

class derived1: private base{
	int k;
	public:
	void setk(){
	k=i*j;
	}
	void showk(){
	cout<<k<<"\n";
	}
};

class derived2: public derived1{
	int m;
	public:
	void setm(){
	m=i-j;
	}
	void showm(){
	cout<<m<<"\n";
	}
};

int main(){
	derived1 obj1;
	derived2 obj2;
	obj1.set(1,2);
	obj1.show();
	obj2.set(3,4);
	obj2.show();
	return 0;
}
