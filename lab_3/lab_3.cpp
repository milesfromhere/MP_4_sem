//Задание 2. Реализация метода ветвей и границ 
#include <iostream>
#include <vector>
#include <limits>

using namespace std;

const int INF = numeric_limits<int>::max();
const int N = 5;
int dist[N][N] = {
    {INF, 4, 23, 2, 2},
    {2, INF, 17, 66, 82},
    {4, 6, INF, 86, 51},
    {19, 56, 8, INF, 6},
    {91, 68, 52, 15, INF}
};

vector<int> best_path;
int best_cost = INF;

void solveTSP(vector<int> path, int cost, int level) {
    if (level == N) {
        cost += dist[path.back()][path[0]];
        if (cost < best_cost) {
            best_cost = cost;
            best_path = path;
        }
        return;
    }
    for (int i = 0; i < N; i++) {
        if (find(path.begin(), path.end(), i) == path.end()) {
            path.push_back(i);
            solveTSP(path, cost + dist[path[path.size() - 2]][i], level + 1);
            path.pop_back();
        }
    }
}

int main() {
    vector<int> path = { 0 };
    solveTSP(path, 0, 1);
    cout << "Minimum lange: ";
    for (int city : best_path) cout << city + 1 << " → ";
    cout << "1\nPrice: " << best_cost << endl;
    return 0;
}