#include <iostream>
#include <algorithm>

#define INF 1e9

using namespace std;

int rad2(int n) {
    int counter = 0;
    while (n%2 == 0) {
        n /= 2;
        counter++;
    }

    return counter;
}

int search_min(int n, int* a) {
    int min = INF;
    for (int i = 0; i < n; i++) {
        int tmp = rad2(a[i]);
        if (tmp < min) {
            min = tmp;
        }
    }

    return min;
}

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << search_min(n, a) << endl;

    return 0;
}