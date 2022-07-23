#include<iostream.h>
#include<conio.h>
int x;//Global x
int main()
{
int x=10;//Local x
clrscr();
cout<<"value of global x is"<<::x;
cout<<"value of local x is"<<x;
getch();
return 0;
}
