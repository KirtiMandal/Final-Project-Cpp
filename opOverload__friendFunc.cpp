// Overloading operator as a friend function 

#include<iostream>
using namespace std;

class Complex {
	public:
	int real, img;
		//default Constructor
		Complex()
		{
			real=0;
			img=0;
		}
		 // parameterized constructor
		Complex(int r, int i)
		{
			real=r;
			img=i;
		}
 		//display function
		void display()
		{
			cout << "Real: "<< real << " Image: " << img << endl;
		}

		friend Complex operator + (Complex , Complex);
};

Complex operator + (Complex obj, Complex obj2)
{
	Complex temp;

	temp.real = obj.real + obj2.real;
	temp.img = obj.img + obj2.img;
	return temp;
}

int main()
{
	Complex c1(1,4), c2(3,6);
	cout << "Displaying Imaginary and real values of c1 object" << endl;
	c1.display();	
	cout << "Displaying Imaginary and real values of c2 object" << endl;
	c2.display();

	Complex c3;
	c3 = c2+c1;
	cout << "Displaying Addition of Imaginary and real values of two objects" << endl;
	c3.display();

	return 0;
}
