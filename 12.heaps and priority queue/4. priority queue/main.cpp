#include<bits/stdc++.h>
using namespace std;
int n = 0;

void max_heapify(int *a, int i)
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
        max_heapify(a, largest);
    }
}

void build_maxheap(int *a)
{

    for(int i = n/2; i >= 1; i--)
    {
        max_heapify(a,i);
    }
}

int maximum(int *a)
{
    return a[1];
}

int extract_maximum(int *a)
{
    if(n < 1)
    {
        cout << "Not possible to extract" << endl;
        return 0;
    }

    int m = a[1];
    swap(a[1], a[n]);
    n = n - 1;
    max_heapify(a, 1);
    return m;


}

void increase_value (int a[],int val)
{
    int i = n;
    if(val < a[ i ])
    {
        cout<<"New value is less than current value, can’t be inserted" <<endl;
        return;
    }
    a[ i ] = val;
    while( i > 1 && a[ i/2 ] < a[ i ])
    {
        swap(a[ i/2 ], a[ i ]);
        i = i/2;
    }
}
void insert_value (int a[ ], int val)
{
    n = n + 1;
    a[n] = -1;  //assuming all the numbers greater than 0 are to be inserted in queue.
    increase_value(a, val);
}


int main()
{
    int i, x;
    int a[20];
    for (i = 1; i <= 5; i++)
    {
        // cout<<"enter element"<<(i)<<endl;
        int bb;
        cin >>  bb;
        insert_value(a, bb);
    }
    //build_maxheap(a);
    while(n > 0)
    {

        cout << extract_maximum(a) << endl;;
    }

}
