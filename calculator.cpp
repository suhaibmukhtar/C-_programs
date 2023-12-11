#include<iostream>
using namespace std;
int main()
{
	// Calculator
	int a,b;
	cout<<"Enter the value of a and b:";
	cin>>a>>b;
	cout<<"The Sum of "<<a<<" and "<<b<<" is:"<<a+b<<endl;
	cout<<"The Subtraction of "<<a<<" and "<<b<<" is:"<<a-b<<endl;
	cout<<"The Multiplication of "<<a<<" and "<<b<<" is:"<<a/b<<endl;
	//Type-casting the value of a to float to get correct result
	cout<<"The Division of "<<a<<" and "<<b<<" is:"<<float(a)/b<<endl;
	cout<<"The Remainder/modulo of "<<a<<" and "<<b<<" is:"<<a%b<<endl;
	return 0;
}
