//reversing an array
#include<stdio.h>
void main()
{
    int n,rev[100]; 
    printf("enter no. of elements in an array");
    scanf("%d",&n);
    int arr[100];
    printf("enter elements in an array");
    for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
            for(int i=0;i<n;i++)
            {
                rev[i]=arr[n-i-1];
            }
            printf("the  reversed  array is: \n");
            for(int j=0;j<=n-1;j++)
            printf("%d\t",rev[j]);
}