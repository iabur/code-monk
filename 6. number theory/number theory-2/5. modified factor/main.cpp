#include<bits/stdc++.h>
using namespace std;
void factor(int n, int arr[])
{
    for(int i = 0; i <= n; i++)
    {
        arr[i] = false;
    }
    for(int i = 2; i * i <= n; i++)
    {
        if(arr[i] == false)
        {
            for(int j = i * i; j <= n; j += i)
            {
               if(arr[j] == false)
                arr[j] = i;
            }
        }
    }
    for(int i = 2; i <= n; i++)
    {
        if(arr[i] == false)
        {
            arr[i] = i;
        }
    }
}

void printfactor(int arr[], int n)
{
    while(n != 1)
    {
        cout << arr[n] << " ";
        n /= arr[n];
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n+1];
    factor(n, arr);
    printfactor(arr, n);

}
