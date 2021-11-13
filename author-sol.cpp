#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n, d;
		cin >> n >> d;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		// sort the array in non-decreasing order
		// Let us go from the end to beginning of the array. If last number 
		// should be matched, then the best number with which it can be matched 
		// is the next-to-last one only because the difference between numbers
		// can only increase if we consider elements prior to the 
		// next-to-last one (i.e. element at positions N - 2 or less). 
		sort(a.begin(), a.end());
		long long ans = 0;
		for (int i = n - 1; i - 1 >= 0; ) {
			if (a[i] - a[i - 1] < d) {
				ans += (a[i] + a[i - 1]);
				i -= 2;
			} else {
				i--;
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
