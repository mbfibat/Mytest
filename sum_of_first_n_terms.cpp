#include <iostream>


int main() {
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int n; std::cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; i++)
		ans += i;
	std::cout << n;
}
