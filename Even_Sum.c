#include<stdio.h>
int main()
{
    int n,i,arr[n],es=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            es=es+arr[i];
        }
    }
    printf("%d",es);
}