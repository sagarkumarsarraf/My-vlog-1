#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()
{
	
	char queue[20];
	int i,n,n1,ch,in;
	printf("!!!!Enter the size of QUEUE!!!!!!\n");
	printf("ENTER: "); 
	
    scanf("%d",&n);
    printf("Enter how many element you want to inqueue into the queue:  ");
	scanf("%d",&n1);
	printf("!!!ENTER!!!\n");
	for(i=0;i<n1;i++)
	{
		scanf("%s",&queue[i]);
	}
	printf("!!!!!!ENTER what Operation you want to Preform!!!!!\n");
	printf("1. INQUEUE\n2.DISPLAY THE CONTAIN OF QUEUQ\n3.DEQUEUE\n");
	printf("Enter: ");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("Enter the no. of element you want to INQUEUE : ");
			scanf("%d",&in);
		
			for(i=n1;i<(n1+in);i++)
			{
					printf("Enter the element into queue:");
				scanf("%s",&queue[i]);
			}
			for(i=n1+in;i>=0;i--)
			{
				//printf("%s",queue[i]);
				cout<<queue[i]<<"  ";
			}
			printf("\n");
		case 2:
			
			printf("!!!!!QUEUE CONTAINS!!!!!!\n");
			for(i=n1+in;i>=0;i--)
			{
			//	printf("%s",queue[i]);
			cout<<queue[i];
				printf("  ");
				
				
			}
					
		case 3:
				queue[n1-1]=NULL;
				i=n1-2;
				printf(" ");
				 while(i>=0)
				{
				//	cout<<"i="<<i<<"\n";
					cout<<queue[i]<<"  ";
					i--;
				}	
					
	}
	return 0;
}
