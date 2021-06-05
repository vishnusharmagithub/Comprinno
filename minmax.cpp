#include <cstdio>
#include <bits/stdc++.h>
#include <algorithm>
#define ll long long
using namespace std;
int main(){
	//freopen("input.txt", "r", stdin);
	ll n, a, arr[70000], acuan, panjang;
	scanf("%lld", &n);
	for(ll i = 0; i < n; i++){
		scanf("%lld", &a);
		ll arr[a];
		for(ll j = 0; j < a; j++){
			scanf("%lld", &arr[j]);
		}
		panjang = sizeof(arr)/sizeof(arr[0]);
		sort(arr, arr+panjang);
		acuan = arr[0];
		printf("%lld\n", acuan*(panjang-1));
	}

	return 0;
}