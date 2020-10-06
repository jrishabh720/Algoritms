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
	for (ll i = 2; i < n; i++) 
		if (n % i == 0) 
			return false; 
	return true; 
} 
void printPrime(ll n) 
{ 
	for (ll i = 2; i <= n; i++) { 
		if (isPrime(i)) 
			cout << i << " "; 
	} 
} 

int main() 
{ 
	ll n; 
	inp(n);
	printPrime(n); 
} 
