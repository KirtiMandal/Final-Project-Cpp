#include<iostream>

using namespace std;

class Calculator {
	public:
		int input1;
		int input2;

		void setInput(int a, int b)
		{
			input1 = a;
			input2 = b;
		}

		// Addition
		int add()
		{
			return input1+input2;
		}

		// Subtraction
		int sub()
		{
			return input1-input2;
		}

		// Multiplication
		int mul(int a, int b)
		{
			return a*b;
		}

};

int main()
{
	Calculator obj1;

	obj1.setInput(5, 10);
	cout<<"Inputs are:" <<obj1.input1<<" "<< obj1.input2 <<endl;
	cout<< "The Addition is : "<< obj1.add() << endl;

	obj1.setInput(7, 8);	
	cout<<"Inputs are:" <<obj1.input1<<" "<< obj1.input2 <<endl;
	cout<<"The Product is:" << obj1.mul(7, 8) << endl;

	cout<<"Inputs are:" <<obj1.input1<<" "<< obj1.input2 <<endl;
	cout<<"The Subtraction is:" << obj1.sub() << endl;

	cout<< "The Addition is : "<< obj1.add() << endl;

	return 0;
}
