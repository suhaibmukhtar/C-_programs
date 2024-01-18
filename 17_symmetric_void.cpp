#include<iostream>
using namespace std;
/*
Problem statement
Sam is curious about symmetric patterns, so he decided to create one.

For every value of ‘N’, return the symmetry as shown in the example.

Example:
Input: ‘N’ = 3

Output: 
* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * * 
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1  <= N <= 25
Time Limit: 1 sec
Sample Input 1:
3
Sample Output 1:
* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * * 
Sample Input 2 :
1
Sample Output 2 :
* * 
* * 
*/
void pattern(int n){
	//rows
	for(int i=0;i<=n;i++){
		if(i<n){
			for(int j=n-i;j>0;j--){
			cout<<"* ";
		}
		for(int k=2*i;k>0;k--)
		{
			cout<<" "<<" ";
		}
		for(int l=n-i;l>0;l--){
			cout<<"* ";
		}
		cout<<endl;	
		}
		if(i>=n){
			int row=n-1;
			for(int p=0;p<n;p++){
				for(int q=0;q<=p;q++){
					cout<<"* ";
				}
				for(int r=2*(row-p);r>0;r--){
					cout<<" "<<" ";
				}
				for (int s=0;s<=p;s++){
					cout<<"* ";
				}
				cout<<endl;
			}			
		}
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













