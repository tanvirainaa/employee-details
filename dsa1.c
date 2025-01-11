#include<stdio.h>
struct employee
{
    int id;
    char name;
    float salary;};
    int main(){
        struct employee employee[3];
        int highest_salary=0;
        for(int i=0;i<3;i++){
            printf("enter details of employee %d\n",i+1);
            printf("employee id:");
            scanf("%d",&employee[i]);
            printf("name:");
            scanf("%s",&employee[i].name);
            printf("salary:");
            scanf("%f",&employee[i].salary);
            printf("\n");
        }
        int i;
        for(i=1;i<10;i++)
        {
            if(employee[i].salary>employee[highest_salary].salary)
            highest_salary=1;
        }
        printf("details\n");
        printf("id; %d\n", employee[highest_salary].id);
        printf("name; %s\n",employee[highest_salary].name);
        printf("salary; %f\n",employee[highest_salary].salary);

        
        return 0;
    }1