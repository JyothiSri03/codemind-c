#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,arr[n],es=0,os=0,ad=0;
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
        else
        {
            os=os+arr[i];
        }
    }
    ad=abs(es-os);
    printf("%d",ad);
}