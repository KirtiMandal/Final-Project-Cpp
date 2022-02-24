#include<iostream>
using namespace std;

class space{
	int x,y,z;
	public:
		space(){
			x=y=z=0;
		}
		space(int a, int b, int c){
			x=a;
			y=b;
			z=c;
		}

		void display(){
			cout << x << y <<  z << endl;
		}


		space operator --(int){
			space temp;
			temp.x = --x;
			temp.y = --y;
			temp.z = --z;
			return temp;
		}
};

int main(){

	space s1(8, 3, 9);
	space s2(5, 2, 7);
	s2.display();
	s2 = s1--;
	s2.display();

return 0;
}
