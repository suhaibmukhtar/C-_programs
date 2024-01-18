//find sum of all even numbers
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number upto which you want sum of Even numbers:";
	cin>>n;
	int i=0;
	int sum=0;
	while(i<=n){
		sum+=i;
		i+=2;
	}
	cout<<"The sum of "<<n<<" natural numbers is::"<<sum<<endl;
	return 0;
}
