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
		
		scanf("%s",&stack[i]);
		
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
			for(i=n;i<n+n2;i++)
			{
				
				
					printf("Enter the value for push into stack:-");
				//	scanf("%s",&stack[i]);
				scanf("%s",&stack[i]);
				//printf("\n");
				
					
			}
			printf("!!!!!!!!!!!!ELEMENT IS SUCESSFULLY PUSHED!!!!!!!!!!!!!\n ");
			
			printf("STACK contain the element\n ");
			for(i=n+n2-1;i>=0;i--)
			{
				
				printf("%c",stack[i]);
			}
			 break;
	case 2:		 
			for(i=0;i<n;i++)
			{
			//	printf("%s",stack[i]);
			printf("%c",stack[i]);
			printf("   ");
			
			}
			break;
	case 3:
		if(n==0)
			{
			printf("Stack is Empty ");
				
			}
			else
		     {
		          
			for(i=n;i>n-1;i--);
			{
				
				
					printf("Element at the TOP of stack %c is Remove\n",stack[i]);
					stack[i]=NULL;
					
				
			}
			printf("!!!!!!!!Element at the top of STACK are!!!!!!!!!\n");
			for(i=n-1;i>=0;i--)
			{
			
			printf("%c",stack[i]);
			printf("   \n");
		    }
            }
   
   
}
	
	
	return 0;
}










