/*
 1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1
*/
#include<iostream>
using namespace std;
void one_zero_diamond(int n){
	//rows
	for(int i=1;i<=n;i++)
	{
		//cols
		for(int j=1;j<=i;j++)
		{
			if ((i+j)%2==0){
			 cout<<"1";	
			}
			else{
				cout<<"0";
			}
		}
		cout<<endl;
	}
}
int main()
{
	int n;
	cout<<"Enter the number of lines:";
	cin>>n;
	one_zero_diamond(n);
	return 0;
}
