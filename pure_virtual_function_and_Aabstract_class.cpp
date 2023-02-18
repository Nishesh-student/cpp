//pure virtual function and abstract class
#include<iostream>
using namespace std;

class animal{											// |
	public:                                             // |{	ABSTRACT 
		virtual void makesound()=0;//pure virtual function |    CALSS	}
};                                                      // |

class dog:public animal{
	public:
		void makesound(){
			cout<<"\n bow bow ";
		}
};

class cat:public animal{
	public:
		void makesound(){
			cout<<"\n meow meow ";
		}
};
class lion:public animal{
	public:
		void makesound(){
			cout<<"\n roar roar ";
		}
};
//----------------------------------------------------------------------------//
int main(){
	animal *ptr=new dog();
	animal *ptr1=new cat();
	animal *ptr2=new lion();
	ptr->makesound();
	ptr1->makesound();
	ptr2->makesound();
	return 0;
}

