#include<iostream>
using namespace std;

class test
{
	private:
		int a,b;
	public:
		virtual void f1()=0; 		//pure virtual function
		void f2()
		{
			cout<<"f2";
		}
};

class dummytest:public test
{
	public:
		void f1()  		//overrridden function
		{
			cout<<"Overridden function";
		}
};

int main()
{
	//	dummytest obj;
	//	obj.f1();
	
	test *p=new dummytest;
	p->f1();

}
