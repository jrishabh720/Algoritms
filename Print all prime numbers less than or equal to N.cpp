#include<bits/stdc++.h>
#define ll long long
#define pn(x) cout<<x<<endl;
#define ps(x) cout<<x<<" ";
#define n() cout<<endl;
#define inp(x) cin>>x;
#define pa(a,n) for(ll i=0;i<n;i++)cout<<a[i]<<" ";
#define ll long long
using namespace std;
                    
bool isPrime(ll n) 
{  
    if (n <= 1) 
        return false; 
    if (n <= 3) 
        return true; 
    if (n % 2 == 0 || n % 3 == 0) 
        return false; 
    for (int i = 5; i * i <= n; i = i + 6) 
        if (n % i == 0 || n % (i + 2) == 0) 
            return false; 
    return true; 
} void printPrime(ll n) 
{ 
	for (ll i = 2; i <= n; i++) { 
		if (isPrime(i)) 
			cout << i << " "; 
	} 
} 

int main() 
{       ll t;
	inp(t);
	while(t--){
		ll n; 
		inp(n);
		printPrime(n); 
	}
	return 0;
} 
