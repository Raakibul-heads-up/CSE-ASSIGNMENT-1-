#include<stdio.h>
typedef struct
{
    char name[30];
    int age;
    int income;
    char ch;

} moviestar;

int highestincome(moviestar star[],int n){
    int  high;
    int i;

    high = star[0].income;

    for(i = 1; i < n; i++)
    {

        if (high < star[i].income)

            high = star[i].income;

    }

    return high;


}
int main()
{

    int n,i,high;
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


    high = highestincome(star,n);

    printf("Highest Annual income: %d M$\n",high);
    return 0;
}
