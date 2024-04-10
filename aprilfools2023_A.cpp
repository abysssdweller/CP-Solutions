#include <iostream>

bool vibe_check(int x, int y) {
    int z = x + y;
    if (z % 2 == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    int a = 5;
    int b = 7;
    int result = a * b;

        if (vibe_check(a, b)) {
            std::cout << "security";
        }

    return 0;
}
