#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, k;
	cin >> n >> k;

	auto ans = n;
	while (0 < (k--)) {
		n *= 10;
		ans += n;
	}

	cout << ans;

	return 0;
}