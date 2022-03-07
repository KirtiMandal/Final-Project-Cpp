#include<iostream>
using namespace std;


//single and multilevel inheritance
class animal{
	public:
	int legs=4;
void display1(){
cout<<"(parent)animal legs: "<<legs<<endl;
}	
};

class dog:public animal{
	public:
	int tail=1;
void display2(){
cout<<"(child)dog has "<<tail<<" tail" <<endl;
}
};

class puppy:public dog{
	public:
	int female=1;
void display3(){
cout<<"(grandchild)puppies are female : "<<female<<endl;
}
};


int main(){
	dog child;
	animal parent;
	puppy grandchild;
	grandchild.display1();
	grandchild.display2();
	grandchild.display3();
	child.display2();
	child.display1();
	parent.display1();
	//cout<<"parent is :"<<call.legs;
	//cout<<"child is :"<<call.tail<<endl;
}


