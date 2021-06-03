//This program finds the common in 3 arrays driver code not included.
#include<bits/stdc++.h>
using namespace std;

class Solution{
	public:    
		   vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
		    {
		        //code here.
		        unordered_map<int, int> m1;
			    unordered_map<int, int> m2;
			    unordered_map<int, int> m3;
			    vector<int> common;
			    for (int i = 0; i < n1; i++)
				    m1[A[i]]++;
			    for (int i = 0; i < n2; i++)
				    m2[B[i]]++;
			    for (int i = 0; i < n3; i++)
				    m3[C[i]]++;
		    	for (int i = 0; i < n1; i++) {
				    if (m1[A[i]] > 0 and m2[A[i]] > 0 and m3[A[i]] > 0)
							common.push_back(A[i]);
					m1[A[i]] = 0;
		    	}
				return common;
			}
};

