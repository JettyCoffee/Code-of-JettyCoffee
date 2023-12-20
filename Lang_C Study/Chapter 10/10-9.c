#include <stdio.h>

int countPrime( int n );

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    int count = 0;
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        if(countPrime(a[i]) == 1)
        {
            count++;
        }
    }
    printf("%d", count);
}

int countPrime( int n )
{
    for(int i=2 ; i<n ;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    if(n == 1)
    {
        return 0;
    }
    return 1;
}