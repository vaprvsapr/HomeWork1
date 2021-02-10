

#include <iostream>
#include <cmath>
using namespace std;

void nothing(int i) {
    
}

int main() {
    // put your code here
    float x, y, z;
    cin >> x >> y >> z;
    float p = (x + y + z) / 2;

    float s = sqrt(p * (p - x) * (p - y) * (p - z));

    cout << s;
    return 0;
}