//patterns
/*
 1111
 2222
 3333
 4444
*/
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number of lines:";
	cin>>n;
	int i=1;
	while(i<=n){
		int j=0;
		while(j<n){
			cout<<i;
			j=j+1;
		}
		i=i+1;
		cout<<endl;
	}
	return 0;
}
