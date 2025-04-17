//Решение задачи о рюкзаке
#include <iostream>
#include <vector>
#include <algorithm>
#include <Windows.h>
using namespace std;

struct Item {
    int weight, value;
};

int knapsack(int capacity, vector<Item>& items) {
    int n = items.size();
    vector<int> dp(capacity + 1, 0);
    for (auto& item : items) {
        for (int w = capacity; w >= item.weight; --w) {
            dp[w] = max(dp[w], dp[w - item.weight] + item.value);
        }
    }
    return dp[capacity];
}

int main() {
    setlocale(LC_ALL, "rus");
    vector<Item> items = { {10, 15}, {20, 30}, {30, 50}, {40, 10}, {50, 40}, {60, 25}, {70, 20}, {80, 35}, {90, 45},
                           {100, 55}, {110, 15}, {120, 25}, {130, 35}, {140, 45}, {150, 20}, {160, 30}, {170, 50}, {180, 10} };
    int capacity = 300;
    cout << "Максимальная стоимость: " << knapsack(capacity, items) << " у.е." << endl;
    return 0;
}