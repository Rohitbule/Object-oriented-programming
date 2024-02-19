#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
struct book
{
	int bookid;
	char title[20];
	float price;
};

struct book inputbook();
void displaybook(struct book);

int main()
{
	struct book b1={1,"C",290.12},b2,b3;
	b2.bookid=2;
	strcpy(b2.title,"Java");
	b2.price=275.0;
	b3=inputbook();
	displaybook(b3);
}
void displaybook(struct book b)
{
	cout<<b.bookid<<"  "<<b.title<<"  "<<b.price<< endl;
}

struct book inputbook()
{
	struct book b;
	cout<<"enter Bookid,title and price :";
	cin>>b.bookid;
	cin.ignore();  //fflush(stdin) 
	cin.getline(b.title,20);  	//fgets(b.title,20,stdin);  = to get input as string from user=
	cin>>b.price;
	return b;
}
