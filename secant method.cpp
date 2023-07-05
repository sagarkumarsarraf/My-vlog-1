#include<iostream>
#include<iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

 
#define Ep 0.0001



double f(double x)
 {

return  3*x+sin(x)-exp(x)  ; //[equation]
}
int main()
{
	double a=0, b=1;
	double c;
	if(f(a)*f(b)>=0)
	{
		cout<<"!!!!!!!!!!The initial value of X1 and X2 are wrong.!!!!!!!!!!!";
		
	  return 0;
	}
	else
	{
		
		//c=a;
		do
		{
			
		c=((a * f(b) )-(b * f(a) ))/(f(b)-f(a));
		cout<<"  "<<a<<"   "<<b<<"    "<<f(a)<<"   "<<f(b)<<"   "<<c<<"\n";
			a=b;
		    b=c;
	
	    }while((b-a)<Ep);
	    
	    
	   cout<<"The root of equation is";
	    	cout<<c; 	
	}
	
	    
	return 0;
}
