//Program of static integer

#include<iostream>
using namespace std;

class demo
{
	private:
		//declaration of static integer
		static int count;
	public:
		void setCount()
		{
			cout<< "Count value: " << ++count << endl;
		}
};

//defining static integer
int demo :: count=1;  

int main()
{
	demo d1, d2, d3;

	d1.setCount();
	d2.setCount();
	d3.setCount();

	return 0;
}
