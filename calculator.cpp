#include <iostream>
using namespace std;

class Calculator{
	public:
		int input1;
		int input2;

		void setInput(int a,int b){
		input1-a;
		input2-b;
		}
		int add(){
		return input1+input2;
		}
};

int main(){
	Calculator obj1;
	obj1.setInput(10,2);
	cout<<"The inputs:"<<obj1.input1<<" " <<obj1.input2 << end1;
	cout << "The sum of inputs  is :" << obj1.add();
	return 0;
}


