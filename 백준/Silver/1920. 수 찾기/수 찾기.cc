#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;
    vector<int> A(N);

    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // 이진 탐색을 위해 정렬
    sort(A.begin(), A.end());

    int M;
    cin >> M;

    for (int i = 0; i < M; ++i) {
        int target;
        cin >> target;

        // 이진 탐색 수행
        if (binary_search(A.begin(), A.end(), target)) {
            cout << "1\n";
        } else {
            cout << "0\n";
        }
    }

    return 0;
}
