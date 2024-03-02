#include<iostream>
using namespace std;
void f1();
void f2();
void f3();
void f4();
void f5();
void f6();
void f7();
void f8();
void f9();
void f10();

int main()
{
	//f1();
	//f2();
	//f3();
	//f4();
	//f5();
	//f6();
	//f7();
	f8();
	//f9();
	//f10();
	return 0;	
}

void f10()
{
	int a[10]={1,2,3,4,5,6,7,8,9,10};
	int s=0;
	for(int i=0; i<=9; i++)
	{
		s=s+a[i];
	}
	cout<<"sum is : "<<s;
	
}
void f9()
{
	int a,b;
	cout<<"enter two numbers:"<<endl;
	cin>>a>>b;
	if(a>b)
	cout<<a	;
	else
	cout<<b;
}

void f8()
{
	int a,b;
	cout<<"enter two number :"<<endl;
	cin>>a>>b;
	b=a+b -(a=b);
	cout<<"a="<<a<<"b="<<b;
}
void f7()
{
	int a,b;
	cout<<"enter the number :"<<endl;
	cin>>a;
	b=a*a;
	cout<<"Square of "<<a<< " is "<<b;
}

void f6()
{
	int a,b,c,d;
	cout<<"enter the three number:"<<endl;
	cin>>a>>b>>c;
	d=(a+b+c)/3;
	cout<<"Average of three number is : "<<d;
}
void f5()
{
	int volume,length,breadth,height;
	cout<<"Enter the length breadth and height:"<<endl;
	cin>>length>>breadth>>height;
	volume=length*breadth*height;
	cout<<"Area of volume is "<<volume;
}
void f4()
{
	int radius;
	float area;
	cout<<"enter the radius of circle:"<<endl;
	cin>>radius;
	area=3.14*radius*radius;
	cout<<"Area of circle is "<<area;
	
}
void f3()
{
	int a,b,c;
	cout<<"Enter two number:"<<endl;
	cin>>a>>b;
	c=a+b;
	cout<<"Addition of two number is "<<c;
}

void f2()
{
	cout<<"hello"<<endl<<"Mysirg";
}
void f1()
{
	cout<<"Hello Mysirg";
}
