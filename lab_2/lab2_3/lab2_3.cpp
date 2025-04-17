//Генератор перестановок
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s = "123";
    sort(s.begin(), s.end());
    do {
        cout << s << "\n";
    } while (next_permutation(s.begin(), s.end()));
    return 0;
}