#include<iostream.h>
#include<conio.h>
class shape
{
public:
virtual void draw()=0;
};
class rect:shape
{
public:
void draw()
{
cout<<"rectangle"<<endl;
}
};
class cir:shape
{
public:
void draw()
{
cout<<"circle"<<endl;
}
};
int main()
{
clrscr();
rect rec;
cir circ;
rec.draw();
circ.draw();
getch();
return 0;
}
