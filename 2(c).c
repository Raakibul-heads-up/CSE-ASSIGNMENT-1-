#include<stdio.h>

typedef struct
{
    int id;
    char gender[10];
    int c_test;
    int m_test;
    int f_test;
    int total;


} student;


int student_failed(student s[],int n){

    int  count = 0;
    int i;



    for(i = 0; i < n; i++)
    {

        if(s[i].total<60)

            count++;

    }

    return count;



}
int main()
{

    int n,i;
    printf("How many movie star information do you want :");
    scanf("%d",&n);

    student s[n];

    for(i=0; i<n; i++)
    {
        printf("Information of student number %d\n",i+1);
        printf("Enter student Id :");
        scanf("%d",&s[i].id);

        printf("Enter gender :");
        fflush(stdin);
        gets(s[i].gender);

        printf("Enter class test result :");
        scanf("%d",&s[i].c_test);

        printf("Enter mid term result :");
        scanf("%d",&s[i].m_test);

        printf("Enter final term result :");
        scanf("%d",&s[i].f_test);
        s[i].total = s[i].c_test + s[i].m_test + s[i].f_test;
    }


    for(i=0; i<n; i++)
    {
        printf("-----------------------\n");
        printf("Information of student number %d\n",i+1);
        printf("Id = %d\n",s[i].id);
        printf("gender = %s\n",s[i].gender);
        printf("class test = %d\n",s[i].c_test);
        printf("mid test = %d\n",s[i].m_test);
        printf("final test = %d\n",s[i].f_test);
        printf("Total = %d\n",s[i].total);
    }

    int count = student_failed(s,n);

    printf("Failed student = %d\n",count);


    return 0;
}
