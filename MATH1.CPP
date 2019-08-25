#include<iostream.h>
#include<conio.h>
#include<math.h>

int main()
{
float a,b;
cout<<"Enter the value of"<<endl;
cin>>a>>b;
{
cout<<sin(a+b)<<"\t\t"<<sin(a)*cos(b) + cos(a)*sin(b)<<endl;
cout<<sin(a-b)<<"\t\t"<<sin(a)*cos(b) - cos(a)*sin(b)<<endl;
}
getch();
return 0;
}
