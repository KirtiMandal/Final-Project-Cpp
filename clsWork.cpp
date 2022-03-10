#include<iostream>
using namespace std;

class base{
	int i,j;
	public:
	void set(int a,int b){
	i=a,j=b;
	}
	void show(){
	cout<<i<<" "<<j;
	}
	};

class derived: private base{
	int k;
	public:
	derived (int x){
	k=x;
	}
	void showk(){
	cout<<k;
	}
};

int main(){
	base *ptr;
	base b;
	derived d;
	ptr=&b;
	cout<<ptr<<endl;
	ptr=&d;
	cout<<ptr<<endl;
	return 0;
}
