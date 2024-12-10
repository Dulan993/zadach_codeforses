#include <iostream>
using namespace std;

int main() {
    long long a, h, k, m, s;
    cin >> a >> h >> k >> m >> s;
    long long needed_strips = (a + m - 1) / m;
    long long strips_per_roll = s / (h + h % k);
    long long rolls_needed = (needed_strips + strips_per_roll - 1) / strips_per_roll;
    cout << rolls_needed << endl;
    return 0;
}