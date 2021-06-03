//This program is to find how many pairs in a given array have a given sum k. Time complexity O(n)

class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        // code here
        unordered_map<int, int> m ;
        for(int i=0; i<n; i++)
            m[arr[i]]++;
            
        int count = 0;
        
        for(int i=0; i<n; i++){
            count += m[k-arr[i]];
            if(k - arr[i] ==  arr[i]){
                count --;
            }
        }
        return count/2;
    }
};
