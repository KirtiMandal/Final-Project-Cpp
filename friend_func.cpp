//Friend Function

#include<iostream>
using namespace std;

class K;
class M;
class K
{
	private:
		int numK;
	public:
		int add(K, M);
		void setK(M obj2);		
};

class M
{
	private:
		int numM;
	public:
		friend int K :: add(K obj1, M obj2);
		friend void K :: setK(M obj);
		void setM()
		{
			cout << "In setM() "<< endl;
			numM = 10;
			cout << "Before numM=" << numM << endl;
		}

};

void K :: setK(M obj2)
{
	cout << "In setK()" << endl;
	obj2.numM = 100;
	cout << "Before numM: " << obj2.numM << endl;
}

int K :: add(K obj1, M obj2)
{
	cout << "Addition" << endl;
	obj1.numK = 15;
	obj2.numM = 20;

	cout<< "After numK=" << obj1.numK << " numM=" << obj2.numM << endl;

	return obj1.numK+obj2.numM;
}

int main()
{
	K obj1;
	M obj2;

	obj1.setK(obj2);
	obj2.setM();
	cout<< "Sum is: " << obj1.add(obj1, obj2)<< endl;
	return 0;
}
