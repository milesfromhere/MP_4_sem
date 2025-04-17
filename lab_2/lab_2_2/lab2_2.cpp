//Генератор сочетаний
#include <iostream>
#include <vector>
using namespace std;

void generateCombinations(vector<int>& set, vector<int>& combination, int start, int k) {
    if (combination.size() == k) {
        for (int num : combination) cout << num << " ";
        cout << "\n";
        return;
    }
    for (int i = start; i < set.size(); i++) {
        combination.push_back(set[i]);
        generateCombinations(set, combination, i + 1, k);
        combination.pop_back();
    }
}

int main() {
    vector<int> set = { 1, 2, 3, 4 };
    vector<int> combination;
    int k = 2;
    generateCombinations(set, combination, 0, k);
    return 0;
}