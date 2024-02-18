#include<iostream>
using namespace std;
inline int square(int );
int main()
{
	int x,y;
	cout<<"enter the number :";
	cin>>x;
	y=square(x);
	cout<<"square of "<<x<<" is "<<y;
	return 0;
}

int square(int a)
{
	return a*a; 
}
