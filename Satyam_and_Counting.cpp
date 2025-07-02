#include <iostream>
#include <vector>
#include <map>

using namespace std;

int countRightTriangles(int n, vector<pair<int, int>>& points) {
    map<int, int> xCount, yCount;
    
    // Count the occurrences of x and y coordinates
    for (auto& p : points) {
        xCount[p.first]++;
        yCount[p.second]++;
    }
    
    int result = 0;
    
    // Calculate the number of right triangles
    for (auto& p : points) {
        int x_c = xCount[p.first];
        int y_c = yCount[p.second];
        result += (x_c - 1) * (y_c - 1);
    }
    
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<pair<int, int>> points(n);
        for (int i = 0; i < n; ++i) {
            cin >> points[i].first >> points[i].second;
        }
        cout << countRightTriangles(n, points) << endl;
    }
    return 0;
}
