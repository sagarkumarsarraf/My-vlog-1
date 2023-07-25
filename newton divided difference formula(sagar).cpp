#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int nxy,i,x[20];
	float Y,s,a,y[20],y1[20],y2[20],y3[20],y4[20];
	int count=0,count2=0,count3=0;
	cout<<"Enter the size of element of x and y:";
	cin>>nxy;
	cout<<"!!!!!Enter the element of X!!!!!\n";
	for(i=0;i<nxy;i++)
	{
		cin>>x[i];
	}
	cout<<"!!!!!Enter the element of Y!!!!!\n";
	for(i=0;i<nxy;i++)
	{
		cin>>y[i];
	//	cout<<"\n";
	}
	cout<<"___DY1.\n";
	for(i=0;i<nxy-1;i++)
	{
		y1[i]=(y[i+1]-y[i])/(x[i+1]-x[i]);
		cout<<y1[i]<<"\n";
		count++;
	}
	cout<<"____Dy2.\n";
	
	for(i=0;i<count-1;i++)
	{
		y2[i]=(y1[i+1]-y1[i])/(x[i+2]-x[i]);
		cout<<y2[i]<<"\n";
		count2++;
	}
	cout<<"___Dy3.\n";
	for(i=0;i<count2-1;i++)
	{
		y3[i]=(y2[i+1]-y2[i])/(x[i+3]-x[i]);
		cout<<y3[i]<<"\n";
		count3++;
	}
	cout<<"____Dy4.\n";
	for(i=0;i<count3-1;i++)
	{
		y4[i]=(y3[i+1]-y3[i])/(x[i+4]-x[i]);
		cout<<y4[i]<<endl;
	}
	cout<<"Enter the value of x for y:";
	cin>>a;

Y=y[0]+(y1[0]*(a-x[0]))+(y2[0]*(a-x[0])*(a-x[1]))+(y3[0]*(a-x[0])*(a-x[1])*(a-x[2]))+(y4[0]*(a-x[0])*(a-x[1])*(a-x[2])*(a-x[3]));
cout<<"The value of Y("<<a<<")="<<Y<<endl;
    
	return 0;
}
