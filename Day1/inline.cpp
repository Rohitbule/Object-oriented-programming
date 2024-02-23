#include<iostream>
using namespace std;
inline int square(int );	//inline function

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

/* 1.to eliminate the cost of call to small functions is called inline function.
   2.Inline is request not a commond.
   3.inline function is a function that is expanded in a line when it is invoked.
*/
