#include<bits/stdc++.h>
using namespace std;
void Printstars(int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			cout<<"*";
		}
		cout<<"\n";
	}
}
int main()
{
	int n;
	cin>>n;
	Printstars(n);
}
