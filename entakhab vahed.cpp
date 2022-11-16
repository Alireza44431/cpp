#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
///////////////////////////
 void riazy()
{
		int N;

	cout<<"name dars :riyazi"<<endl<<"name ostad :kazemi";
	cout<<"are you sure for sing up(N,y) :"<<endl;
	string x;
	cin>>x;
	if(x=="y")
	{
	cout<<"you are in class :)"<<endl;
	N++;
	}
	else
	{
		cout<<"you are not in class:("<<endl;
	}
	
}
 void phisic()
{
		int N;

	string x;
	cout<<"name dars :phisic"<<endl<<"name ostad :amin zade";
	cout<<"are you sure for sing up(N,y) :"<<endl;
	cin>>x;
	if(x=="y")
	{
	cout<<"you are in class :)"<<endl;
	N++;
	}
	else
	{
		cout<<"you are not in class :("<<endl;
	}
	 
}
void zaban()
{
	int N;

	string x;
	cout<<"name dars :zaban"<<endl<<"name ostad :falah";
	cout<<"are you sure for sing up(N,y) :"<<endl;
	cin>>x;
	if(x=="y")
	{
	cout<<"you are in class :)"<<endl;
	N++;
	}
	else
	{
		cout<<"you are not in class :("<<endl;
	}
	 
}
void gosaste()
{
	int N;
	string x;
	cout<<"name dars :gosaste"<<endl<<"name ostad :abootalbi";
	cout<<"are you sure for sing up(N,y) :"<<endl;
	cin>>x;
	if(x=="y")
	{
	cout<<"you are in class :)"<<endl;
	N++;
	}
	else
	{
		cout<<"you are not in class :("<<endl;
	}
	 
}
void amar()
{
	int N;
	string x;
	cout<<"name dars :amar"<<endl<<"name ostad :abasi";
	cout<<"are you sure for sing up(N,y) :"<<endl;
	cin>>x;
	if(x=="y")
	{
	cout<<"you are in class :)"<<endl;
	N++;
	}
	else
	{
		cout<<"you are not in class :("<<endl;
	}
}
////////////////////////////
int main()
{
	int code,tedad,N=0;
	cout<<"enter dars code :"<<endl<<"code dars riazi=1"<<endl<<"code dars phisic=2"<<endl<<"code dars zaban=3"<<endl<<"code dars gosaste=4"<<endl<<"code dars amar=5"<<endl;
	cout<<"enter tedad dars :"<<endl;
	cin>>tedad;
	
	while(N<5)
	{
		if(tedad>0)
	{
		for(int i=1;i<=tedad;i++)
		{
			cout<<"enter code :";
			cin>>code;
			///////////////////
			if(code==1)
			{
			 riazy();
			}
			else if(code==2)
			{
			 phisic();
			}
			else if(code==3)
			{
			 zaban();
			}
			else if(code==4)
			{
			 gosaste();
			}
			else if (code==5)
			{
			 amar();
			}
		}
		cout<<"good luck ";
	}
	else
	{
		cout<<"Error...";
	}
	}
	getch();
	return 0;
}
