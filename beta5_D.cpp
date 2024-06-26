#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double a, v, l, d, w, n, tw, dw;

double dis(double v, double t) {
    return v * t + a * t * t / 2;
}

double cal(double s, double V) {
    double t = (sqrt(V * V + 2 * a * s) - V) / a;
    double T = (v - V) / a;
    return t >= T ? T + (s - dis(V, T)) / v : t;
}

int main() {
    cin >> a >> v >> l >> d >> w;
    tw = w / a;
    dw = dis(0, tw);

    if (v <= w || dw >= d) 
        n = cal(l, 0);
    else 
        n = tw + 2 * cal(0.5 * (d - dw), w) + cal(l - d, w);

    cout << setprecision(10) << n << endl;
    return 0;
}
