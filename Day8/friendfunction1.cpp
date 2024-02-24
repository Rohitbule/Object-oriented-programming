#include<iostream>
using namespace std;
class item
{
	private:
		int a,b;
		
	public:
		friend void f1();
};

void f1()
{
		cout<<"hello";	
}


int main()
{
	f1();
	cout<<endl;
}

