#include <iostream>

using namespace std;

int rek(int a) {

    cout << a << " " << "Hello world" << endl;

    if(a > 0) {
        return a + rek(a - 1);
    }else {
        return 0;
    }
}


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

int main() {
    ciecie(123456);
    return 0;
}
