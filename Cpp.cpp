#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void find_primes(vector<int> &s, int n)
{
    for (int i = 51; i <= n; i += 2)
    {
        bool flag = 0;
        for (int j : s)
        {
            if (j*j>i)
                break;
            if (i % j == 0)
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
            s.emplace_back(i);
    }
}


void sieve(int N) {
    /* bool *isPrime = new bool [N+1] ;
    for (int i=0;i<=N;i++) isPrime[i]=0;
    */
    bool isPrime[N+1]={0};
    isPrime[0] = 1;
    isPrime[1] = 1;
    for(int i = 2; i * i <= N; ++i) {
         if(!isPrime[i]) {                    
             for(int j = i * i; j <= N ;j += i)
                 isPrime[j] = 1;
        }
    }
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    /*int n;
    cin >> n ;
    vector<int> primes={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    find_primes(primes,n); */
}


#### python 3.8.2 impelemenation ####

def find_primes(s, n):
    for i in range(51, n, 2):
        flag = 0
        for j in s:
            if j*j > i:
                break
            if i % j == 0:
                flag = 1
                break
        if not flag:
            s.append(i)


if __name__ == '__main__':
    n = 1000
    s = [2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47]
    find_primes(s, n)
    for i in s:
        print(i, end=' ')
