//constructor handling 
#include<iostream>
using namespace std;

class rectangle{
protected:
	int length,breadth;
	public:
		rectangle(int l,int b){
			length=l;
			breadth=b;
		}
		int area(){
			return length*breadth;
		}
};
class cuboid :public rectangle{
	int height;
	public:
		cuboid(int l,int b,int h):rectangle(l,b){
			length=l;
			breadth=b;
			height=h;
		}
		int volume(){
			return  length*breadth*height;
		}
};
//----------------------------------------------------------------------------//
int main(){
	cuboid c(5,2,3);
	
	cout<<"\n the area of rectangle is : "<<c.area();
	cout<<"\n the volume of cuboid is : "<<c.volume();
}
