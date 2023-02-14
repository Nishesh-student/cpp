//friend function
#include<iostream>
using namespace std;

class demo{
	int a,b;
	public:
		void input(){
			cout<<"enter a: ";
			cin>>a;
			cout<<"enter b: ";
			cin>>b;
			cout<<endl;
		}
		friend void show(demo &obj);
};
void show(demo &obj)
{
	cout<<"a="<<obj.a<<endl;
	cout<<"b="<<obj.b<<endl;
}

int main(){
	demo kk;
	kk.input();
	show(kk);
	
}
