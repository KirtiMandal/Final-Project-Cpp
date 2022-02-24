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

		Complex operator + (Complex obj)
		{
			Complex temp;
			temp.real = obj.real + real;
			temp.img = obj.img + img;
			return temp;
		}

		Complex operator - (Complex obj)
		{
			Complex temp;
			temp.real = obj.real - real;
			temp.img = obj.img - img;
			return temp;
		}

		Complex operator * (Complex obj)
		{
			Complex temp;
			temp.real = obj.real * real;
			temp.img = obj.img * img;
			return temp;
		}

		Complex operator / (Complex obj)
		{
			Complex temp;
			temp.real = obj.real / real;
			temp.img = obj.img / img;
			return temp;
		}

		Complex operator % (Complex obj)
		{
			Complex temp;/Remainder
			temp.real = obj.real % real;
			temp.img = obj.img % img;
			return temp;
		}

};

int main()
{
	Complex c1(2,2), c2(10,10);
	c1.display();
	c2.display();

	cout<<"Addition"<<endl;
	Complex c3;
	c3 = c2+c1;
	c3.display();


	cout << "Substraction" << endl;
	Complex c4;
	c4 = c2-c1;
	c4.display();

	cout << "Multiplication" << endl;
	Complex c5;
	c5 = c2*c1;
	c5.display();

	cout << "Product of Division" << endl;
	Complex c6;
	c6 = c2/c1;
	c6.display();

	cout << "Remainder of Division" << endl;
	Complex c7;
	c7 = c2%c1;
	c7.display();

	return 0;
}
