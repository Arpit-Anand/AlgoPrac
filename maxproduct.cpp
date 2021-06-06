class Solution{
public:

	// Function to find maximum product subarray
	long long maxProduct(int *arr, int n) {
	    
	    long long max_still=1;
	    long long max_curr = 1;
	    long long min_still=1;
	    for( int i=0; i < n; i++){
	        if(arr[i]<0){
	            swap(max_still,min_still);
	        }
	        max_still = max(1LL*arr[i],max_still*arr[i]);
	        min_still = min(1LL*arr[i], min_still*arr[i]);
	        max_curr = max(max_curr,max_still);
	    }
	    return max_curr;
	}
};
