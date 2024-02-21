//define complex class with appropriate members.also define a function to add two complex numbers.
#include<iostream>
using namespace std;
class complex
{
	int real,imaginary;
	
	public:
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
	complex c1,c2,c3;
	c1.setdata(3,4);
	c2.setdata(5,6);
	c3=c1.add(c2); //c1 is caller object jisne apne add method ko call kiya aur c2 as an argument pass hua.ab jho add function return kiya woh c3 me assign hua.
	//c3.add(c1,c2);
	c3.showdata();
	cout<<endl;
}
