// Passing object as an argument in Calculator

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

		// Calculator class objects are passed as arguments
		int add(Calculator obj1, Calculator obj2)
		{
			return obj2.input1+obj1.input2;
		}

		int sub(Calculator obj1, Calculator obj2)
		{
			return obj2.input1-obj1.input2;
		}


		int mul(Calculator obj1, Calculator obj2)
		{
			return obj2.input1*obj1.input2;
		}

};

int main()
{
	Calculator obj1, obj2;
	obj1.setInput(5, 6);
	obj2.setInput(7, 8);

	// passing object as arguments and printing addition
	cout<<"Inputs are:" <<obj1.input1<<" "<< obj1.input2 <<endl;
	cout<<"Inputs are:" <<obj2.input1<<" "<< obj2.input2 <<endl;

	cout<< "Addition of input1 of object2 and input2 of object1 is : "<< obj1.add(obj1, obj2) << endl;
	cout<< "Substraction of input1 of object2 and input2 of object1 is : "<< obj1.sub(obj1, obj2) << endl;
	cout<< "Multiplication of input1 of object2 and input2 of object1 is : "<< obj1.mul(obj1, obj2) << endl;

	return 0;
}
