#include<stdio.h>
#include<math.h>
int main()
{
    int n,arr[n],i,eip=0,oip=0,ad=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0)
        {
            eip=eip+arr[i];
        }
        else
        {
            oip=oip+arr[i];
        }
    }
    ad=abs(eip-oip);
    printf("%d",ad);
}