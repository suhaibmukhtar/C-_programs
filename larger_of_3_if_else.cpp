#include<iostream>
using namespace std;
int main()
{
	// Calculator
	int a,b,c;
	cout<<"Enter the value of a,b and c:";
	cin>>a>>b>>c;
	// Relational operators and condtional statements
	if(a>b){
		if(a>c){
			cout<<a<<" is larger"<<endl;
		}
		else{
			//we can include c-programming also works 
			printf("%d is larger\n",c);
		}	
	}
	else{
		if(b>c){
			cout<<b<<" is larger"<<endl;
		}
		else{
			//we can include c-programming also works 
			printf("%d is larger\n",c);
		}
	}
	return 0;
}
