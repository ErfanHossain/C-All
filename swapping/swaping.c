#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two Number : ");
    scanf("%d%d",&a,&b);
    temp=a;
    a=b;
    b=temp;
    printf("%d\n%d\n\n\n",a,b);

    //OR
    int c,d;
    printf("Enter two Number : ");
    scanf("%d%d",&c,&d);
    c=c-d;
    d=c+d;
    c=d-c;
    printf("%d\n%d",c,d);
    return 0;
}
