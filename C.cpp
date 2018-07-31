#include <iostream>
using namespace std;
int main() {
	long long i,j,n,s1,s2,s3,max;
	long long m[200002];
	cin >> n;
	for(i=0;i<n;i++) {
		cin >> m[i];
	}
	j=n-1;
	i=0;
	s1=m[0];
	s2=0;
	s3=m[n-1];
	max=0;
	while(i<j)
	{
		if (s1<s3) { 
		    i++;
		    s1+=m[i];
		} else if (s1>s3) {
		    j--;
		    s3+=m[j];
		}
		else { 
		    max=s1;
		    i++;
		    s1+=m[i];
		}
	}
	cout << max;
	return 0;
}