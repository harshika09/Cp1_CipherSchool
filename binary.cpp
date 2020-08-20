#include<bits/stdc++.h>
using namespace std;
int binaryToDecimal(int n)
{
	
	int last_digit,i=0;
	int sum=0;
			
		while(n!=0)
		{
		last_digit=n%10;
		n/=10;
		sum+=last_digit*pow(2,i);
		i++;
	}
	
	return sum;
}
int main()
{
	int n;
	cin>>n;
	cout<<binaryToDecimal(n)<<endl;
}
