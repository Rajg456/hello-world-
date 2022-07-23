#include<iostream.h>
#include<conio.h>

enum week{sunday,monday,tuesday,wednesday,thursday,friday,saturday};

int main()
{
  week today;
  today=saturday;
  cout<<"day"<<today+1;
  getch();
  return 0;
  }

