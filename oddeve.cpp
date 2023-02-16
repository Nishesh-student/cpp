#include<iostream>
using namespace std;

class oddeve{
	int a;
	public:
		void setdata(){
			cout<<"\n enter the number to check: ";
			cin>>a;
		}
		void oddoreve(){
			if(a%2==0){
				cout<<"\n the number is even ";
			}
			else 
				cout<<"\n the number is odd ";
		}
};

int main(){
	oddeve obj1;
	obj1.setdata();
	obj1.oddoreve();
	return 0;
}
