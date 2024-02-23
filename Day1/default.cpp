#include<iostream>
using namespace std;
int add(int a,int b, int c=0);  //default argument
int main()
{
	int x,y,z;
	cout<<"enter the two number :"<<endl;
	cin>>x>>y;
	cout<<"sum of two number:"<<add(x,y)<<endl;
	
	cout<<"enter three number :"<<endl;
	cin>>x>>y>>z;
	cout<<"sum of three number:"<<add(x,y,z);
	return 0;
}

int add(int a,int b, int c)
{
	return a+b+c;
}
