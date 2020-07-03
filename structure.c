#include<stdio.h>
main()
{
	struct employee
	{
		int employee_id,experience,salary;char name[20];
	}s[5];
	int i;
	for(i=1;i<=5;i++)
	{
		printf("\n Enter employee %d data of name,employee_id,experience,salary",i);
		scanf("%s%d%d%d",&s[i].name,&s[i].employee_id,&s[i].experience,&s[i].salary);
	}
	printf("Output");
	printf("\nEMP_NAME\tEMP_ID\t\tEMP_EXP\t\tEMP_SAL\n");
	for(i=1;i<=5;i++)
	{
		printf("%s\t\t%d\t\t%d\t\t%d\n",s[i].name,s[i].employee_id,s[i].experience,s[i].salary);
	}
}
