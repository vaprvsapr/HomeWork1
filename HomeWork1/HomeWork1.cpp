

#include <iostream>
#include <cmath>
using namespace std;

int to_do(int i) {
    cout << i;
}

int main() {
    // put your code here
    float x, y, z;

    cin >> x >> y >> z;

    float p = (x + y + z) / 2;

    float s = sqrt(p * (p - x) * (p - y) * (p - z));

    cout << s;
    return 0;

    int j = 10;
    while (j > 0)
        j--;
    
}