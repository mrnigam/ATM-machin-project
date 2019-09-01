#include<stdio.h>
#include<conio.h>
int main(){
	l3:
	int amount[3]{1000,2000,3000};
	int code[3]{1234,2525,2134};
	int c,i,index=-1,input;
	l1:
	printf("enter the code:");
	scanf("%d",&c);
	for(i=0;i<3;i++)
	{
		if(c==code[i])
		{
			index=i;
		}
	}
	if(index==-1)
	{
		printf("\ninvalide code......\nenter the code again....\n");
		goto l1;
	}
	l2:
	printf("\n.............................\n");
	printf("\t\tWELCOME TO MY ATM..........\n");
	printf("\n..............................\n");
	printf("\n................................\n");
	printf("Press 1 For Deposite Amount......\n");
	printf("Press 2 For Case withdrawl.......\n");
	printf("Press 3 For Check Balance........\n");
	scanf("%d",&input);
	switch(input)
	{
		case 1:
			printf("enter the amount that you want to deposite :");
			int deposite;
			scanf("%d",&deposite);
			amount[index]=amount[index]+deposite;
			printf("%d credited in your account %d\n",deposite,&amount[index]);
			break;
			case 2:
				printf("enter the amount that you want to draw :");
				int draw;
				scanf("%d",&draw);
				if(draw>amount[index]){
					printf("You ARE EXCEEDING YOUR BALANCE AMOUNT....\n");
			}
			else{
			
			
				amount[index]=amount[index]-draw;
				printf("%d created in your account %d \n",draw,&amount[index]);
			}
			
				break;
				case 3:
					printf("Your Balance Amount is %d",amount[index]);
					break;
					
					default:
						
						break;
	}
	printf("\n Do u want to continue....(y/n)\n");
	char e;
	e=getchar();
	scanf("%c",&e);
	if(e=='y')
	{
		goto l2;
	}
	else
	{
		index=-1;
		goto l3;
		
	}
	
	
	
		
	
}
