#include<stdio.h>

struct Employee
{   char name[20];
    int employee_id;
    float salary;
} emp[100];
int main()
{   int n,i;
    printf("Enter no of Employee: ");
    scanf("%d",&n);
    printf("\n Enter Employee details\n ");
    for(i=0; i<n; i++)
    {
        printf("\n Enter Employee name:");
        scanf("%s",emp[i].name);
        printf("\n Enter Employee id:");
        scanf("%d",&emp[i].employee_id);
        printf("\n Enter the salary:");
        scanf("%f",&emp[i].salary);
    }
    for(i=0; i<n; i++)
    {   printf("\n Employee %d detail: ",emp[i].employee_id);
        printf("\n Name:%s ",emp[i].name);
        printf("\n Employee id:%d ",emp[i].employee_id);
        printf("\n salary: %f \n",emp[i].salary);
    }
    return 0;
}
