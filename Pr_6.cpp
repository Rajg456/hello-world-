#include<iostream.h>
#include<conio.h>
class convert 
{
private:
float f;
public:
void getdata()
{
cout<"Enter value of f:";
cin>>f 
}
float c=(f-32)*(5)/9;
return c;
}
};
int main()
convert x;
clrscr();
x.getdata();
cout<<"Answer:"<<x.display();
return 0;
}
