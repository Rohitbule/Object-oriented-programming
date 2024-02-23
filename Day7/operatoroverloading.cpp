//define complex class with appropriate members.also define a function to add two complex numbers.
#include<iostream>
using namespace std;
class complex

{
	private:
	int real,imaginary;
	
	public:
		
		/*complex()//default constructor
		{
			cout<<"initalizers This is an  default constructor :""real=" <<real<< " imaginary=" <<imaginary<<endl;
			
    	}
		
		complex(int x)
		{
			real=x;
			imaginary=0;
			cout<<"initalizers This is an default constructor :""real=" <<real<< " imaginary=" <<imaginary<<endl;
		}
		
		complex(int x ,int y)	//parametrized constructor
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
		}*/
		
		void setdata(int x,int y);
		void showdata();
		complex operator+(complex c);
		complex operator-(complex c);	//binary operator overloading
		complex operator-();  //unary operator overloading
			

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
		
	complex complex::operator+(complex c)
	{
			complex temp;
			temp.real=real+c.real;
			temp.imaginary=imaginary+c.imaginary;
			return temp;
	}
	
		complex complex::operator-(complex c)
	{
			complex temp;
			temp.real=real-c.real;
			temp.imaginary=imaginary-c.imaginary;
			return temp;
	}
	
		complex complex::operator-()
	{
			complex temp;
			temp.real=-real;
			temp.imaginary=-imaginary;
			return temp;
	}
		
int main()
{
	
	complex c1,c2,c3;
	complex c4=c1;
	c1.setdata(3,4);
	c2.setdata(5,6);
	//c3=c1.add(c2);
	c3=c1+c2;
	c3.showdata();		//c3=c1.operator+(c2);
	cout<<endl;
	c3=c1-c2;
	c3.showdata();
	cout<<endl;
	c3=-c1;				//c3=c1.operator-()
	c1.showdata();
	c3.showdata();
	cout<<endl;
	
}
