#include<iostream>
#include<string.h>
using namespace std;
void f3();

//defining my own class
class dividebyzero : public exception
{
	public:
		const char* what() const throw()
		{
			return "Divide by zero exception";
		}
};

void f3()
{
	int a,b;
	try
	{
		cout<<"enter two number:";
		cin>>a>>b;
		if(b==0)
			throw *(new dividebyzero);
		int c=a/b;
		cout<<"Result is"<<c;
	}
	catch(dividebyzero ex)
	{
		cout<<ex.what();
	}
	
	//	catch(exception e)
//	{
		
//	}

}

int main()
{
	f3();
	return 0;
}


