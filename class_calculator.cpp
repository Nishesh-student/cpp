#include<iostream>
using namespace std;

class calculator{
	double a,b;
	char ope;
	public:
		void setdata(){
			cout<<"\nenter expression :";
			cin>>a>>ope>>b;
		}		
		void calculate(){
			switch (ope){
			case '+':
				cout<<a<<" "<<ope<<" "<<b<<" = "<<a+b;
				break;
			case '-':
				cout<<a<<" "<<ope<<" "<<b<<" = "<<a-b;
				break;
			case '*':
				cout<<a<<" "<<ope<<" "<<b<<" = "<<a*b;
				break;
			case '/':
				cout<<a<<" "<<ope<<" "<<b<<" = "<<a/b;
				break;
			default:
				cout<<"\nenter valid expression!\n";
			}
		}
		
};

int main(){
	calculator obj1;
	obj1.setdata();
	obj1.calculate();
	return 0;
}
