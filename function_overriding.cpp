//function overriding
#include<iostream>
using namespace std;

class base{
	public:
		virtual void display(){
			cout<<"\n base class";
		}
};
class derived:public base{
	public:
		void display(){
			cout<<"\n derived class";
		}
};
//-----------------------------------------------------------------------------//
int main(){
	base *b1=new derived();
	b1->display();
	return 0;
}
