//Model a measure class with two function members to calculate area of rectangle and volume of cuboid.

#include <iostream> 
using namespace std;


//Models a Measure class, whose data members are three integers length, width and height. 
class Measure{
	public:
		int height;
		int length;
		int width;

		void setInput(int a, int b, int c)
		{
			length = a;
			width = b;
			height = c;
		}

		// Area of rectangle
		int area()
		{
			return length*width;
		}

		// Volume of Cuboid
		int volume()
		{
			return length*width*height;
		}

};

int main()
{
	Measure obj1, obj2;
	int x,y,z;

	cout<< "Enter length, width and height of your rectangle:" << endl;
	cin >> x >> y >> z;
	obj1.setInput(x, y, z);
	cout<<"The inputs for rectangle are: "<<obj1.length <<" "<< obj1.width <<" "<< obj1.height << endl;
	cout<< "The area is : "<< obj1.area() << endl;

	cout<< "Enter length, width and height of your cuboid: " << endl;
	cin >> x >> y >> z;
	obj2.setInput(x, y, z);
	cout<<"The inputs for cuboid are: " <<obj2.length <<" "<< obj2.width <<" "<< obj2.height << endl;
	cout<< "The volume is : "<< obj2.volume() << endl;

	return 0;
}
