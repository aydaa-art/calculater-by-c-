#include<iostream>
#include<conio.h>
#include<math.h>
#define PI 3.14159265
using namespace std;

main()
{
	char chr;
	while(true)
	{
	cout<<"please enter the number of what you want to do :"<<endl;
	cout<<"1)arith"<<endl<<"2)trig"<<endl<<"3)exp"<<endl<<"4)loga"<<endl;
	int num1;
	cin>>num1;
	if(num1==1)
	{
		cout<<"enter the number you want:"<<endl;
		cout<<"1)sum"<<endl<<"2)sub"<<endl<<"3)mul"<<endl<<"4)div"<<endl;
		int num2;
		cin>>num2;
		float a1,b1,c1;
		if(num2==1)
		{
			cout<<"enter your first number:"<<endl;
			cin>>a1;
			cout<<"enter your second number:"<<endl;
			cin>>b1;
			c1=a1+b1;
			cout<<a1<<" "<<"plus"<<" "<<b1<<" "<<"is:"<<" "<<c1<<endl;
		}
		else if(num2==2)
		{
			cout<<"enter your first number:"<<'\t';
			cin>>a1;
			cout<<"enter your second number:"<<'\t';
			cin>>b1;
			c1=a1-b1;
			cout<<a1<<" "<<"minus"<<" "<<b1<<" "<<"is:"<<" "<<c1<<endl;
			
		}
		else if(num2==3)
		{
			cout<<"enter your first number:"<<'\t';
			cin>>a1;
			cout<<"enter your second number:"<<'\t';
			cin>>b1;
			c1=a1*b1;
			cout<<a1<<" "<<"times"<<" "<<b1<<" "<<"is:"<<" "<<c1<<endl;
		}
		else if(num2==4)
		{
			cout<<"enter your first number:"<<'\t';
			cin>>a1;
			cout<<"enter your second number:"<<'\t';
			cin>>b1;
			c1=a1/b1;
			if(b1!=0)
			{
				cout<<a1<<" "<<"divided by"<<" "<<b1<<" "<<"is:"<<" "<<c1<<endl;
			}
			else
			{
				cout<<"they can not be divided!"<<endl;
			}
		}

			
	}
	else if(num1==2)
	{
		cout<<"enter the number you want:"<<endl;
		cout<<"1)sin"<<endl<<"2)cos"<<endl;
		int num3;
		cin>>num3;
		if(num3==1)
		{
			double m, r;
			cout<<"enter your number:"<<'\t';
			cin>>m;
			r = sin (m*PI/180);
			cout<<"The sine of degree is:"<<r<<endl;	
		}
		else if(num3==2)
		{
			double m, r;
			cout<<"enter your number:"<<'\t';
			cin>>m;
			r = cos (m*PI/180);
			cout<<"The cosine of degree is:"<<r<<endl;	
		}
		
	}
	else if(num1==3)
	{
		int base,exp,result;
		cout<<"please enter your base:"<<" ";
		cin>>base;
		cout<<"please enter your expnent:";
		cin>>exp;
		result= pow(base,exp);
		cout<<base<<" "<<"power"<<" "<<exp<<" "<<"is:"<<" "<<result<<endl;
	}
	else if(num1==4)
	{
	 	double m, r;
		cout<<"enter the value to calculate the log(e)"<<endl;
		 cin>>m;
		 r = log(m);
		 cout << "log("<< m <<") = " << r<<endl;
		 
	}
		cout<<"do you want to continue?  y/n"<<endl;
		cin>>chr;
		if(chr=='n')
		break;
	}
		getch();
	}