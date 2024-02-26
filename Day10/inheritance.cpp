#include<iostream>
#include<string.h>
using namespace std;

class person
{
	private:
		int age;
		char name[20];
	protected:
		void setage(int a)
		{
			age=a;
		}
		
		void setname(char n[])
		{
			strcpy(name,n);
		}
	public:
		int getage()
		{
			return age;
		}
		
		char* getname()
		{
			return name;
		}
};

class empolyee:public person  //user 2
{
	private:
		float salary;
	public:
		void setemployee(int a,char n[],float s)
		{
			setage(a);
			setname(n);
			salary=5;
		}
};

int main()
{
	person p1;		//user 1
	p1.getage();
}












