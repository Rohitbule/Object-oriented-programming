//this pointer is a keyword .
//this is a local object pointer in every instance member function which contain address of the current object.
#include<iostream>
using namespace std;
class item
{
	private:
		int a,b;
		
	public:
		void setdata(int a,int b)
		{
			this->a=a; //name conflict between instance member variable and local variable 
			this->b=b;
		}
		void showdata()
		{
			cout<<"a="<<a<<"b="<<b;
		}
		
		item greater(item object)  //whenver it is require to represent current object in instance member function
		{
			if(a+b > object.a+object.b)
				return *this;
			else
				return object;
		}
};

int main()
{
	item i1,i2,i3;
	i1.setdata(10,20);
	i2.setdata(8,20);
	i3=i1.greater(i2);
	i3.showdata();
	cout<<endl;
}
