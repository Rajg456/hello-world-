#include<iostream.h>
#include<conio.h>
class firstclass 
{
friend class 
second class 
public:
firstclass ()
{
x=0;
}
void put()
{
cout<<x<<endl;
}
private:
int x;
};
class secondclass 
{
public:
void change (first class & abc,int y)
{
abc.x=y;
}
int main()
{
first class;
second class.h;
clrscr();
d.put();
h.change(d,s);
d.put();
getch();
return 0;
}
