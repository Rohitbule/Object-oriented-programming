#include<iostream>
using namespace std;
class complex
{
	int real,imaginary;
	
	public:
		void setdata(int x,int y)
		{
			real=x;
			imaginary=y;	
		}
		void showdata();
			
};

		void complex::showdata()
		{
			cout<<"real=" <<real<< " imaginary=i" <<imaginary<<endl;	
		}	

int main()
{
	complex c1;
	c1.setdata(5,10);
	c1.showdata();
}
