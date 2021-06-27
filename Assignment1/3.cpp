//3. Given a sorted array A of size N, delete all the duplicates elements from A.
//eg: N = 5
//Array = {2, 2, 2, 2, 2}
//Output: 2

#include<iostream>
 using namespace std;

int remove_duplicate_elements(int A[], int N)
{

if (N==0 || N==1)
return N;

int temp[N];

int j = 0;
int i;
for (i=0; i<N-1; i++)
if (A[i] != A[i+1])
temp[j++] = A[i];
temp[j++] = A[N-1];

for (i=0; i<j; i++)
A[i] = temp[i];

return j;
}


int main()
{
int N;
cin >> N;
int A[N];
int i;
for(i = 0; i < N; i++)
{
cin >> A[i];
}

N = remove_duplicate_elements(A, N);


for (i=0; i<N; i++)
cout << A[i] << " ";

return 0;
}