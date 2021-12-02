#include <bits/stdc++.h>
#include<limits.h>

using namespace std;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("input.txt", "r", stdin);

    int counter = 0;
    vector <int> list;

    int t;
    cin >> t;

    for(int i = 0; i < t; i++) {
        int current_sweep;
        cin >> current_sweep;
        list.push_back(current_sweep);
    }

    for(int i = 1; i < list.size(); i++) {
        if(list[i] > list[i-1]) {
            counter++;
        }
    }
    cout << counter << "\n";

    return 0;
}