#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j = i;
        while(j > 0 && temp < arr[j-1])
        {
            arr[j] = arr[j-1];
            j = j-1;
        }
        arr[j] = temp;
    }
}

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {3,4,1,2,6,9, 0};
    int n = sizeof(arr)/sizeof(arr[0]);
    insertionSort(arr, n);
    printArray(arr, n);
}
