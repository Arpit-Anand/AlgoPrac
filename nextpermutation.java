class Solution {
    void reverse(int i,int j,int[] nums){
        while(i<j){
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            i++;
            j--;
        }
        return;
    }
    public void nextPermutation(int[] nums) {
        int n = nums.length;
        int i = n-1,f=1;
        while(i>0){
            if(nums[i-1]<nums[i]){
                f=0;
                break;
            }
            i--;
        }
        i--;
        // System.out.println(i);
        if(f==0){
            int j=n-1;
            for(j=n-1;j>i;j--){
                if(nums[j]>nums[i])
                    break;
            }
            int temp = nums[i];
            nums[i] = nums[j];
            nums[j] = temp;
            reverse(i+1,n-1,nums);
        }
        else{
            reverse(0,n-1,nums);    
        }
        
        return;
    }
}
