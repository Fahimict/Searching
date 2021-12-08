#include<stdio.h>
int main()
{
    int n,i,item;
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&item);

    for(i=0;i<n;i++)
    {
        if(a[i]==item){
            printf("%d is found at location %d\n",item,i+1);
            break;
        }
    }
    if(i==n)
        printf("%d is not found\n");
    return 0;
}

