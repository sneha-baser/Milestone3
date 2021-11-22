//create an array of size n
//Store cumulative sum of elements in this array. 
//Let the array be csum[]. 
//csum[i] stores sum of elements from arr[0] to arr[i]. 



//time complexity - O(n);
//space complexity -0(n);




#include<bits/stdc++.h>
using namespace std;
 

int findMaxAverage(int arr[], int n, int k)
{
    
    if (k > n)
        return -1;
 
    
    int *csum = new int[n];
    csum[0] = arr[0];
    for (int i=1; i<n; i++)
       csum[i] = csum[i-1] + arr[i];
 
    
    int max_sum = csum[k-1], max_end = k-1;
 
    
    for (int i=k; i<n; i++)
    {
        int curr_sum = csum[i] - csum[i-k];
        if (curr_sum > max_sum)
        {
            max_sum = curr_sum;
            max_end = i;
        }
    }
 
    delete [] csum; 
 
    
    return max_end - k + 1;
}
 

int main()
{
    int arr[] = {1, 12, -5, -6, 50, 3};
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << k<<endl;
         << findMaxAverage(arr, n, k);
    return 0;
}