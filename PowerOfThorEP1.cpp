#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    int light_x, light_y, initial_tx, initial_ty;
    cin >> light_x >> light_y >> initial_tx >> initial_ty;

    while (true) {
        int remaining_turns;
        cin >> remaining_turns;

        if (initial_ty > light_y) { cout << "N"; initial_ty--; }
        else if (initial_ty < light_y) { cout << "S"; initial_ty++; }

        if (initial_tx > light_x) { cout << "W"; initial_tx--; }
        else if (initial_tx < light_x) { cout << "E"; initial_tx++; }

        cout << endl;
    }
}