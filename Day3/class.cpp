#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class book
{
	private:
	int bookid;
	char title[20];
	float price;
	
	public:
	void displaybook()
	{
	//	cout<<bookid<<"  "<<title<<"  "<<price<< endl;
	cout<<"Bookid:"<< bookid<<" "<<",Title:"<<title<<" "<<",Price:"<<price<<endl;
	}
	
	
	void inputbook()
	{
		//cout<<"enter Bookid,title and price :"<<endl;
		cout<<"Enter the Bookid:";
		cin>>bookid;
		cout<<"Enter the Title of Book:";
		cin.ignore();  //fflush(stdin) 
		cin.getline(title,20);  	//fgets(b.title,20,stdin);  = to get input as string from user=
		cout<<"Enter the Price of Book:";
		cin>>price;
	}
	
};

//struct book inputbook();
//void displaybook(struct book);

int main()
{
//	struct book b1={1,"C",290.12},b2,b3;
//	b2.bookid=2;
//	strcpy(b2.title,"Java");
//	b2.price=275.0;
//	b3=inputbook();
//	displaybook(b3);

	book b1,b2;
	b1.inputbook();
	b1.displaybook();
}



