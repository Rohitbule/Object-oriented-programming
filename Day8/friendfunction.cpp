#include<iostream>
using namespace std;
class item
{
	private:
		int a,b;
		
	public:
		void setdata(int x, int y)
		{
			a=x;
			b=y;
		}
		
		void showdata()
		{
			cout<<"a="<<a<<"b="<<b;
		}
		
		friend item operator+(int,item);
		friend item operator+(item,item);
		friend item operator-(item);
		friend void f1(item);

};

item operator+(int k,item i)
{
	item temp;
	temp.a=i.a+k;
	temp.b=i.b;
	return temp;
}
item operator-(item i)
{
	item temp;
	temp.a=-i.a;
	temp.b=-i.b;
	return temp;
}

item operator+(item x,item y ) //passing two argument when it has friend function.when it is not friend function it a member function we have passed  one argument.
{
	item temp;
	temp.a=x.a+y.b;
	temp.b=x.b+y.b;
	return temp;
}

void f1(item i)
{
	
	int c=i.a+i.b;
	cout<<"sum is "<<c;
	
	
	/*item t1;
	t1.setdata(10,20);
	int c=t1.a+t1.b;
	cout<<"sum is "<<c;*/
	//cout<<"Hello";
}
int main()
{
	item i1,i2,i3;
	i1.setdata(3,5);
	i2.setdata(9,4);
	i3=i1+i2;
	//i3=5+i1;
	i3.showdata();
	cout<<endl;
	i3=-i1;
	i3.showdata();
	cout<<endl;
	f1(i1);  //we are passing the object as argument
	
}
