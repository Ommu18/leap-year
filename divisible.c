#include<stdio.h>
void main()
{
    int a[10],i,n,count=0;
    printf("enter size of array\n");
    scanf("%d",&n);
    printf("enter elements in array\n");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%3==0)
        count++;
    }
    printf("numbers of digits divisble by 3 =%d",count);
}
