#include<bits/stdc++.h>
using namespace std;

int ternarySearch(int arr[], int l, int r, int key)
{
    if(l <= r)
    {
    int m1 = l + (r - l) / 3;
    int m2 = m1 + (r - l) / 3;

        if(key == arr[m1]) return m1;
       else if(key == arr[m2]) return m2;
       else if(key <arr[m1]) return ternarySearch(arr, l, m1-1, key);
       else if(key > arr[m2]) return ternarySearch(arr, m2+1, r, key);
       else return ternarySearch(arr, m1+1, m2-1, key);
    }
    return -1;
}


int main()
{
    int arr[] = {2,4,5,7,8,20};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = ternarySearch(arr, 0, n-1, 7);
    cout << m;
}
