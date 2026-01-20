#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>

using namespace std;

// https://arkusze.pl/maturalne/informatyka-2025-czerwiec-matura-rozszerzona.pdf


vector<int> ciecie(int k) {
    vector<int> two_numbers;

    int r = 1;
    int i = 1;

    while (r < k) {
        i++;
        r *= 10;
    }
    int j = i / 2;
    int w = 1;
    while (j) {
        w *= 10;
        j--;
    }
    int a = k / w;
    int b = k % w;
    two_numbers.push_back(a);
    two_numbers.push_back(b);

    return two_numbers;
}