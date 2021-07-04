/*

2. Given an array arr of size n and an integer X. Find if there's a triplet in the array which sums up to the given integer X.


Example 1:

Input:
n = 6, X = 13
arr[] = [1 4 45 6 10 8]
Output:
1
Explanation:
The triplet {1, 4, 8} in 
the array sums up to 13.

*/


#include <bits/stdc++.h>
using namespace std;

bool fun(int arr[], int size, int X){
    int sum, start, end, i, j;
    sort(arr, arr + size);
    for(i = 0; i < size - 2; ++i){
        start = i + 1;
        end = size - 1;
        while(start < end){
            sum = arr[start] + arr[i] + arr[end];
            if(sum == X){
                return true;
            }
            else if(sum > X){
                end--;
            }
            else if(sum < X){
                start++;
            }
        }
    }
    return false;
}
int main(){
    
        int size, X, i;
        cin >> size >> X;
        int arr[size];
        for(i = 0; i < size; ++i)   cin >> arr[i];
        
        cout << fun(arr, size, X);
        cout << endl;
    
}