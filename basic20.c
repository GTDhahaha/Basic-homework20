#include <stdio.h> 
#include <stdlib.h> 
#define MAX 6
int main()
{
	struct data
	{
		char brand[10];
		char model[10];
		int yearofmanufacture;
		int price;
	}phone[MAX];
	
	int i=1;
	
	for(i=1;i<MAX;i++)
	{
		printf("no.%d phone\n",i);
		printf("brand:");
		scanf("%s",&phone[i].brand);
		printf("model:");
		scanf("%s",&phone[i].model);
		printf("year of manufacture:");
		scanf("%d",&phone[i].yearofmanufacture);
		printf("price:");
		scanf("%d",&phone[i].price);
		fflush(stdin);
		system("cls");
	}

	for(i=1;i<MAX;i++)
	{
		printf("no.%d phone\n",i);
		printf("brand:%s\n",phone[i].brand);
		printf("model:%s\n",phone[i].model);
		printf("year of manufacture:%d\n",phone[i].yearofmanufacture);
		printf("price:%d\n",phone[i].price);
		printf("\n");
	}	
	system("pause");
    return 0;
}
