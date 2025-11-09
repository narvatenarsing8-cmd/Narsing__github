#include<stdio.h>
int main()
{

    float m1,m2,m3,average,total;
    char grade;
    printf("enter the marks of three subjects (out of 100)");
    scanf("%f %f %f",&m1, &m2, &m3);
    total=m1+m2+m3;
    average= total/3;

    printf("\n total marks = %2f", total);
    printf("\n average marks = %2f", average);
    if(average>=90)
        grade='A';
    else if(average>=80)
        grade='B';
    else if ("average>=70")
    grade='C';
    else if(average>=60)
        grade='D';
    else if(average>=50)
        grade='E';
else
    grade='F';
printf("\n grade=%c", grade);
if (average>=50)
    printf("\n result:pass\n");
else
    printf("\n result:fail\n");
return 0;

    }
