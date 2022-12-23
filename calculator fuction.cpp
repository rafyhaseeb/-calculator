#include <iostream>
#include <cmath>
using namespace std;

void Addition(int a,int b){
    cout<<"the sum is = ";
	cout<<a+b<<endl;
}
void Subtract(int a,int b){
    cout<<"the difference is = ";
	cout<<a-b<<endl;
}
void Product(int a,int b){
    cout<<"the product is = ";
	cout<<a*b<<endl;
}
void Division(int a ,int b){
    cout<<"tne Quotient is = ";
	cout<<a/b<<endl;
}
void Mode(int a,int b){
    cout<<"the mode is = ";
	cout<<a%b<<endl;
}
void Square(int a,int b){
    cout<<"the square of a is ="<<sqrt(a)<<endl<<"the square of b is ="<<sqrt(b);
	
}
void logarithm(int a,int b){
    cout<<"the log of a is="<<log(a)<<endl<<"the log of b is ="<<log(b);
	
}

int main()
{
	int a,b;
	cout<<"Enter two number ";
	cin>>a>>b;
	cout<<"Enter only these operator:+,-,*,%,/,s,l"<<endl;
	char c;
	cin>>c;
	if(c=='+')
	Addition(a,b);
	else if(c=='-')
	Subtract(a,b);
	else if(c=='*')
	Product(a,b);
	else if(c=='/')
	Division(a,b);
	else if(c=='%')
	Mode(a,b);
	else if(c=='s')
	Square(a,b);
	else if(c=='l')
	logarithm(a,b);
	else
	cout<<"invalid entry";
	return 0;}
