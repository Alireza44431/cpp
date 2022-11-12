#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
////////////////////////
int fun(double ,double );
///////////////////////
int fun(double ,int );
///////////////////////
int fun(int,int);
///////////////////////
int main()
{
	
	cout<<fun(23,45)<<endl;
	cout<<fun(2.3,2)<<endl;
	cout<<fun(1.2,15.2)<<endl;

	getch();
	return 0;
	
}
//////////////////////////
int fun(int a,int b)
{
	return a+b;
}
//////////////////////////
int fun(double a,int b)
{
	return a*b;
}
//////////////////////////
int fun(double a,double b)
{
	return a/b;
}