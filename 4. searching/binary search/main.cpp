#include<bits/stdc++.h>
using namespace std;

int bst(int arr[], int n, int key)
{
    int low = 0, high = n-1;
    while(low <= high)
    {
        int m = (low + high) / 2;
        if(key < arr[m])
        {
            high = m - 1;
        }
        else if(key > arr[m])
        {
            low = m + 1;
        }
        else
        {
            return m;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 3, 5, 7,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key = 10;
    int m = bst (arr, n, key);
    if(m >= 0)
    {
        cout << m;

    }
    else
        cout << "No";
}
