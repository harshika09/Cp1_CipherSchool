#include<bits/stdc++.h>
using namespace std;
int Armstrong(int n)
{ 
    int temp=n;
	int b,sum=0;
	while(temp!=0)
	{
	
	b=temp%10;
	sum+=b*b*b;
	temp/=10;
    }
if(sum==n)
cout<<"Yes";
else 
cout<<"NO";
	
}
int main()
{
	int n;
	cin>>n;
	Armstrong(n);
}
