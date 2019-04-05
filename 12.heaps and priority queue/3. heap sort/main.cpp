#include<bits/stdc++.h>
using namespace std;

void max_heapify(int *a, int i, int n)
{
    int left = i * 2;
    int right = i * 2 + 1;
    int largest;
    if(left <= n && a[left] > a[i])
    {
        largest = left;
    }
    else
    {
        largest = i;
    }
    if(right <= n && a[largest] < a[right])
    {
        largest = right;
    }
    if(largest != i)
    {
        swap(a[i], a[largest]);
        max_heapify(a, largest, n);
    }
}
void build_maxheap(int *a,int n)
{

    for(int i = n/2; i >= 1; i--)
    {
        max_heapify(a,i,n);
    }
}
void heap_sort(int *a, int n)
    {
        int heap_size = n;
        build_maxheap(a, n);
        for(int i = n; i>=2 ; i--)
        {
            swap(a[ 1 ], a[ i ]);
            heap_size = heap_size-1;
            max_heapify(a, 1, heap_size);
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
       // cout<<"enter element"<<(i)<<endl;
        cin>>a[i];
    }
    heap_sort(a, n);
    cout<<"Heap sorted array\n";
    for (i = 1; i <= n; i++)
    {
        cout<<a[i]<<endl;
    }

}
