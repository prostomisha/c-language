#include <stdio.h>
int main() {
  	int i, n;
	scanf("%d", &n);
	int tab[n];
	for (i=1; i<=n; i++) {
		scanf("%d", &tab[i]);
	}
	for(i=1; i<=n; n--) {
		printf("%d ", tab[n]);
	}
	return 0;
}

