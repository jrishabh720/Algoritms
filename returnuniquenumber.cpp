#include<bits/stdc++.h>
#define ll long long 
using namespace std;

ll returnsetbits(ll n){
	ll coun = 0;
	while(n>0){
  //In each iteration it will remove the one set bit
		coun++;
		n = (n & n-1);
	}
	return coun;
}

int main(){
	ll n = 31;
	n = returnsetbits(n);
	cout<<n<<endl;
	return 0;
}
