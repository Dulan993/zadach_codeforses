/*#include <iostream>
using namespace std;

int count_pairs(int L, int N) {
    int total_pairs = 0;

    for (int z = L; z <= N; ++z) {
        for (int x = L; x <= z; ++x) {
            total_pairs += (z - x + 1);
        }
    }

    return total_pairs;
}

long long factorial(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

long long combinations_with_repetition(int n, int r) {
    return factorial(n + r - 1) / (factorial(r) * factorial(n - 1));
}

int main() {
    int a, b;
    cin >> a >> b;

    int n = b - a + 1; 
    int r = 3;        

    cout << combinations_with_repetition(n, r) - count_pairs(n, r) << endl;

    return 0;
}*/

/*long long count(int P, int Q) {
    long long count = 0;

    for (int a = P; a <= Q; ++a) {
        for (int b = a; b <= Q; ++b) {
            int c_max = min(a + b - 1, Q);
            if (c_max >= b) {
                count += (c_max - b + 1);
            }
        }
    }

    return count;
}

int main() {
    int P, Q;
    cin >> P >> Q;
    cout << count(P, Q) << endl;
    return 0;
}*/