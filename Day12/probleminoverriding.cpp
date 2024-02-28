#include<iostream>
using namespace std;

class A
{
	public:
		virtual void f1()
		{
			cout<<"f1 of A"<<endl;
		}
};

class B:public A
{
	public:
		void f1()
		{
			cout<<"f1 of B"<<endl;
		}
		
		void f2()
		{
			cout<<"f2 of B"<<endl;
		}
};

int main()
{
	A *p;
	B o2;
	p=&o2;
	
	p->f1();	//due to early binding with A class because p is pointer of A class.
	//p->f2();	//get error because in A class there is no f2 function .
	
	//o2.f2();	//due to an early binding
	//o2.f1();	//due to an early binding
	

	return 0;
}





