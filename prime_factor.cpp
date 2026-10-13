vector<int> primeFactor(int n)
{
    vector<int> ans;
    for (int i = 2; i <= n; i++)
    {
        while (n % i == 0 && n > 0)
        {
            ans.push_back(i);
            n = n / i;
        }
    }
    return ans;
}

ll power(ll base, ll exp, ll mod)
{
    ll res = 1;
    base %= mod;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            res = (res * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return res;
}

ll modInverse(ll a, ll m)
{
    return power(a, m - 2, m);
}

int GCD(int a, int b)
{
    if (a == 0)
        return b;
    return GCD(b % a, a);
}

int nCr(int n, int r)
{
    double res = 1;
    for (int i = 1; i <= r; i++)
        res = res * (n - r + i) / i;
    return (int)(res + 0.01);
}

int findCatalan(int n)
{
    if (n <= 1)
        return 1;

    int res = 0;
    for (int i = 0; i < n; i++)
        res += findCatalan(i) * findCatalan(n - i - 1);

    return res;
}


int inverse_factorial(int factorial)
{
    int current = 1;
    while (factorial > current)
    {
        if (factorial % current) return -1;
        
        factorial /= current;
        ++current;
    }
    if (current == factorial)
    {
        return current;
    }
    return -1;
}
