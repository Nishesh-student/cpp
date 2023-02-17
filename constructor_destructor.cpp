#include<iostream>
using namespace std;

int count=0;//global variable
class demo{
	public:
		demo(){
			cout<<"\n contructor called ";
			count++;
			cout<<"\n no of object created : "<<count;
		}
		~demo(){
			cout<<"\n destructor called ";
			cout<<"\n no of the destructor which is deleted : "<<count;
			count--;
		}
};
/////////////////////////////////////////////////////////////////////////////////
int main(){
	demo aa,bb,cc;
	{
		demo dd;
	}
	return 0;
}
