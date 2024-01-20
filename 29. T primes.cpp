29. T primes
// https://codeforces.com/problemset/problem/230/B
#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <cmath>
using namespace std;

typedef long long ll;
void Pr(vector<bool>& arr,ll num) {
    arr.resize(num+1,true);
    arr[0]=false;
    arr[1]=false;
    for(ll i=0;i<=sqrt(num);i++) {
        if(arr[i]) {
            for(ll j=i*i;j<=num;j+=i) {
                arr[j]=false;
            }
        }
    }
}
ll Binary(vector<ll>& arr,ll xx) {
    ll left=0;
    ll right=arr.size()-1;
    while(left<=right) {
        ll mid=(left+right)/2;
        if(arr[mid]==xx)
            return mid;
        if(arr[mid]>xx)
            right=mid-1;
        if (arr[mid]<xx)
            left=mid+1;
    }
    return -1;
}
int main() {
    vector<bool>sieve;
    ll max=1000000;
    Pr(sieve,max);
    ll n;
    cin>>n;
    vector<ll>a(n);
    vector<ll>b;
    for(ll i=0;i<n;i++)
        cin>>a[i];
    for(ll i=0;i<max;i++)
        if(sieve[i])
            b.push_back(i*i);
    ll k=0;
    while(n--) {
    
        if(Binary(b,a[k])!=-1)
            cout<<"YES";
        else
            cout<<"NO";
        cout<<"\n";
        k++;
    }
    return 0;
}
