int main()
{
    int rev=0,temp,digit,n;
    printf("Enter a number\n");
    scanf("%d",&n);
    temp=n;
    while(n!=0)
    {
        digit=n%10;
        rev=rev*10+digit;
        n=n/10;
    }
    if(temp==rev)
    {
        printf("The number is palindrome\n");
    }
    else
    {
        printf("The number is not palindromw\n");
    }
    
}
