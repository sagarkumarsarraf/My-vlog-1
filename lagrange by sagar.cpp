#include<iostream>
using namespace std;



int main()
{
	int n,x[20],y[20],i,j,m=0;
	double a,p=1,val=0,q=0;
cout<<"Enter the no. of  element :";
cin>>n;	
cout<<"Enter the element of x:";
for(i=0;i<n;i++)
{
	cin>>x[i];
	}	
cout<<"Enter the element of Y:";
for(i=0;i<n;i++)
{
	cin>>y[i];
	
}
cout<<"Enter the value of x which you want to find :";
cin>>a;
for(i=0;i<n;i++)
{
	for(j=0;j<n;j++)
	{
		if(i==j ){
		j++;
        }
        /*(j==n)
        {
        	j=n-2;
		}*/
		if(i!=n)
		{
		//if(j!=n-1){
		
		p=p*((a-x[j])/(x[i]-x[j]));
	    }
		 if(j==n-1)
			{
				p=p*y[i];
				cout<<"value of p="<<p<<"\n";
			}
	

//	q=q+p;
	
	}
val=val+p;
p=1;
}
cout<<"value of y :"<<val;
	
	
return 0;	
	}
