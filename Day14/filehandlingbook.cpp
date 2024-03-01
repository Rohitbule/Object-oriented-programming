#include<iostream>
#include<string.h>
#include<stdio.h>
#include<fstream>
using namespace std;

class Book
{
	private:
		int bookid;
		char title[20];
		float price;
	
	public:
	void displaybook()
	{
		cout<<bookid<<"  "<<title<<"  "<<price<< endl;
	//cout<<"Bookid:"<< bookid<<" "<<",Title:"<<title<<" "<<",Price:"<<price<<endl;
	}
	
	
	void inputbook()
	{
		cout<<"enter Bookid,title and price :"<<endl;
		//cout<<"Enter the Bookid:";
		cin>>bookid;
		if(bookid<0)
			bookid=bookid;
		//cout<<"Enter the Title of Book:";
		cin.ignore();  //fflush(stdin) 
		cin.getline(title,20);  	//fgets(b.title,20,stdin);  = to get input as string from user=
		//cout<<"Enter the Price of Book:";
		cin>>price;
	}
	
	void store()
	{
		ofstream fout;
		fout.open("bookfile.dat",ios::app|ios::binary);
		fout.write((char*)this,sizeof(*this));
		fout.close();
	}
	
	void viewallbook()
	{
		ifstream fin;
		fin.open("bookfile.dat",ios::in|ios::binary);
		if(!fin)
			cout<<"File not found";
		else
		{
			fin.read((char*)this,sizeof(*this));
			while(!fin.eof())
			{
				displaybook();
				fin.read((char*)this,sizeof(*this));
			}
		}
		fin.close();
	}
};

int menu()
{
	int choice;
	cout<<"\n1.store new book record";
	cout<<"\n2.view all book record";
	cout<<"\n3.exit";
	cout<<"\nenter your choice";
	cin>>choice;
	return choice;
	
}

int main()
{
	Book b1;
	while(true)
	{
		switch(menu())
		{
			case 1:
				b1.inputbook();
				b1.store();
				break;
			case 2:
				b1.viewallbook();
				break;
			case 3:
				exit(0);
			default:
				cout<<"invalid choice";
		}
	}
}



