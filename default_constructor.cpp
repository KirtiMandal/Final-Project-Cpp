// Default Constructors in Cpp

#include <iostream>
using namespace std;

class construct
{
	public:
    		int x, y;
    		// Default Constructor
    		construct()
    		{
			cout<< "This is default constructor" << endl;
        			x = 5;
        			y = 10;
    		}
};

int main()
{
    construct c;
    cout << "x: " << c.x << endl;
    cout << "y: " << c.y << endl;
    return 1;
}
