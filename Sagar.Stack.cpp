#include<stdio.h>
#include<iostream>
//#include<conio.h>
using namespace std;
int main()
{
	int ch;
	char stack[10];
	int n,n2,i=0;
	printf("!!!!! The size of the stack is 10 !!!!!!\n");
	printf("Enter the how many no.of element that you have to push :");
	scanf("%d",&n);
	printf("Put element into stack\n");
	for(i=0;i<n;i++)
	{
		
		cin>>stack[i];
		
	}
	printf("Enter what operation you want to perform \n1.push\n2.Display the value of stack:\n3.pop\nEnter : ");
	scanf(" %d",&ch);
	
	switch(ch)
	{
		
	case 1:
		printf("Enter how many element you want to push.");
		scanf("%d",&n2);
		if (n==10)
				{
					printf("stack is full\n") ;
				}
				else
			for(i=n;i<=n+n2;i++)
			{
				
				{
				//	printf("Enter the value for push into stack:-");
				//	scanf("%s",&stack[i]);
				cin>>stack[i];
				cout<<"\n";
				}
					
			}
			cout<<"!!!!!!!!!!!!ELEMENT IS SUCESSFULLY PUSHED!!!!!!!!!!!!!";
			
			cout<<"STACK contain the element:- ";
			for(i=0;i<n+n2;i++)
			{
				
				cout<<stack[i];
			}
			 break;
	case 2:		 
			for(i=0;i<n;i++)
			{
			//	printf("%s",stack[i]);
			cout<<stack[i];
			cout<<"   ";
			
			}
			break;
	case 3:
		if(n==0)
			{
				cout<<"Stack is Empty ";
				
			}
			else
		     {
		          
			for(i=n;i>n-1;i--);
			{
				
				
					cout<<"Element at the TOP of stack "<<stack[i]<<" is Remove\n";
					stack[i]=NULL;
					
				
			}
			cout<<"!!!!!!!!Element at the top of STACK are!!!!!!!!!\n";
			for(i=n-1;i>=0;i--)
			{
			
			cout<<stack[i];
			cout<<"   \n";
		    }
            }
   
   
}
	
	
	return 0;
}










