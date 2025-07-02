#include <iostream>
#include <vector>
using namespace std;

void generatePermutations(int N) {
    vector<int> A(N);
    vector<int> B(N);

    // Generate permutation A
    for (int i = 0; i < N; ++i) {
        A[i] = i + 1;
    }

    // Generate permutation B
    for (int i = 0; i < N; ++i) {
        B[i] = N - i;
    }

    // Output permutation A
    for (int i = 0; i < N; ++i) {
        cout << A[i] << " ";
    }
    cout << endl;

    // Output permutation B
    for (int i = 0; i < N; ++i) {
        cout << B[i] << " ";
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        generatePermutations(N);
    }

    return 0;
}
