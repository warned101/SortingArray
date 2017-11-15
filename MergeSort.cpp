#include <iostream>

using namespace std;

void mergefun(int A[], int p, int q, int r)
{
    int m=q-p+1;
    int n=r-q;
    int arr1[m+1];
    int arr2[n+1];

    for(int i=0; i<m; i++)
        arr1[i]=A[p+i];

    for(int j=0; j<n; j++)
        arr2[j]=A[q+j+1];

    arr1[m]=99999;
    arr2[n]=99999;
    int i=0, j=0;

    for(int k=p; k<=r; k++)
    {
        if(arr1[i]<=arr2[j])
        {
            A[k]=arr1[i];
            i++;
        }
        else
        {
            A[k]=arr2[j];
            j++;
        }
    }
}

void mergesort(int A[], int p, int r)
{
    if(p<r)
    {
       int q=p+(r-p)/2;
       mergesort(A, p, q);
       mergesort(A, q+1, r);
       mergefun(A, p, q, r);
    }
}

void printArray(int A[], int r)
{
    for(int i=0; i<(r+1); i++)
        cout << A[i] << " ";
}

int main()
{
    int n;
    cin >> n;
    int A[n];
    for(int i=0; i<n; i++)
        cin >> A[i];
    int p=0;
    int r=n-1;
    mergesort(A, p, r);
    printArray(A, r);
    return 0;
}
