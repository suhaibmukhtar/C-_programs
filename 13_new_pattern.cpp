#include<iostream>
using namespace std;
/*

1		  1 	
1 2     2 1
1 2 3 3 2 1
*/
void pattern(int n){
	//rows
	int s=n-1;
	for (int i=1;i<=n;i++){
		//columns
		for (int j=1;j<=i;j++){
			cout<<j;
		}
//		spaces
		for (int k=2*s;k>0;k--){
			cout<<" ";
		}
		for (int l=i;l>0;l--){
			cout<<l;
		}
		s-=1;
		cout<<endl;
	}
	
} 


int main()
{
	int n;
	cout<<"Enter the number of lines:";
	cin>>n;
	pattern(n);
	return 0;
}
