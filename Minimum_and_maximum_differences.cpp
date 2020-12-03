#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,s1,s2=0;
	cin >> n;									
	vector<int> v,v1,v2;
	if(n==1)
	{
		cout<<"-1"<<endl;
		cout<<"-1"<<endl;
	}
	else
	{
	for(int i=1;i<=n;i++)
	{
		v.push_back(i);
	}
	if(n%2==1)
	s1=n+1;
	else
	s1=n; 
	int a=1,b=2;
	for(int i=0;i<n;i++)
	{
	    if(i%2==1)
	    {
	        v1.push_back(a);
	        a=a+2;
	    }
	    else
	    {
	        v1.push_back(b);
	        b=b+2;
	    }
	}
	if(n%2==1)
	{
	    b=n;
	    v1[n-3]=b;
	    v1[n-2]=b-2;
	    v1[n-1]=b-1;
	}
	for(int i=n;i>0;i--)
	  v2.push_back(i);
	  
	if(n%2==1)
	{
		int s=n/2;
		int t=v2[s];
		v2[s]=v2[s-1];
		v2[s-1]=t;
	}
    for(int i=0;i<n;i++)
	{
		s2=s2+abs(v[i]-v2[i]);
	}
	cout<<s1<<endl;
	
	for(int i=0;i<n;i++)
	  cout<<v1[i]<<" ";
	cout<<endl;
	
	cout<<s2<<endl;
	for(int i=0;i<n;i++)
	  cout<<v2[i]<<" ";
	cout<<endl;  
	}    
	  
}

// Write your code here
