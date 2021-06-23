#include <stdio.h>
int abs (int a) {
	if (a < 0) a*=-1;
	return a;
}
int max(int a, int b) {
	return a > b ? a : b;
}
int main () {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n,m,r,c;
		scanf("%d%d%d%d", &n, &m, &r, &c);
		int ans = 0;
		ans = max(ans, abs(1-r) + abs(1-c));
		ans = max(ans, abs(1-r) + abs(m-c));
		ans = max(ans, abs(n-r) + abs(1-c));
		ans = max(ans, abs(n-r) + abs(m-c));
		printf("%d\n", ans);
	}
	return 0;
}