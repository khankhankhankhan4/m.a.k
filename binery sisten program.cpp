#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int d,b,c[100],i;
	cout<<"enter the number \n=>";
cin>>d;
while(d>0)
{
	c[i]=d%2;
	d=d/2;
     i++;	
}
for(int j=i-1;j>0;j--)
{
	cout<<c[j];
}
getch();
return 0;
}
