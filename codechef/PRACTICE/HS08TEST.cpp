#include <bits/stdc++.h>
#define FIXED_FLOAT(x) std::fixed<<std::setprecision(2)<<(x)


using namespace std;

int main() {
    int x;
    float b;
    cin >> x >> b;
    if(x%5 == 0) {
        float trans = x+0.50;
        if(b-trans >=0) {
            b-=trans;
        }
    }
    cout << FIXED_FLOAT(b);
	return 0;
}
