#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int main()
{
	long n,k,sum,res,i,j;
	sum=0;
	res=0;
	cin >> n >> k;
	vector<long> m1(k);
	vector<pair<long,long>> m(n);
	for (i=0;i<n;i++) {
		cin >> m[i].first;
		m[i].second=i;
	}
	sort(m.begin(),m.end());
	for (i=n-1,j=0;i>=n-k;i--,j++){
		m1[j]=m[i].second;
		sum+=m[i].first;
	}
	sort(m1.begin(),m1.end());
	cout << sum << endl;
	for (i=0;i<k-1;i++){
		cout << m1[i]+1-res << ' ';
		res=m1[i]+1;
	}
	cout << n-res;
}