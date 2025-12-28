#include <iostream>

using namespace std;

// https://arkusze.pl/maturalne/informatyka-2025-czerwiec-matura-rozszerzona.pdf


void ciecie(int k) {

    int r = 1;
    int i = 1;

    while(r < k) {
        i++;
        r *= 10;
    }
    int j = i / 2;
    int w = 1;
    while(j) {
        w *= 10;
        j--;
    }
    int a = k / w;
    int b = k % w;
    cout << a << endl;
    cout << b << endl;
}