#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int min_button_clicks(int n, vector<int>& requests) {
    sort(requests.begin(), requests.end());
    int clicks = 0;
    for (int i = 0; i < n - 1; ++i) {
        clicks += requests[i] + 1;
    }
    clicks += 2;

    return clicks;
}

int main() {
    int n;
    cin >> n;
    vector<int> requests(n);
    for (int i = 0; i < n; ++i) {
        cin >> requests[i];
    }
    cout << min_button_clicks(n, requests) << endl;

    return 0;
}