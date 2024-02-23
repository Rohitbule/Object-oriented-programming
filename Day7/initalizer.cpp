//define complex class with appropriate members.also define a function to add two complex numbers.
#include<iostream>
using namespace std;
class complex

{
	private:
	int real,imaginary;
	const int k;
	
	public:
		
		complex():real(0),imaginary(0),k(1)	//default constructor
		{
			cout<<"initalizers This is an  default constructor :""real=" <<real<< " imaginary=" <<imaginary<<endl;
			
    	}
		
		complex(int x):real(x),imaginary(0),k(2)
		{
			real=x;
			imaginary=0;
			cout<<"initalizers This is an default constructor :""real=" <<real<< " imaginary=" <<imaginary<<endl;
		}
		
		complex(int x ,int y, int k):real(x),imaginary(y),k(k)	//parametrized constructor
		{
			//real=x;
			//imaginary=y;
			cout<<"This is an parametrized constructor :""real=" <<real<< " imaginary=" <<imaginary<<endl;
		}
		
		complex(complex &c):k(2) //copy constructor
		{
			real=c.real;
			imaginary=c.imaginary;
			cout<<"This is an Copy constructor :"<<"real=" <<real<< " imaginary=" <<imaginary<<endl;
		}
		
		void setdata(int x,int y);
		void showdata();
		complex add(complex c);
			
};

void complex::setdata(int x,int y)
	{
			real=x;
			imaginary=y;	
	}

	void complex::showdata()
	{
			cout<<"real=" <<real<< " imaginary=" <<imaginary<<endl;	
	}
		
	complex complex::add(complex c)
	{
			complex temp;
			temp.real=real+c.real;
			temp.imaginary=imaginary+c.imaginary;
			return temp;
	}

int main()
{
	
	complex c1(1,2,2),c2(3),c3;
	complex c4=c1;
	c1.showdata();
	c2.showdata();
	c3.showdata();
	cout<<endl;
	
	
	
}
