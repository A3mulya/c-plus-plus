#include<iostream.h>
#include<conio.h>
class example
{
public:
inline float mul(int x,int y)
{
return(x*y);
}
};
void main()
{
clrscr();
example obj;
int a,b;
cout<<"Enter two values";
cin>>a>>b;
cout<<"Answer= "<<obj.mul(a,b);
getch();
}