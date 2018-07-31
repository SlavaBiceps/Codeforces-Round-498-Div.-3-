#include <iostream>
using namespace std;
int main() {
    int n,i,a;
    cin >> n;
    for (i=0;i<n;i++) {
        cin >> a;
        if (a%2==0) {
            a=a-1;
        }
        cout << a <<' ';
    }
    return 0;
}