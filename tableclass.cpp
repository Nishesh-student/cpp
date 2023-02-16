#include<iostream>
using namespace std;

class table{
	int a;
	public:
		void setdata(){
			cout<<"\n enter the number : ";
			cin>>a;
		}
		void tableofa(){
			for(int i=1;i<=10;i++){
				cout<<a<<"  x  "<<i<<"  =  "<<a*i;
				cout<<"\n";
			}
		}
};

int main(){
	table obj1;
	obj1.setdata();
	obj1.tableofa();
	return 0;
}
