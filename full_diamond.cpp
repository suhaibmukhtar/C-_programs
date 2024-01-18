#include<iostream>
using namespace std;
void simple_diamond(int n){
	for(int i=0;i<n;i++)
	{
		for(int k=n-(i+1);k>0;k--)
		{
			cout<<" ";
		}
		for (int j=0;j<2*i+1;j++)
		{
			
			cout<<"*"<<"";
		}
		cout<<endl;
	}
}
void reverse_diamond(int n){
	int i,j,k;
	//number of rows
	for(i=0;i<n;i++)
	{
		//space is related to i
		for(k=0;k<i;k++)
		{
			cout<<" ";
		}
		//number of cols
		for(j=0;j<2*n-(2*i+1);j++)
		{
			cout<<"*";
		}
		//space is related to i
		for(k=0;k<i;k++)
		{
			cout<<" ";
		}
		cout<<endl;
	}
}

int main(){
	int n;
	cout<<"Enter the number of lines:";
	cin>>n;
	simple_diamond(n);
	reverse_diamond(n);
	return 0;
}
