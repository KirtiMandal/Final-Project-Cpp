#include<iostream>
using namespace std;

class animal{
	public:
	int legs=4;
void display(){
cout<<"animal legs: "<<legs<<endl;
}	
};

class scary{
public:
int yes=1;
void display1(){
cout<<"1 for scary animal and 0 for not scary"<<endl;
}
};

class pet:public animal,public scary{
	public:
	void inp(){
	int i;
	cout<<"is your animal scary "<<endl;
	cin>>i;
}
void display2(){
cout<<"My pet is not scary"<<endl;
}
};






int main(){
	pet child;
	animal p1;
	scary p2;
	cout<<"calling parent1 from parent1"<<endl;
	p1.display();
	cout<<"calling parent1 parent2 and child in child function"<<endl;
	child.display2();
	child.display1();
	child.display();
	cout<<"calling parent2 from parent2"<<endl;
	p2.display1();
	
}


