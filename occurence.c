//Given a sorted array arr[] and a number x, write a function that counts the occurrences of x in arr[].
#include<stdio.h>
void main()
{
    int n,a,temp=0; 
    printf("enter no. of elements in an array");
    scanf("%d",&n);
    int arr[100];
    printf("enter elements in an array");
    for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
            printf("element to search = ");
            scanf(" %d", &a);
            for(int j=0;j<n;j++)
            {
                if(arr[j]==a)
                {
                temp++;
                }
            }
            printf("\n %d is found %d times in the array\n",a,temp);
}