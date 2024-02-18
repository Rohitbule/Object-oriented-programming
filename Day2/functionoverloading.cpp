#include<iostream>
using namespace std;
int add(int a,int b);
int add(int a,int b,int c);
int main()
{
	int x,y,z;
	cout<<"enter two number:"<<endl;
	cin>>x>>y;
	cout<<"sum of "<<x<<" and " <<y<< " is " << add(x,y)<<endl;
	
	cout<<"enter three number:";
	cin>>x>>y>>z;
	cout<<"sum of " <<x<< " and " <<y<< " and  " <<z<< " is "<< add(x,y,z);
	return 0;
}
int add(int a,int b)
{
	return a+b;
}
int add(int a,int b,int c)
{
	return a+b+c;
}
