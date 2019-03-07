#include <stdio.h>
#include <string.h>

int main() {
	int n, i, l, j;
	char slowo[30];
	char owols[30];
	scanf("%d", &n);
	getchar();
	for(i=0; i<n; i++){
		gets(slowo);
		l=strlen(slowo);
		for(j=0; j<l; j++){
			owols[j]=slowo[l-j-1];
		}
		owols[l]='\0';
		if (strcmp(slowo, owols)==0){
			printf("%s==%s\n", slowo, owols);
		}
		else {
			printf("%s!=%s\n", slowo, owols);
		}
	}
	
}

