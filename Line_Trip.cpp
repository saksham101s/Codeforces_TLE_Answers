#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        // Include start and end points
        vector<int> points;
        points.push_back(0); // start
        for (int i = 0; i < n; ++i)
            points.push_back(a[i]);
        points.push_back(x); // destination

        // Sort the points (should already be sorted, but just in case)
        sort(points.begin(), points.end());

        // Find the maximum gap between two consecutive points
        int max_gap = 0;
        for (int i = 1; i < points.size(); ++i) {
            max_gap = max(max_gap, points[i] - points[i - 1]);
        }

        cout << max_gap << "\n";
    }

    return 0;
}
