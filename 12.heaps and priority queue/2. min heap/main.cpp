#include<bits/stdc++.h>
using namespace std;

void min_heapify(int *a, int i, int n)
{
    int left = i * 2;
    int right = i * 2 + 1;
    int smallest;
    if(left <= n && a[left] < a[i])
    {
        smallest = left;
    }
    else
    {
        smallest = i;
    }
    if(right <= n && a[smallest] > a[right])
    {
        smallest = right;
    }
    if(smallest != i)
    {
        swap(a[i], a[smallest]);
        min_heapify(a, smallest, n);
    }
}
void build_minheap(int *a,int n)
{

    for(int i = n/2; i >= 1; i--)
    {
        min_heapify(a,i,n);
    }
}
int main()
{
    int n, i, x;
    cout<<"enter no of elements of array\n";
    cin>>n;
    int a[20];
    for (i = 1; i <= n; i++)
    {
        cout<<"enter element"<<(i)<<endl;
        cin>>a[i];
    }
    build_minheap(a,n);
    cout<<"Min Heap\n";
    for (i = 1; i <= n; i++)
    {
        cout<<a[i]<<endl;
    }

}
