// Returning object from a function member of class

#include<iostream>

using namespace std;

class Calculator {
	public:
		int input1;
		int input2;
		int input3;

		void setInput(int x, int y)
		{
			input1 = x;
			input2 = y;
		}

		// Calculator class objects are passed as arguments
		Calculator add(Calculator obj1, Calculator obj2)
		{
			Calculator obj3;
			obj3.input3 = obj2.input2 + obj1.input2;
			cout<< "The Result of Addition is : "<< obj3.input3 << endl;
			// Returning object
			return obj3;
		}

		int sub()
		{
			return input1-input2;
		}


		int mul(int x, int y)
		{
			return x*y;
		}

};

int main()
{
	Calculator obj1, obj2, obj3;
	obj1.setInput(10, 2);
	obj2.setInput(5, 6);
	obj3.input3 = 0;

	// passing object as arguments
	cout<<"The inputs are:" <<obj1.input1<<" "<< obj1.input2 <<endl;
	cout<<"The inputs are:" <<obj2.input1<<" "<< obj2.input2 <<endl;

	obj3 = obj3.add(obj1, obj2);
	cout<< "The Result is : "<< obj3.input3 << endl; 

	return 0;
}
