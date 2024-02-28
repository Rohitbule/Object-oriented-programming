#include<iostream>
using namespace std;

class A
{
	public:
		void f1() 		//function overriding 
		{
			cout<<"class A :f1"<<endl;
		}
};

class B:public A
{
	public:
		void f1() 		//function overriding
		{
			cout<<"class B :f1"<<endl;
		}
};

int main()
{
	B obj;
	obj.f1();
}

