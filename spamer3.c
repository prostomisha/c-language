#include <stdio.h>
#include <string.h>

int main() {
	char login[100][20];
	char spamer[20];
	int n, i;
	int sum=0;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%s", login[i]);
	}
	scanf("%s", spamer);
	for(i=0; i<n; i++){
		if (strcmp(login[i],spamer)==0)
			sum++;
	}
	printf("%d", sum);
	return 0;
}

