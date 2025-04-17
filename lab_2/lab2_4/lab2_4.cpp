//Генератор размещений
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> set = { 1, 2, 3 };
    int k = 2;
    sort(set.begin(), set.end());
    do {
        for (int i = 0; i < k; i++) cout << set[i] << " ";
        cout << "\n";
    } while (next_permutation(set.begin(), set.end()));
    return 0;
}