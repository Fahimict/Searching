#include <stdio.h>
#include<string.h>
int main()
{
    char str[10][10],name[10],i,n;
    printf("Enter the size of string array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%s",str[i]);
    printf("Enter the name to find: ");
    scanf("%s",name);
    for(i=0;i<n;i++)
    {
        if(strcmp(name,str[i])==0)
        {
           printf("%s is found at location %d",str[i],i+1);
           break;
        }

    }
    if(i==n)
        printf("%s is not found in the array!!",name);
    return 0;
}
