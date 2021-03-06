#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N){
        unordered_set<int> us;
        int count = 0;
        for(int i= 0; i<N; i++){
            us.insert(arr[i]);
        }
        for(int i=0; i<N; i++){
            if(us.find(arr[i]-1) == us.end()){
                int j = arr[i];
                while(us.find(j) != us.end()){
                    j++;
                }
                count = max(count, j - arr[i]);
            }
        }
        return count;
    }
};

int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
