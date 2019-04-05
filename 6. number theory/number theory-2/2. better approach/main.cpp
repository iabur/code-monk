#include<bits/stdc++.h>
using namespace std;
int checkprime(int n)
{
    int count = 0;
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            if(i * i == n)
            {
                count++;
            }
            else
            {
                count += 2;
            }
        }
    }
    return count;
}

int main()
{
    int n;
    cin >> n;
    int prime = checkprime(n);
    if(prime == 2)
        cout << "prime";
    else
        cout << "Not Prime";
    return 0;

}
