#include <bits/stdc++.h>

using namespace std;

int PARTITION(int arr[], int p, int r)
{
    int temp;
    int x=arr[r];
    int i=p-1;
    for(int j=p;j<r;j++)
    {
        if(arr[j]<=x)
        {
            i=i+1;
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[i+1];
    arr[i+1]=arr[r];
    arr[r]=temp;
    return (i+1);
}

void quicksort(int arr[], int p, int r)
{
    if(p<r)
    {
       int q=PARTITION(arr, p, r);
       quicksort(arr,p,q-1);
       quicksort(arr,q+1,r);
    }
}

int main()
{
    int i,arr[100],n;
    cout << "Enter size of array: ";
    cin >> n;
    int p=0;
    int r=n-1;
    cout << "Enter the elements of array: " << endl;
    for(i=0;i<n;i++)
        cin >> arr[i];
    quicksort(arr,p,r);
    for(int j=0;j<n;j++)
        cout << arr[j];
    return 0;
}
