#include<iostream>
using namespace std;
/*
ABCDE
ABCE
ABC
AB
A
*/
void pattern(int n){
	//rows
	int s=n-1;
	for (int i=n;i>0;i--){
		//columns
		for (int j=0;j<i;j++){
			char b;
			b='A'+j;
			cout<<b;
		}
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
