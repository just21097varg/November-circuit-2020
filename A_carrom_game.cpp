#include <bits/stdc++.h>
using namespace std;
int main() 
{
	int n,a,r,b,c,d;
	cin >> n;
	priority_queue<int> p1,p2; 
    for(int i=0;i<n;i++)
    {
		cin>>a;
		p1.push(a);
	}
	for(int i=0;i<n;i++)
    {
		cin>>a;
		p2.push(a);
	}
	cin>>r;
    cin>>a>>b>>c>>d;
	int i=0;
	string win="";
	while(1)
	{
        if(i==0)
		{
		   if(p1.size()==0)
		   {
			   if(a>=r)
			   {
				   win="A-C";
				   break;
			   }
			   else
			    { a=a+1;i=(i+1)%4;}
		   }	
           else if(a>=p1.top())
		   {
			   a=a+p1.top();
			   p1.pop();
			   i=(i+1)%4;
		   }
		   else 
		   {
              a=a+1;
			  i=(i+1)%4;
		   }
		   
		}
		else if(i==1)
		{
		   if(p2.size()==0)
		   {
			   if(b>=r)
			   {
				   win="B-D";
				   break;
			   }
			   else
			   {  b=b+1;
			   i=(i+1)%4;}
		   }	
           else if(b>=p2.top())
		   {
			   b=b+p2.top();
			   p2.pop();
			   i=(i+1)%4;
		   }
		   else 
		   {  
			   b=b+1;
			   i=(i+1)%4;
		   }
		}
		else if(i==2)
		{
		   if(p1.size()==0)
		   {
			   if(c>=r)
			   {
				   win="A-C";
				   break;
			   }
			   else
			   {
				     c=c+1;
					 i=(i+1)%4;
			   }
		   }	
           else if(c>=p1.top())
		   {
			   c=c+p1.top();
			   p1.pop();
			   i=(i+1)%4;
		   }
		   else
		   {   
			   c=c+1;
			   i=(i+1)%4;
		   }


		}
		else
		{
		   if(p2.size()==0)
		   {
			   if(d>=r)
			   {
				   win="B-D";
				   break;
			   }
			   else
			   {  
				   d=d+1;
				   i=(i+1)%4;
			   }
		   }	
           else if(d>=p2.top())
		   {
			   d=d+p2.top();
			   p2.pop();
			   i=(i+1)%4;
		   }
		   else
		    { 
				d=d+1;
				i=(i+1)%4;
			}

		}
	}
	cout<<win<<endl;
}


// Write your code here
