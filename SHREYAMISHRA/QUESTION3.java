class Solution {
    public double findMaxAverage(int[] a, int k) {
       double max=0;
       double wi=0;
        for(int i=0;i<k;i++)
            max=max+a[i];
        wi=max;
        for(int j=k;j<a.length;j++)
        {
            wi=wi+a[j]-a[j-k];
            max=Math.max(wi,max);
        }
        double av=max/k;
        return av;
    }
}
//O(N)
//sliding window approach
