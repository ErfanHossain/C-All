#include<stdio.h>
int main()
{
    int A,B;
    printf("Enter two Integer Number : ");
    scanf("%d%d",&A,&B);

    //summation
    int sum;
    sum=A+B;//(+) its used for sum of two Number
    //We can use these rules for all data types as well
    printf("summation is : %d\n",sum);//\n is a keyword its mean endline

    //subtraction
    int sub;
    sub=A-B;//(-) its used for subtract of two Number
    //We can use these rules for all data types as well
    printf("subtraction is : %d\n",sub);

    //multiplication
    int mult;
    mult=A*B;//(*) its used for Multiply two Number
    //We can use these rules for all data types as well
    printf("multiplication is : %d\n",mult);

    //division
    int div;
    div=A/B;//(/) its used for divide two muber
    //We can use these rules for all data types as well
    printf("division is : %d\n",div);

    //remainder
    int rem;
    rem=A%B;// we can use these rules for only int types data
    printf("remainder is %d",rem);
    return 0;
}
