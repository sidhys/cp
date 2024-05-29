#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;
    cin >> n;
    vector<int> a(n), b(n), g(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i] >> g[i];
    }
    
    int score = 0;
    array<int, 3> possible_starting = {0,0,0};

    for (int guess = 0; guess < 3; guess++) {   

        possible_starting[guess] = 1;

        for (int i = 0; i < n; i++) {
            swap(possible_starting[ a.at(i) - 1], possible_starting[ b.at(i) - 1]);    
            if (possible_starting[ g.at(i) - 1] == 1) {
                score++;
            }
        } 
        cout << score << endl;

        // reset and get ready for next run 

        for (int _ = 0; _ < 3; _++) {
            possible_starting[_] = 0;
        }

        score=0;
    };
   
    return 0;
}
