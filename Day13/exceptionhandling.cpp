#include<iostream>
using namespace std;
int main()
{
	try
	{
	int a,b;
	cout<<"enter two number:";
	cin>>a>>b;
	if(b==0)
		throw 1;
	int c=a/b;
	cout<<"result of"<<c;
	cout<<endl;
	}
	
	catch(int e)
	{
		cout<<"Runtime error"<<endl;
	}

	int x,y;
	cout<<"enter two number:";
	cin>>x>>y;
	int z=x+y;
	cout<<"result of"<<z;
	cout<<endl;	
	
	return 0;
}
