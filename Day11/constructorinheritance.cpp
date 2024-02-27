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
		//constructor
		person(int a,char n[])
		{
			age=a;
			strcpy(name,n);
		}
		
		//destructor
		~person()
		{
			cout<<"\nDestructor of class person";
		}
		
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
		
		empolyee():person(20,"Arjun")
		{
			
		}
		
		//destructor
		~empolyee()
		{
				cout<<"\nDestructor of class empolyee";
		}
			
		void setemployee(int a,char n[],float s)
		{
			setage(a);
			setname(n);
			salary=5;
		}
};

int main()
{
  	empolyee e1;  //user 1	
}

//to initalize properties of newly created object











