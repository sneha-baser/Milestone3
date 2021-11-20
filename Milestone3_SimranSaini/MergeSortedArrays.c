//C program to merge two sorted arrays in non-decreasing order

#include <stdio.h>
void sort(int c[],int n3)        
{
    for(int i=0;i<n3;i++)         
    {
        int temp;
        for(int j=i+1; j<n3 ;j++)
        {
            if(c[i]>c[j])
            {
                temp=c[i];
                c[i]=c[j];
                c[j]=temp;
            }
        }
    }
}
int main()
{
    
    int n1,n2,n3;                   
    printf("\nEnter the size of first array= ");
    scanf("%d",&n1);
    printf("\nEnter the size of second array= ");
    scanf("%d",&n2);
    
    n3=n1+n2;
    printf("\nEnter the elements of first array:");
    int a[n1],b[n2],c[n3];                //Array Declaration
    for(int i=0;i<n1;i++)                 
    {
       scanf("%d",&a[i]);
    }
    sort(a,n1);                             //Function to sort the array
    int k=n1;
    printf("\nEnter the elements of second array: ");
    for(int i=0;i<n2;i++)               
    {
        scanf("%d",&b[i]);
    }
    sort(b,n2);                          //Function to sort the array
   
    for(int i=0;i<n1;i++)             //Merge two arrays
    {
        c[i]=a[i];
    }
    for(int j=0;j<n2;j++)
    {
        c[k]=b[j];
        k++;
    }
    printf("\nAfter sorting final array:\n");
    sort(c,n3);                               //Function to sort the array
    for(int i=0 ; i<n3 ; i++)             //Print sorted array
    {
        printf(" %d ",c[i]);
    }
    return 0;  
}
/*OUTPUT
Enter the size of first array= 3

Enter the size of second array= 3

Enter the elements of first array:11
22
4

Enter the elements of second array: 66
1
14

After sorting final array:
 1  4  11  14  22  66 
 */
