//to check whether the number is prime or not
#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number:";
	cin>>n;
	int i=2;
	int count=0;
	//while i<n means for prime there will be no number which can divide the number bcz already excluded
	while(i<n){
		if(n%i==0){
			count+=1;
		}	
		i+=1;	
	}
	if(n==1){
		cout<<n<<" is not prime";
	}
	else if(count>0){
		cout<<n<<" is not prime";
	}
	else{
		cout<<n<<" is prime";
	}
}
