#include<iostream>
using namespace std;

class A
{
	public:
		void f1() 		
		{
			cout<<"class A :f1"<<endl;
		}
};

class B:public A
{
	public:
		void f1(int x) 		//function hiding. this is not function overloading
		{
			cout<<"value of f1 of x is"<<x<<endl;
		}
		void f2()
		{
			cout<<"class B :f2";
		}
};

int main()
{
	B obj;
	obj.A::f1();		//do binding with f1 function of class A
	obj.f1(5);
	
//	obj.f1(6); 			//do binding with f1 function of class B
//	obj.f2();


}

