#include<iostream>
using namespace std;
void heartpattern()
{
	for(int i=2;i<=8;i++)
	{
		cout<<"\t\t";
		for(int j=0;j<=8-i;j++)
		cout<<" ";
		for(int k=0;k<=2*i;k++)
		cout<<"*";
		for(int j=0;j<=8-i;j++)
		cout<<"  ";
		for(int k=0;k<=2*i;k++)
		cout<<"*";
		cout<<"\n";
	}
	for(int i=17;i>=0;i--)
	{
		cout<<"\t\t";
		for(int j=0;j<=17-i;j++)
		cout<<" ";
		for(int k=0;k<=2*i;k++)
		cout<<"*";
		cout<<"\n";
	}
}
void starpattern()
{
	for(int i=0;i<=5;i++)
	{
		cout<<"\t\t";
		for(int j=0;j<=5-i;j++)
		cout<<" ";
		for(int k=0;k<=2*i;k++)
		cout<<"*";
		cout<<"\n";
	}
	for(int i=13;i>=10;i--)
	{
		cout<<"\t";
		for(int j=0;j<=13-i;j++)
		cout<<" ";
		for(int k=0;k<=2*i;k++)
		cout<<"*";
		cout<<"\n";
	}
	for(int i=4;i>=0;i--)
	{
		cout<<"\t";
		for(int j=0;j<=i;j++)
		cout<<" ";
		for(int k=0;k<=2*i;k++)
		cout<<"*";
		for(int j=0;j<=7-2*i;j++)
		cout<<"   ";
		for(int k=0;k<=2*i;k++)
		cout<<"*";
		cout<<"\n";
	}
}
void boxpattern()
{
	for(int i=5;i!=30;i++)
	{
		cout<<"\t\t";
		for(int j=5;j!=30;j++)
		{
			if(i==5 || i==30-1 || j==5 || j==30-1) cout<<"* ";
			else cout<<"  ";
		}
		cout<<endl;
	}
}
int main()
{
	cout<<"\n\n\t\t1 --> Heart Pattern"<<endl;
	cout<<"\t\t2 --> Star  Pattern"<<endl;
	cout<<"\t\t3 --> Box   Pattern"<<endl;
	int choice;
	char ch;
	do{
	cout<<"Enter your choice: ";
	cin>>choice;
	switch(choice)
	{
		case 1:
			heartpattern();
			break;
		case 2:
			starpattern();
			break;
		case 3:
			boxpattern();
			break;
	}
	cout<<"\nDo you want to back (y/n)";
	cin>>ch;
	}
	while(ch=='y' || ch=='Y');
}
