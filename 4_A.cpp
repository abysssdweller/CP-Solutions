#include <iostream>

int main() {
    int w;
    std::cin >> w;
    if (w % 2 == 0 && w > 2) {
        std::cout << "YES";
    } else {
        std::cout << "NO";
    }

    return 0;
}
