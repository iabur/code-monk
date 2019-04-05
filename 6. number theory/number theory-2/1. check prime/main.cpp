#include<bits/stdc++.h>
using namespace std;
int checkprime(int n)
{
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        if(n % i == 0)
        {
            count++;
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
    {
        cout << "This number is prime";
    }
    else
        cout << "This number is not prime";
    return 0;

}
