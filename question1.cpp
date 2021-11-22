//Created an array temp[] to store distinct elements.
//traversed array and one by one copy distinct elements of arr[] to temp. count the unique elememts.
//Copy elements from temp[] to arr[] and return
// time complexity -O(n);
//space complexity - O(n);

#include<iostream>
using namespace std;
 

int removeDuplicates(int arr[], int n)
{
    
    if (n==0 || n==1)
        return n;
 
    int temp[n];
 
    
    int j = 0;
    for (int i=0; i<n-1; i++)
 
        
        if (arr[i] != arr[i+1])
            temp[j++] = arr[i];
 
    
    temp[j++] = arr[n-1];
 
    
    for (int i=0; i<j; i++)
        arr[i] = temp[i];
 
    return j;
}
 

int main()
{
    int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 6,6};
    int n = sizeof(arr) / sizeof(arr[0]);
 
    
    n = removeDuplicatesfrom(arr, n);
 
    
    for (int i=0; i<n; i++)
       cout << arr[i] << " ";
 
    return 0;
}