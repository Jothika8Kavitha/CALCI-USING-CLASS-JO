#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class calculator{
	float a,b;
	public:
		void result()
		{
			cout<<"Enter First Number: "<<endl<<endl;
			cin>>a;
			cout<<"Enter Second Number: "<<endl<<endl;
			cin>>b;
		} 
		float add()
		{
			cout<<"\033[1;37;48m"<<"The addition of first number and second number is : "<<"\033[0m";
			cout<<endl;
			return a+b;
		} 
		float sub()
		{
			cout<<"\033[1;37;48m"<<"The subtraction of first number and second number is : "<<"\033[0m";
			cout<<endl;
			return a-b;
		} 
		float mul()
		{
			cout<<"\033[1;37;48m"<<"The product of first number and second number is : "<<"\033[0m";
			cout<<endl;
			return a*b;
		} 
		float div() 
		{
			if(b==0)
			{
				cout<<"The division by zero returns infinite";
				return INFINITY;
			} 
			else if(a==0)
			{
				cout<<"Anything divided with zero it returs zero";
				return 0;
			} 
			else
			{
				cout<<"The quotient of first number and second number is : ";
				return a/b;
			}
		}
};
int main() {
	int n;
	calculator c;
	cout<<"\033[1;37;41m"<<"		---Hey user!Now you can make your calculations!---		"	<<"\033[0m"<<endl<<endl;
	cout<<"\033[1;30;41m"<<"			Enter 1 for addition of 2 numbers : "<<"\033[0m"<<endl<<endl;
	cout<<"\033[1;30;41m"<<"			Enter 2 for subtraction of 2 numbers : "<<"\033[0m"<<endl<<endl;
	cout<<"\033[1;30;41m"<<"			Enter 3 for product of 2 numbers : "<<"\033[0m"<<endl<<endl;
	cout<<"\033[1;30;41m"<<"			Enter 4 for division of 2 numbers : "<<"\033[0m"<<endl<<endl;
	
	cout<<endl;
	do{
		cout<<"Enter Your Choice: "<<endl<<endl;
		cin>>n;
		switch(n)
		{
			case 1:
				c.result();
				cout<<endl;
				cout<<"\033[1;37;41m"<<c.add()<<"\033[0m"<<endl<<endl;
				break;
				
			case 2:
				c.result();
				cout<<endl;
				cout<<"\033[1;37;41m"<<c.sub()<<"\033[0m"<<endl<<endl;
				break;
				
			case 3:
				c.result();
				cout<<endl;
				cout<<"\033[1;37;41m"<<c.mul()<<"\033[0m"<<endl<<endl;
				break;
				
			case 4:
				c.result();
				cout<<endl;
				cout<<"\033[1;37;41m"<<c.div()<<"\033[0m"<<endl<<endl;
				break;
			
		}
	} while(n>=1 && n<=4);
	system("pause");




}