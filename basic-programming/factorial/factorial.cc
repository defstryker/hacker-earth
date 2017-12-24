#include <iostream>

int main()
{
	int n, ans = 1;
	std::cin >> n;

	while (n > 0) {
		ans *= n;
		n--;
	}

	std::cout << ans << std::endl;

	return 0;
}