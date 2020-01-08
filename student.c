#include<stdio.h>

typedef struct {
    int id;
    char gender[10];
    int c_test;
    int m_test;
    int f_test;
    int total;


}student;
int main(){

    student s;
    printf("Enter student Id :");
    scanf("%d",&s.id);

    printf("Enter gender :");
    fflush(stdin);
    gets(s.gender);

    printf("Enter class test result :");
    scanf("%d",&s.c_test);

    printf("Enter mid term result :");
    scanf("%d",&s.m_test);

    printf("Enter final term result :");
    scanf("%d",&s.f_test);

    s.total = s.c_test + s.m_test + s.f_test;

    printf("-----------------------\n");
    printf("Id = %d\n",s.id);
    printf("gender = %s\n",s.gender);
    printf("class test = %d\n",s.c_test);
    printf("mid test = %d\n",s.m_test);
    printf("final test = %d\n",s.f_test);
    printf("Total = %d\n",s.total);


return 0;
}
