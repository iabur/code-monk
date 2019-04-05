#include<bits/stdc++.h>
using namespace std;

void possibleSubsets(int S[], int n)
{
    for (int i = 0; i < (1 << n); ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(i & (1 << j))
                cout << S[j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int s[] = {2, 3, 4};
    possibleSubsets(s, sizeof(s)/sizeof(s[0]));
    return 0;
}
