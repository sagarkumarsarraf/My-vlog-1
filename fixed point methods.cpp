#include<iostream>
#include<math.h>
#define Ep 0.001
using namespace std;
 
 double fix(double x)
 {
  return pow(x,3)+pow(x,2)-1;//equation
 }
  
  void point(double x)
  {
  	double a;
  	do{
	  
  	
	  a=fix(x);
  	cout<<"a="<<a<<"\n";
  	x=a;
  	
  	}while((x-a)<=Ep);
  	
  		cout<<"Root is "<<a<<"\n";
  		

  }
  int main()
  {
  	double x=0;
  	point(x);
  	return 0;
  }
 

