#include<iostream>
#include<string.h>
using namespace std;
void f1();

char *strupr(char s[])
{
	int i;
	for(i=0;s[i];i++)
	{
		if(s[i]>='a'&&s[i]<='z')
			s[i]-=32;
	}
	return s;
}

void f1()
{
	
	int age ,vote;
	char nationality[20];
	try
	{
		cout<<"Enter your age:";
		cin>>age;
		if(age<18)
			throw 1;
		cout<<"Enter your nationality";
		cin.ignore();
		cin.getline(nationality,20);
		if(strcmp(strupr(nationality),"INDIAN"))
			throw nationality;
		cout<<"Vote for your favourite perrson:";
		cout<<"1.Amir khan"<<endl;
		cout<<"2.salman khan"<<endl;
		cout<<"3.Akshay kumar"<<endl;	
		cin>>vote;
		
			if(vote<1||vote>3)
			throw 2.0;
		cout<<"Thanks for your vote";	
	}
	
	catch(int e)
	{
		cout<<"You are not eligible to cast your vote";
	}
	
	catch(char *m)
	{
		cout<<"You have to be an indian to caste vote";
	}
	
	catch(...)  		//catch all
	{
		cout<<"Invalid vote";
	}
}

int main()
{
	 f1();
	return 0;
}
