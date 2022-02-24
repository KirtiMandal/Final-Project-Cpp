// Overloading unary operators (-, !, ~, --, ++)

#include<iostream>
using namespace std;

class Complex {
	int real, img;
	public:
		Complex()
		{
			real=0;
			img=0;
		}

		Complex(int r, int i)
		{
			real=r;
			img=i;
		}

		void display()
		{
			cout << "Real: "<< real << " Image: " << img << endl;
		}

		Complex operator -();
		void operator !();

		Complex operator --();
		Complex operator ++();

		Complex operator --(int);
		Complex operator ++(int);

		Complex operator ~();

};

Complex Complex::operator -()
{
	Complex temp;

	temp.real = -real;
	temp.img = -img;

	return temp;
}

void Complex::operator !()
{
	real = !real;
	img = !img;
}

Complex Complex::operator --()
{
	Complex temp;

	temp.real=--real;
	temp.img=--img;

	return temp;
}

Complex Complex::operator ++()
{
	Complex temp;

	temp.real=++real;
	temp.img=++img;

	return temp;
}

Complex Complex::operator --(int)
{
	Complex temp;

	temp.real=real--;
	temp.img=img--;

	return temp;
}

Complex Complex::operator ++(int)
{
	Complex temp;

	temp.real=real++;
	temp.img=img++;

	return temp;
}

Complex Complex::operator ~()
{
	Complex temp;

	temp.real = ~real;
	temp.img = ~img;

	return temp;
}

int main()
{
	Complex c1(11,15);
	c1.display();

	Complex c2;

	cout<<"Unary minus"<<endl;
	c2=(-c1);
	c2.display();
	Complex co;
	cout<<"Pre Decreement operator"<<endl;
	co=--c1;
	co.display();


	cout<<"Pre Increement operator"<<endl;
	c1=++c1;
	c1.display();

	Complex c(16,9);

	Complex c5;

	cout<<"Negation(~)"<<endl;
	c5=~c;
	c5.display();

	Complex c3;
	cout<<"Post Decrement operator"<<endl;
	c3=c--;
	c3.display();

	Complex c4;
	cout<<"Post Increment operator"<<endl;
	c4=c++;
	c4.display();

	return 0;
}
