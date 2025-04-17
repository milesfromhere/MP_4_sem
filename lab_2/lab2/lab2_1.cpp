//Генератор подмножеств
#include <iostream>
#include <vector>
using namespace std;

void generateSubsets(vector<int>& set, vector<int>& subset, int index) {
    if (index == set.size()) {
        cout << "{ ";
        for (int num : subset) cout << num << " ";
        cout << "}\n";
        return;
    }

    generateSubsets(set, subset, index + 1);
    subset.push_back(set[index]);
    generateSubsets(set, subset, index + 1);
    subset.pop_back();
}

int main() {
    vector<int> set = { 1, 2, 3 };
    vector<int> subset;
    generateSubsets(set, subset, 0);
    return 0;
}