#include<stdio.h>
int main()
{
    int n,num,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(int j=0;j<n;j++)
    {
        num= arr[j]*arr[j];
     sum=num+sum;
    }
    printf("%d",sum);
    return 0;
}
