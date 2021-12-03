#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    freopen("./input.txt", "r", stdin);

    int t;
    cin >> t;
    vector<string> report(t);
    for(int i = 0; i < t; i++) {
        string binary;
        cin >> binary;
        report[i] = binary;
    }

    string gammarate = "";
    string epsilonrate = "";

    for(int i = 0; i < report[0].length(); i++) {
        int number_of_ones = 0;
        for(int j = 0; j < report.size(); j++) {
            if(report[j][i] == '1') {
                number_of_ones++;
            } 
        }
        // 1 is more often
        if(number_of_ones > report.size() - number_of_ones) {
            gammarate.push_back('1');
            epsilonrate.push_back('0');
        }else {
            gammarate.push_back('0');
            epsilonrate.push_back('1');

        }
    }
    cout << stoi(gammarate, 0, 2) * stoi(epsilonrate, 0, 2) << "\n";


    return 0;
}