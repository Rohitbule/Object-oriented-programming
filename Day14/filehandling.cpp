#include<iostream>
#include<fstream>
using namespace std;
void writing()
{
	ofstream fout;	//ofstream is a class .fout is an object 
	fout.open("file.txt",ios::out);
	char str[]="Rohit Bule";
	fout<<str;
	fout.close();
}

void reading()
{
	ifstream fin;
	char ch;
	fin.open("file.txt",ios::in);
	if(!fin)
		cout<<"File is not found";
	else
	{
		ch=fin.get();
		while(!fin.eof())  //make true to false
		{
			cout<<ch;
			ch=fin.get();
		}
	}
	fin.close();
}

void append(char data[])  //it will first content as it is and concatenate new content.
{
	ofstream fout;
	fout.open("file.txt",ios::app);
	fout<<data;
	fout.close();
}

int main()
{
	char str[]="File handling in c++";
	append(str);
	reading();
	//writing();
	cout<<endl;
	return 0;
}
