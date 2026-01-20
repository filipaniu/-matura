#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

vector<int> sliceAt(int k, int j) {
    vector<int> two_numbers;

    int r = 1;
    int i = 1;

    while (r < k) {
        i++;
        r *= 10;
    }
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

vector<int> readFile() {
    vector<int> v;
    ifstream plik("../liczby1.txt");
    int item;
    while (plik >> item) v.push_back(item);
    return v;
}

bool checkIfSemiPrime(int x, int y) {
    int min = (x < y) ? x : y;
    for (int i = 2; i <= min; i++) {
        if (x % i == 0 && y % i == 0) {
            return false;
        }
    }
    return true;
}

// int zad2_2() {
//     vector<int> result = readFile();
//     int licznik = 0;
//     for (int i = 0; i < result.size(); i++) {
//         vector<int> nums = sliceAt(result[i]);
//         if(checkIfSemiPrime(nums[0], nums[1]) == true) {
//             licznik++;
//         }
//     }
//     return licznik;
// }

vector<int> readFile2() {
    vector<int> v;
    ifstream plik("../liczby2.txt");
    int item;
    while (plik >> item) v.push_back(item);
    return v;
}

int sliceNumber(int n) {
    int n2 = n * n;
    int k = 1;
    int licznik = 0;
    for(int p = n2; p > 10;p /= 10,k++) {
        vector<int> ciecia = sliceAt(n2,k);
        if(ciecia[0] + ciecia[1] <= n) {
            licznik++;
        }else {
        }
    }

    vector<int>wynik = sliceAt(n2, k);

    return licznik;
}

int main() {
    vector<int> v = readFile2();
    int maxSlices = 0;
    int k = 0;
    int l = 0;
    for(const auto &i : v) {
        k = sliceNumber(i);
        if(k > maxSlices) {
            maxSlices = k;
            l = i;
        }
    }

    cout << maxSlices << endl;
    cout << l << endl;

    int wynik = checkIfSemiPrime(34,87);
    cout << wynik << endl;

    // int a = 230;
    // int b = 95;
    //
    // int x;
    //
    // for(int i = 1; i < b;i++ ) {
    //     if(a % i == 0 && b % i == 0) {
    //         x = i;
    //     }
    // }
    //
    // cout << x << endl;
    return 0;
}
