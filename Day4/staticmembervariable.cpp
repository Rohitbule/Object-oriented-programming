#include<iostream>
using namespace std;
class Item
{
	public:
		int a,b;	//instance member variable
		static int k; 	//static member variable || class variable
};

int Item::k=4; //defining static member variable

int main()
{
	/*Item i1,i2;
	i1.a=5;
	cout<<"i1="<<i1.a<<endl;
	cout<<"i2="<<i2.a<<endl;
	cout<<"k="<<i1.k<<endl;*/ //we are accesing the static member variable by creating object.
	
	cout<<"k="<<Item::k;  //we can also access static member variable without using object.first we declare the name of class::static member variable name
	
}
