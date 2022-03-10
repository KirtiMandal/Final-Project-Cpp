#include<iostream>
using namespace std;

class base{
public:
void showbase(){
cout<<"base\n";
}
};

class deriv1:public base{
public:
void showderived(){
cout<<"derived"<<endl;
}
};

int main(){

deriv1 dv1;
base* ptr;
ptr= &dv1;
ptr->showbase();
((deriv1*)ptr)->showderived();

}
