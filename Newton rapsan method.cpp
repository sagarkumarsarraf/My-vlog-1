#include<iostream>
#include<math.h>
using namespace std;

#define Ep  0.001
double f(double x){
    

 return x*x-3*x+2;
}

double fa(double x){
    

return 2*x-3;
}

void newton(double a)
{
    double c=a;
	if(f(a)*fa(a)>=0)
	{
		cout<<"!!!!!!!Assume initial value is not correct!!!!!!!";
		return ;
	}
	else
	{   
	     do{
		 a=c;
		 
		c=(a-(f(a)/fa(a)));
		cout<<"    "<<a<<"      "<<f(a)<<"     "<<fa(a)<<"   "<<c<<"\n";
		
		//cout<<c;
		
		}while(c-a>Ep);
		cout<<"The root is "<<c;
		
		
	}
}
int main()
{
	int c,a=0.0;
	newton(a);
	return 0;
	
}
