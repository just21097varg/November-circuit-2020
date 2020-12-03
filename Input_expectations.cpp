#include <bits/stdc++.h>

using namespace std;

int main() {
	int t,a;
	cin >> t;
	vector<int> v;
	for(int i=0;i<t;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	int n,i=0,p=t,s;
	while(t!=0)
	{
		t--;
		if(i>v.size())
		  break;
		n=v[i];
        p--;
		if(n<=p)
		{
           i=i+n+1;
		   p=p-n;
		}
		else
		{
			s=n-p;
			break;
		}

	}
	cout<<(t+s)<<endl;
}



// Write your code here
