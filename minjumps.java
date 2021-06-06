class Solution{
    static int minJumps(int[] arr){
        
        int j=0, p=0, c=0;
        int n = arr.length;
        for(int i=0; i<n-1;i++){
            c = Math.max(c, i+arr[i]);
            if(i==p){
                j++;
                p=c;
            }
            if(p>=n-1)
                break;
        }
        if(p<n-1)
            return -1;
        return j;
    }
}
