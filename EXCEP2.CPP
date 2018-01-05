#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int a;
	cout<<"Enter value of a";
	cin>>a;
	try
	{
		if(a<=500)
		{
			throw '50';
		}
		else if(a>500 && a<=1000)
		{
			throw 'er';
		}
	}
	catch(int e)
	{
		cout<<"500 error";
	}
	catch(char c)
	{
		cout<<"global error";
	}
	getch();
	return 0;
}