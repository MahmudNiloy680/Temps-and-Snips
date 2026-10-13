vector<long long> primes;
void sieve(ll n)
{
    vector<bool> isPrime(n+5, true);
    isPrime[0] = isPrime[1] = false;
    for (ll i = 2; i <= n; i++)
    {
        if (isPrime[i])
        {
            primes.push_back(i);
            if (1LL * i * i <= n)
            {
                for (long long j = 1LL * i * i; j <= n; j += i)
                    isPrime[j] = false;
            }
        }
    }
    return;
}