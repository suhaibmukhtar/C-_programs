#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number upto which you want sum of natural numbers:";
	cin>>n;
	int i=1;
	int sum=0;
	while(i<=n){
		sum+=i;
		i+=1;
	}
	cout<<"The sum of "<<n<<" natural numbers is::"<<sum<<endl;
	return 0;
}
