#include <iostream>

using namespace std;

void bubblesort(int arr[],int n)
{
    int i,j,temp;
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
        }

    }
    for(i=0;i<n;i++)
            cout << arr[i];
}

int main()
{
    int i,arr[100],n;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter the elements of array: " << endl;
    for(i=0;i<n;i++)
        cin >> arr[i];
    bubblesort(arr,n);
    return 0;


}
