//This program is implementation of Kadane's algorithm

class Solution{

    // arr: input array
    // n: size of array
    //Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int max = Integer.MIN_VALUE, curr = 0; 
  
        for (int i = 0; i < n; i++) { 
            curr = curr + arr[i]; 
            if (max < curr) 
                max = curr; 
            if (curr < 0) 
                curr = 0; 
        } 
        return max;
    }
    
}
