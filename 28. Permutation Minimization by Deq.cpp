28. Permutation Minimization by Deque
// https://codeforces.com/problemset/problem/1579/E1
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <queue>
using namespace std;
#define Test ll t;cin>>t;while(t--)
#define ll long long
#define pq priority_queue
#define sort(v) sort(v.begin(), v.end())
#define _sort(v) sort(v.rbegin(), v.rend())
#define pll pair<ll, ll>

ll Linear(vector<ll>&a,ll xx) {
    for(ll t=0;t<a.size();t++)
		if(xx==a[t])
			return t;
	return -1;
}
void Solve() {
    ll n;
	cin>>n;
	vector<ll>arr(n);
	for(ll i=0;i<n;i++)
		cin>>arr[i];
	deque<ll>res;
	res.push_back(arr[0]);
	for(ll i=1;i<n;i++) {
	    if(arr[i]<res.front())
			res.push_front(arr[i]);
		else
			res.push_back(arr[i]);
	}
	for(ll i=res.size();i>0;i--) {
	    cout<<res.front()<<" ";
		res.pop_front();
	}
	cout << "\n";
}
int main() {
    Test
		Solve();
	return 0;
}