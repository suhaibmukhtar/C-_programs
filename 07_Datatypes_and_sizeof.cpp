#include<iostream>
using namespace std;
int main(){
	//Data types
	
	//int
	int a; //The compiler creates a contained or reserves 4 bytes of meamory for a and initially stores the garbage value in it
	a=5; //stores 5 in the container of 32 bits
	cout<<5<<endl;
	//float
	float b=3.7; //compiler reserves 32 bytes of memory of float variable and names memory location b by storing 3.7 in binary
	cout<<b<<endl;
	//char
	char c='a'; //stores the ASCII value of a i.e. 97 in binary format
	cout<<c<<endl;
	//double : compiler reserves 8 bytes of memory for double
	double d=4.56677;
	cout<<d<<endl;
	
	//bool: compiler reserves 1 bit of memory for the bool type takes value 1 or true or 0 or false
	bool e=0,f=true; //0=false 1=true
	cout<<e<<" and "<<f<<endl;
	//we can use sizeof to calculate size of variables or datatypes
	cout<<"Size of int is:: "<<sizeof(int)<<endl;
	cout<<"or Size of variable int is ::"<<sizeof(a)<<endl;
	
	cout<<"Size of float is:: "<<sizeof(float)<<endl;
	cout<<"or Size of variable float is ::"<<sizeof(b)<<endl;
	
	cout<<"Size of char is:: "<<sizeof(char)<<endl;
	cout<<"or Size of variable char is ::"<<sizeof(c)<<endl;
	
	cout<<"Size of double is:: "<<sizeof(double)<<endl;
	cout<<"or Size of variable int is ::"<<sizeof(d)<<endl;
	
	cout<<"Size of bool is:: "<<sizeof(bool)<<endl;
	cout<<"or Size of variable bool is ::"<<sizeof(e)<<endl;
	return 0;
}
