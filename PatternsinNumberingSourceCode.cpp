#include<iostream>
using namespace std;
void pattern1(int rows)
{
	int count=rows-1;
	int left=0;
	int right=0;
	for(int i=1;i<=rows;i++)
	{
		for(int k=1;k<=count;k++)
		{
			cout<<"";
		}
		for(int j=0;j<=left;j++)
		{
			cout<<i;
		}
		left++;
		if(i!=0)
		{
			for(int j=right;j>=1;j--)
			{
				cout<<i;
			}
			right++;
			cout<<"\n";
			count--;
		}
	}
}
void pattern2(int rows)
{
	int count=rows-1;
	int left=0;
	int right=0;
	for(int i=1;i<=rows;i++)
	{
		for(int k=1;k<=count;k++)
		{
			cout<<"  ";
		}
		for(int j=0;j<=left;j++)
		{
			cout<<i;
		}
		left++;
		if(i!=0)
		{
			for(int j=right;j>=1;j--)
			{
				cout<<i;
			}
			right++;
			cout<<"\n";
			count--;
		}
	}
}
void pattern3(int rows)
{
	int count=rows-1;
	int left=0;
	int right=0;
	for(int i=1;i<=rows;i++)
	{
		for(int k=1;k<=count;k++)
		{
			cout<<" ";
		}
		for(int j=0;j<=left;j++)
		{
			cout<<i;
		}
		left++;
		if(i!=0)
		{
			for(int j=right;j>=1;j--)
			{
				cout<<i;
			}
			right++;
			cout<<"\n";
			count--;
		}
	}
}
void pattern4(int rows)
{
	int count=0;
	int left=rows;
	int right=rows-1;
	for(int i=rows;i>=0;i--)
	{
		if(i!=0)
		{
			for(int k=1;k<=count;k++)
			{
				cout<<" ";
			}
			for(int j=1;j<=left;j++)
			{
				cout<<i;
			}
			left--;
			for(int j=right;j>=1;j--)
			{
				cout<<i;
			}
			right--;
			cout<<"\n";
			count++;
		}
	}
}
void pattern5(int rows)
{
	int count=rows-1;
	int left=0;
	int right=0;
	for(int i=1;i<=rows;i++)
	{
		for(int k=1;k<=count;k++)
		{
			cout<<" ";
		}
		for(int j=0;j<=left;j++)
		{
			cout<<i;
		}
		left++;
		if(i!=0)
		{
			for(int j=right;j>=1;j--)
			{
				cout<<i;
			}
			right++;
			cout<<"\n";
			count--;
		}
	}
	count=0;
	left=rows;
	right=rows-1;
	for(int i=rows;i>=0;i--)
	{
		if(i!=0)
		{
			for(int k=1;k<=count;k++)
			{
				cout<<" ";
			}
			for(int j=1;j<=left;j++)
			{
				cout<<i;
			}
			left--;
			for(int j=right;j>=1;j--)
			{
				cout<<i;
			}
			right--;
			cout<<"\n";
			count++;
		}
	}
}
void pattern6(int rows)
{
		int count=0;
	int left=rows;
	int right=rows-1;
	for(int i=rows;i>=0;i--)
	{
		if(i!=0)
		{
			for(int k=1;k<=count;k++)
			{
				cout<<" ";
			}
			for(int j=1;j<=left;j++)
			{
				cout<<i;
			}
			left--;
			for(int j=right;j>=1;j--)
			{
				cout<<i;
			}
			right--;
			cout<<"\n";
			count++;
		}
	}
	count=rows-1;
	left=0;
	right=0;
	for(int i=1;i<=rows;i++)
	{
		for(int k=1;k<=count;k++)
		{
			cout<<" ";
		}
		for(int j=0;j<=left;j++)
		{
			cout<<i;
		}
		left++;
		if(i!=0)
		{
			for(int j=right;j>=1;j--)
			{
				cout<<i;
			}
			right++;
			cout<<"\n";
			count--;
		}
	}
}
void pattern7(int rows)
{
	for(int i=rows;i>=0;i--)
	{
		for(int j=0;j<rows;j++)
		{
		if(i==j || i+j==rows-1)
		{
			cout<<i+1;
		}
		else
		{
			cout<<" ";
		}
		}
		cout<<"\n";
	}
}
int main()
{
	int rows, choice;
	char ch;
	cout<<"\n\t\t\tC++ PATTERNS IN NUMBERING"<<endl;
	cout<<"\t\t\t__________________________"<<endl<<endl;
	cout<<"\n\t\t 1 --> Left side pyramaid in Numbering"<<endl;
	cout<<"\t\t 2 --> Right side pyramaid in Numbering"<<endl;
	cout<<"\t\t 3 --> First Triangle in Numbering"<<endl;
	cout<<"\t\t 4 --> Second Triangle in Numbering"<<endl;
	cout<<"\t\t 5 --> Diamand in Numbering"<<endl;
	cout<<"\t\t 6 --> Reverse Pattern in Numbering"<<endl;
	cout<<"\t\t 7 --> Reverse Pattern X in Numbering"<<endl;
	do{
	cout<<"Enter a choice: ";
	cin>>choice;
	cout<<"Enter a rows: ";
	cin>>rows;
	switch(choice)
	{
		case 1:
			{
				pattern1(rows);
				break;
			}
		case 2:
			{
				pattern2(rows);
				break;
			}
		case 3:
			{
				pattern3(rows);
				break;
			}
		case 4:
			{
				pattern4(rows);
				break;
			}
		case 5:
			{
				pattern5(rows);
				break;
			}
		case 6:
			{
				pattern6(rows);
				break;
			}
		case 7:
			{
				pattern7(rows);
				break;
			}
		default:
			{
				cout<<"Invalid Choice";
				break;
			}
	}
	cout<<"\n Do you want to back (y/n)?";
	cin>>ch;
}
while(ch=='y' || ch =='Y');
return 0;
}
