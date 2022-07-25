#include<iostream.h>
#include<conio.h>
class B
class A 
{
int x;
public:
void setdata(int i)
{
x=1;
}
friend void min(A,B);
};
class B
{
int y;
public:
void setdata(int i)
{
y=i;
}
friend void min(A,B);
};
void min(Aa,Bb)
{
if(a.x<=b.y)
cout<<"a.x<<endl;
else 
cout<<"b.y<<endl;
}
int main()
{
A a;
B b;
int p;
clrscr();
cout<<"enter value of a.x;"
cin>>p;
a.setdata(p);
cout<<"enter value of b.y";
cin>>p;
b.setdata(p);
min(a,b);
return 0;
}

