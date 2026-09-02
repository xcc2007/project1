
// Simple C++ program (no Chinese)
#include <iostream>

int main() {
	std::cout << "Minimal program\n";
	int n = 0;
	if (!(std::cin >> n)) return 0;
	std::cout << "Square: " << (n * n) << '\n';
	return 0;
}
