//Count Inversion Time Complexity O(nlogn)
class Solution{
public:
    // arr[]: Input Array
    // N : Size of the Array arr[]
    // Function to count inversions in the array.
    long long merge(long long arr[], long long temp[], long long left, long long mid, long long right){
        long long i, j, k;
        long long count = 0;
        i =left;
        j= mid;
        k = left;
        
        while ((i <= mid - 1) && (j <= right)) {
            if (arr[i] <= arr[j]) {
                temp[k++] = arr[i++];
            }
            else {
                temp[k++] = arr[j++];
                count = count + (mid - i);
            }
        }
        while (i <= mid - 1)
            temp[k++] = arr[i++];
        while (j <= right)
            temp[k++] = arr[j++];
        for (i = left; i <= right; i++)
            arr[i] = temp[i];
        return count;
    }
    
    long long mergeSort(long long arr[], long long temp[], long long left, long long right){
        long long mid, count=0;
        mid =(left+right)/2;
        if(left<right){
            count += mergeSort(arr,temp,left, mid);
            count += mergeSort(arr,temp,mid+1,right);
            count += merge(arr,temp,left,mid+1,right);
        }
        return count;
    }
    
    long long int inversionCount(long long arr[], long long n)
    {
        // Your Code Here
        long long temp[n];
        return mergeSort(arr,temp,0,n-1);
    }

};
