//define complex class with appropriate members.also define a function to add two complex numbers.
#include<iostream>
using namespace std;
class complex

{
	private:
	int real,imaginary;
	
	public:
		
//		complex()	//default constructor
//		{
//			real=0;
//			imaginary=0;
//			cout<<"This is an default constructor :""real=" <<real<< " imaginary=" <<imaginary<<endl;
//			
//		}
		
		complex(int x) 
		{
			real=x;
			imaginary=0;
			cout<<"This is an default constructor :""real=" <<real<< " imaginary=" <<imaginary<<endl;
		}
		
		complex(int x ,int y)		//parametrized constructor
		{
			real=x;
			imaginary=y;
			cout<<"This is an parametrized constructor :""real=" <<real<< " imaginary=" <<imaginary<<endl;
		}
		
		complex(complex &c) //copy constructor
		{
			real=c.real;
			imaginary=c.imaginary;
			cout<<"This is an Copy constructor :"<<"real=" <<real<< " imaginary=" <<imaginary<<endl;
		}
		
		~complex()
		{
			void setdata(int,int);
			void showdata();
			complex add(complex);
		}
			
};

int main()
{
	
	complex c1(1,2),c2(8),c3(5,6);
	complex c4=c1;
	cout<<endl;
	
}
