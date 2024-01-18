#include<iostream>
using namespace std;
void half_diamond(int n){
	//rows
	for(int i=0;i<n;i++)
	 {
	 	//cols
	 	for(int j=0;j<=i;j++)
	 	{
		 cout<<"*";
		 }
		 cout<<endl;
	 }
	 //rows
	 for (int i=0;i<n-1;i++)
	 	{
	 		//cols
	 		for(int j=n-(i+1);j>0;j--)
	 		{
	 			cout<<"*";
			 }
			 cout<<endl;
		 }
}
int main()
{
	int n;
	cout<<"Enter the number of lines:";
	cin>>n;
	half_diamond(n);
	return 0;
}
