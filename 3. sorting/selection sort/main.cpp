#include<bits/stdc++.h>
using namespace std;
void swap (int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
void selectionSort(int arr[], int n)
{
    for (int i = 0; i < n-1; i++)
    {
        int k = i;
        for (int j = i+1; j < n; j++)
        {
            if(arr[k] > arr[j])
            {
                k = j;
            }
        }
        swap(&arr[k], &arr[i]);

    }
}
void printArray(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}


int main()
{
    int arr[] = {3,20,4,2,6,40, 33};
    int n = sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr, n);
    printArray(arr, n);
    return 0;

}
