#include<stdio.h>
typedef struct
{
    char name[30];
    int age;
    int income;
    char ch;

} moviestar;

int youngest_star(moviestar star[],int n)
{
    int young;
    int i;

    young = star[0].age;

    for(i = 1; i < n; i++)
    {

        if (young > star[i].age)

            young = star[i].age;

    }

    return young;


}
int main()
{

    int n,i;
    int young;

    printf("How many movie star information do you want :");
    scanf("%d",&n);
    moviestar star[n];

    for(i=0; i<n; i++)
    {
        printf("Information of movie star number %d\n",i+1);
        printf("Enter Movie Star Name :");
        fflush(stdin);
        gets(star[i].name);

        printf("Enter Age :");
        scanf("%d",&star[i].age);
        printf("Enter Annual income Million in $ :");
        scanf("%d",&star[i].income);
        printf("Enter Gender (M or F) :");
        fflush(stdin);
        scanf("%c",&star[i].ch);
        printf("\n\n");
    }

    for(i=0; i<n; i++)
    {
        printf("-------------------------\n");
        printf("Information of movie star number %d\n",i+1);
        printf("Name : %s\n",star[i].name);
        printf("Age : %d\n",star[i].age);
        printf("Annual income Million in $ : %d M$\n",star[i].income);
        printf("Gender: %c\n",star[i].ch);
        printf("\n");

    }


    young = youngest_star(star,n);

    printf("youngest star age : %d \n",young);
    return 0;
}
