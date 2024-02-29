#include<iostream>
using namespace std;
void f1();

void f1()
{
	
	int age ,vote;
	try
	{
		cout<<"Enter your age:";
		cin>>age;
		if(age<18)
			throw 1;
		cout<<"Vote for your favourite perrson:";
		cout<<"1.Amir khan"<<endl;
		cout<<"2.salman khan"<<endl;
		cout<<"3.Akshay kumar"<<endl;	
		cin>>vote;
		cout<<"Thanks for your vote";	
	}
	
	catch(int e)
	{
		cout<<"You are not eligible to cast your vote";
	}
}

int main()
{
	 f1();
	return 0;
}
