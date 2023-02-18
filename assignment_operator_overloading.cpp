//assignment operator overloading 
#include<iostream>
using namespace std;

class demo{
	int a;
	public:
		void seta(int a){
			this->a=a;
		}
		int geta(){
			return a;
		}
//		demo operator=(demo d){  |
//			a=d.a;				 |----->assignment operator is default overloaded
//		}						 |


		demo operator==(demo d){
			if (a==d.a){
				cout<<"\n first and second object are equal ";
			}
			else {
				cout<<"\n first and second object are not equal";
			}
		}
};
//-----------------------------------------------------------------------------//
int main(){
	demo d1,d2;
	d1.seta(7);
	cout<<"\n d1 "<<d1.geta();
	d2=d1;
	cout<<"\n d2 "<<d2.geta();
	d1==d2;
	demo d3;
	d3.seta(8);
	cout<<"\n d3 "<<d3.geta();
	d1==d3;
}
