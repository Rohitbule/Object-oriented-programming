#include<iostream>
using namespace std;

class A
{
	public:
		virtual ~A() 		//Destructor of both class are going to work when used virtual keyword
		{
			cout<<"Destructor of class A";
		}
};

class B:public A
{
	public:
		~B()
		{
			cout<<"Destructor of class B"<<endl;
		}
};

int main()
{
	A *p=new B;
	delete p;
}

//Due to early binding on the basis of type of p only A class destructor is invoked.


