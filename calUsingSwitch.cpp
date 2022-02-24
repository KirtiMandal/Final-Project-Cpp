// Calculator to find addition, subtraction, multiplication, division, and factorial(using switch)

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

		// Arithmetic Operations member Functions
		int add();
		int sub();

		int mul()
		{
			return input1*input2;
		}

		float div()
		{
			return (float)input1/input2;
		}

		int factorial(int a)
		{
			int fact=1;
			for(int i=1;i<=a;i++)
			{
				fact=fact*i;
			}

			return fact;
		}
};

int Calculator :: add()
{
	return input1+input2;
}

int Calculator :: sub()
{
	return input1-input2;
}


int main()
{
	Calculator obj1;
	int ch, x, y, flag=0;

	while(flag != 1)
	{
		cout<<endl<<"Enter your choice to perform operations: "<< endl;
		cout<<"1.Addition"<< endl << "2.Subtraction" << endl << "3.Multiplication" << endl << "4.Division" << endl << "5.Factorial" <<endl << "6.Quit" << endl;
		cin >> ch;

		// Using Switch Case
		switch(ch)
		{
			case 1:
				cout<<"Enter the 2 inputs:" << endl;
				cin >> x >> y;
				obj1.setInput(x, y);
				cout<< "The result of addition is : "<< obj1.add() << endl;
				break;
			case 2:
				cout<<"Enter the 2 inputs:" << endl;
				cin >> x >> y;
				obj1.setInput(x, y);
				cout<<"The result of substraction is:" << obj1.sub() << endl;
				break;
			case 3:
				cout<<"Enter the 2 inputs:" << endl;
				cin >> x >> y;
				obj1.setInput(x, y);
				cout<<"The product of the two numbers is:" << obj1.mul() << endl;
				break;
			case 4:
				cout<<"Enter the 2 inputs:" << endl;
				cin >> x >> y;
				obj1.setInput(x, y);
				cout<<"The result of division is:" << obj1.div() << endl;
				break;
			case 5:
				cout<<"Enter the input:" << endl;
				cin >> x;
				cout<<"The factorial of "<< x << " is: " << obj1.factorial(x) << endl;
				break;
			case 6:
				flag = 1;
				cout<<"Thank you"<<endl;
				break;
			default:
				cout<<"Invalid Operation" << endl;
		}
	}

	return 0;
}
