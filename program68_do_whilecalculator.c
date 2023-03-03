//program - 68
//do while calculator
#include<stdio.h>
int main()
{
	int choice;int num1,num2;
	
	do{
		printf("\n");
		printf("\n********Welcome to calculator********");
		printf("\n");
		
		printf("\n******************************");
		printf("\n*    1 -> Addition           *");
		printf("\n*    2 -> subtraction        *");
		printf("\n*    3 -> Multiplication     *");
		printf("\n*    4 -> Division           *");
		printf("\n*    0 -> Exit               *");
		printf("\n******************************");
		printf("\n");
		printf("\n Enter your choice : ");
	    scanf("%d",&choice);
	    printf("\n");
	    	while(choice!=0)
			{
	    		printf("\n Enter num1 : ");
				scanf("%d",&num1);
				printf("\n Enter num2 : ");
				scanf("%d",&num2);
	    		if(choice==1)
				{
	    			printf("\n Addition = %d ",num1+num2);
				}
				else if(choice==2)
				{
					printf("\n Subtraction = %d ",num1-num2);
				}
				else if(choice==3)
				{
				printf("\n Multiplication = %d ",num1*num2);
				}
				else if(choice==4)
				{
					printf("\n Division = %d ",num1/num2);
				}
			break;
			}
	}while(choice!=0);
return 0;
}
