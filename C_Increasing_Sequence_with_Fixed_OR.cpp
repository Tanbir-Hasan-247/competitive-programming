#include <iostream>
#include <vector>

using namespace std;

vector<long long> find_sequence(long long n) {
    vector<long long> sequence;
    long long current = 0;
    while (current <= n) {
        sequence.push_back(current);
        current = (current | (current + 1));
    }
    return sequence;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        
        vector<long long> sequence = find_sequence(n);
        
        cout << sequence.size() << endl;
        for (long long num : sequence) {
            cout << num << " ";
        }
        cout << endl;
    }
    return 0;
}
