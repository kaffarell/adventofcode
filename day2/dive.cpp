#include <bits/stdc++.h>

using namespace std;

void part1(int t) {
    int horizontal = 0;
    int depth = 0;

    for(int i = 0; i < t; i++) {
        string direction;
        int units;
        cin >> direction >> units;
        if(direction == "forward") {
            horizontal += units;
        }else if(direction == "up") {
            depth -= units;
        }else if(direction == "down") {
            depth += units;
        }
    }
    cout << horizontal * depth << "\n";
}

void part2(int t) {
    int horizontal = 0;
    int depth = 0;
    int aim = 0;

    for(int i = 0; i < t; i++) {
        string direction;
        int units;
        cin >> direction >> units;
        if(direction == "forward") {
            depth += aim * units;
            horizontal += units;
        }else if(direction == "up") {
            aim -= units;
            //depth -= units;
        }else if(direction == "down") {
            aim += units;
            //depth += units;
        }
    }
    cout << horizontal * depth << "\n";
}


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("input.txt", "r", stdin);

    int t;
    cin >> t;

    //part1(t);
    part2(t);

    return 0;
}
