//Write a program in C to separate odd and even integers into separate arrays.
#include<stdio.h>
void main()
{
    int n; 
    printf("enter no. of elements in an array");
    scanf("%d",&n);
    int arr[100];
    printf("enter elements in an array");
    for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
        // creating two new arrays, one for storing the even numbers and another for storing odd numbers
        int evens[100],odds[100];
        int a=0,b=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]%2==0)
            {
                evens[a]=arr[j];
                a++;
            }
            else
            {
                odds[b]=arr[j];
                b++;
            }
        }
        //printing even
        printf("array of even elements ");
            for(int i=0;i<a;i++)
                 printf("%d ",evens[i]);
                   printf("\n");
         //printing odd
          printf("array of odd elements ");
            for(int i=0;i<b;i++)
                 printf("%d ",odds[i]);
               
}