#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>

using namespace __gnu_pbds;
using namespace std;

typedef tree<int, null_type, 
less<int>, rb_tree_tag, 
tree_order_statistics_node_update> indexed_set;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	unordered_set<int> a = {5,2,8,9,4};
	unordered_set<int> b = {3,2,9,5};
	int cnt = 0;
	for(auto x : b) {
		if(a.count(x)) {
			cnt++;
		}
	}
	cout << cnt;
	cout << "\n";
	return 0;
}
