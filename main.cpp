#include <string>
#include <iostream>

using namespace std;

void process(int t) {
	cout<<__builtin_popcount(t)<<"\n";
    for (int i=0; (t>>i)!=0; ++i) {
        if ((t>>t)&1) cout<<(1<<i)<<" ";
    }
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		int t;
		cin >> t;
		process(t);
	}
	return 0;
}
