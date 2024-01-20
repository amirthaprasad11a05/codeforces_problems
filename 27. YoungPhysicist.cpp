27. Young Physicist
// https://codeforces.com/problemset/problem/69/A
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
 
 
int main() {
    int n;
	cin>>n;
	int s0=0;
	int s1=0;
	int s2=0;
    while(n>0) {
	    vector<int>a(3);
		cin>>a[0]>>a[1]>>a[2];
		s0+=a[0];
		s1+=a[1];
		s2+=a[2];
		n--;
	}
	if(s0==0 && s1==0 && s2==0)
		cout<<"YES";
	else
		cout<<"NO";
	return 0;
}