// generating a random sequence of distinct elements
#include <bits/stdc++.h>
using namespace std;

int rand(int a, int b) {
    return a + rand() % (b - a + 1);
}

int main(int argc, char* argv[]) {
    srand(atoi(argv[1])); // atoi(s) converts an array of chars to int
    printf("1\n");
    int n = rand(2, 10);
    printf("%d\n", n);
    set<int> used;
    for(int i = 0; i < n; ++i) {
        int x;
        do {
            x = rand(1, 50);
        } while(used.count(x));
        used.insert(x);
    }
    for (auto& e:used) cout << e << ' ';
    cout << '\n';
    printf("\n");
    used.clear();
    for(int i = 0; i < n; ++i) {
        int x;
        do {
            x = rand(50,100);
        } while(used.count(x));
        // printf("%d ", x);
        used.insert(x);
    }
    for (auto& e:used) cout << e << ' ';
    cout << '\n';
    puts("");
}
    
