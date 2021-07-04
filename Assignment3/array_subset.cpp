/*

1. Given two arrays: a1[0..n-1] of size n and a2[0..m-1] of size m. Task is to check whether a2[] is a subset of a1[] or not. 
Both the arrays can be sorted or unsorted. It may be assumed that elements in both array are distinct.
 

Example 1:

Input:
a1[] = {11, 1, 13, 21, 3, 7}
a2[] = {11, 3, 7, 1}
Output:
Yes
Explanation:
a2[] is a subset of a1[]

*/


#include<bits/stdc++.h>
using namespace std;
int main()
 {
    
        int m,n;
        cin>>m>>n;
        int a1[m];
        int a2[n];

        for(int i=0; i<m; i++){
            cin>>a1[i];
        }

        for(int i=0; i<n; i++){
            cin>>a2[i];
        }
        
        int c,t=0;
        for(int j=0; j<n; j++){
            c=0;
            for(int i=0; i<m; i++){
                if(a2[j] == a1[i]){
                    c++;
                }
            }
            if(c==0){
                t=1;
                break;
            }
        }

        if(t==1){
            cout<<"No\n";
        }else{
            cout<<"Yes\n";
        }
    
	return 0;
}