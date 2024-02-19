#include<iostream>
using namespace std;
class Item
{
	private:
		int a,b;	//instance member variable
		static int k; 	//static member variable || class variable
		
	public:
		void set_a(int x)	//instance method
		{
			a=x;
		}
		void set_b(int y)	//instance method
		{
			b=y;
		}
		int get_a()			//instance method
		{
			return a;
		}
		int get_b()			//instance method
		{
			return b;
		}
		static void set_k(int m)    //static instance method
		{
			k=m;
		}
		static int get_k()		//static instance method
		{
			return k;
		}
};

int Item::k; //defining static member variable

int main()
{
	/*Item i1,i2;
	i1.set_a(4);
	cout<<"i1="<<i1.get_a()<<endl;
	i2.set_b(2);
	cout<<"i2="<<i1.get_b()<<endl;
	i1.set_k(4);		//objectname.staticmethod
	cout<<"K="<<i1.get_k()<<endl;*/
	
	Item::set_k(10);  //when there is no object then we want to access static member private variable then we write as class::member function .
	cout<<"static value of k="<<Item::get_k();
	cout<<endl;
}
