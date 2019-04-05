#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int left, right;
    cin >> left >> right;
    bool arr[right - left + 1];
    for(int i = 0; i <= right; i++)
    {
        arr[i] = true;
    }
    for(int i = 2; i <= right; i++)
    {
        for(int j = max(i * i, (left+(i-1))/i*i); j <= right; j += i)
        {
            arr[j-left] = false;
        }
    }
    for(int i = max(2, left); i <= right; i++)
    {
        if(arr[i-left])
            cout << i << " ";
    }
}
