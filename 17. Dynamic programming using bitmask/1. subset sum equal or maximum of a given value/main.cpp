#include<bits/stdc++.h>
using namespace std;

int possibleSubsets(int S[], int n, int check)
{
    int count = 0;
    for (int i = 0; i < (1 << n); ++i)
    {
        int sum = 0;
        for (int j = 0; j < n; ++j)
        {
            if(i & (1 << j))
               {
                   sum += S[j];
                   cout << S[j];
               }

        }
        if(sum >= check)
            count++;
        cout << endl;
        cout << sum << endl;
    }
    return count;
}
int main()
{
    int s[] = {2, 3, 4};
    int check = 7;
    cout <<   possibleSubsets(s, sizeof(s)/sizeof(s[0]), check);
    return 0;
}
