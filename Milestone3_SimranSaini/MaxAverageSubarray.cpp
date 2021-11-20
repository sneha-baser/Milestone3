                                         //NOTE
                                         //TWO EXAMPLES ARE THERE IN THIS EXAMPLE1 AND EXAMPLE2:
                                         //EXAMPLE1 IS : array=[1,12,-5,-6,50,3], k = 4
                                         //EXAMPLE2 IS : array= [5], k = 1
                             


//EXAMPLE1
//C++ program to find Maximum Average Subarray
//EXAMPLE1  array=[1,12,-5,-6,50,3], k = 4

#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
   bool ok(double x, vector <int>& nums, int k){
      int n = nums.size();
      double arr[n];
      for (int i = 0; i < n; i++) {
         arr[i] = nums[i] - x;
      }
      double sum = 0;
      double last = 0;
      for (int i = 0; i < k; i++) {
         sum += arr[i];
      }
      if (sum >= 0)
      return true;
      for (int i = 0, j = k; j < n; i++, j++) {
         last += arr[i];
         sum += arr[j];
         if (last < 0) {
            sum -= last;
            last = 0;
         }
         if (sum >= 0)
         return true;
      }
      return false;
   }
   double findMaxAverage(vector<int>& nums, int k) {
      double ret = 0;
      double low = INT_MIN;
      double high = INT_MAX;
      while (high - low > 1e-5) {
         double mid = low + (high - low) / 2;
         if (ok(mid, nums, k)) {
            low = mid;
            ret = mid;
         } else {
            high = mid;
         }
      }
      return ret;
   }
};
int main()
{
   Solution ob;
   vector<int> v = {1,12,-5,-6,50,3};
   cout << (ob.findMaxAverage(v, 4));
}
/*OUTPUT
12.75
*/








//EXAMPLE2
//C++ program to find Maximum Average Subarray
//EXAMPLE2 array= [5], k = 1

#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
   bool ok(double x, vector <int>& nums, int k){
      int n = nums.size();
      double arr[n];
      for (int i = 0; i < n; i++) {
         arr[i] = nums[i] - x;
      }
      double sum = 0;
      double last = 0;
      for (int i = 0; i < k; i++) {
         sum += arr[i];
      }
      if (sum >= 0)
      return true;
      for (int i = 0, j = k; j < n; i++, j++) {
         last += arr[i];
         sum += arr[j];
         if (last < 0) {
            sum -= last;
            last = 0;
         }
         if (sum >= 0)
         return true;
      }
      return false;
   }
   double findMaxAverage(vector<int>& nums, int k) {
      double ret = 0;
      double low = INT_MIN;
      double high = INT_MAX;
      while (high - low > 1e-5) {
         double mid = low + (high - low) / 2;
         if (ok(mid, nums, k)) {
            low = mid;
            ret = mid;
         } else {
            high = mid;
         }
      }
      return ret;
   }
};
int main()
{
   Solution ob;
   vector<int> v = {5};
   cout << (ob.findMaxAverage(v, 1));
}
/*OUTPUT
5
*/
