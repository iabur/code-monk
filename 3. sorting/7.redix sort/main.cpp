#include<bits/stdc++.h>
using namespace std;

int getMax(int arr[], int n)
{
    int m = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i] > m)
        {
            m = arr[i];
        }
    }
    return m;
}

void countSort(int arr[], int n, int exp)
{
    int count[10] = {0};
    int output[n];
    for(int i = 0; i < n; i++)
    {
        int temp;
        temp = arr[i];
        temp /= exp;
        temp %= 10;
       // cout << temp << " ";
        count[temp]++;
    }
    for(int i = 1; i < 10; i++)
    {
        count[i] += count[i-1];
    }
    for(int i = n-1; i >= 0; i--)
    {
        int temp = (arr[i]/exp)%10;
        int co = count[temp];
        output [co - 1] = arr[i];
        count[temp]--;

    }
    for(int i = 0; i < n; i++)
    {
        arr[i] = output[i];
    }
}

void redixSort(int arr[], int n)
{
    int m = getMax(arr, n);
    for (int exp = 1; m/exp > 0; exp *= 10)
    {
        countSort(arr, n, exp);

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
    int arr[] = {3, 40, 6, 100, 23, 123};
    int n = sizeof(arr)/sizeof(arr[0]);
   // cout << n << endl;
    redixSort(arr, n);
    printArray(arr, n);
    return 0;

}
