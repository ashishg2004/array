//Write a program in C to insert the values in the array (sorted list)
#include<stdio.h>
void main()
{
    int n,a,p; 
    printf("enter no. of elements in an array");
    scanf("%d",&n);
    int arr[100];
    printf("enter elements in an array in sorted form");
    for(int i=0;i<n;i++)
            scanf("%d",&arr[i]);
            printf("ENTER ELEMENT TO BE ADD");
            scanf("%d",&a);
//finding postion of the element to be insert
    for(int j=0;j<n;j++)
    {
        if (a<arr[j])
               { 
                p=j;
                break;
               }
               else
               {
                 p=j+1;
               }
    }
 // shifting array to the right side
 for(int i=n+1;i>=p;i--)
 arr[i]=arr[i-1];
//inserting that element
arr[p]=a;
        printf( "The array is : \n" );
      for(int i=0;i<=n;i++)
            printf("%d ",arr[i]);
}
