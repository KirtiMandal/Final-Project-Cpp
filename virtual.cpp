#include<iostream>
using namespace std;

class Shape{
	protected:
	float x;
	public:
	void getData()
	{cin>>x;}
	virtual float calculateArea()=0;
};

class square :public Shape{
	public :
	float calculateArea()
	{return x*x;}
};

class circle:public Shape{
	public:
	float calculateArea()
	{return 3.14*x*x;}
};

int main(){
	square s;
	circle c;
	cout<<"Enter the length of the square ";
	s.getData();
	cout<<"area of square "<<s.calculateArea()<<endl;
	cout<<"Enter the radius of the circle ";
	c.getData();
	cout<<"area of circle "<<c.calculateArea()<<endl;

}
