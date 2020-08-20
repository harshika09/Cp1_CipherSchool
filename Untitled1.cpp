#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int arr[n];
	set<int>s;
	for(int i=0;i<n;i++)
	{
	
	s.insert(arr[i]);
}
set<int>::iterator it;
for(it=s.begin();it!=s.end();it++)
{
	cout<<*it<<endl;
}
if(s.find(k)==s.end())
{
	cout<<"element not found"<<endl;
}
else{
	cout<<"element found"<<endl;
}
}
