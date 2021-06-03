//This program is used to rotate the array by one index 
class Compute {
    
    public void rotate(long arr[], long n)
    {
        long ele = arr[(int)(n)-1];
        for(int i= (int)n-1;i>0;i--){
            arr[i] = arr[i-1];
        }
        arr[0] = ele;
    }
}
