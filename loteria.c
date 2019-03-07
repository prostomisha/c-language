#include <stdio.h>
#include <stdlib.h>

int compare(const void *x, const void *y) {
	
	return (*(int*)x -*(int*)y);
	
	}

int main() {
	int n, i ;
	int *tab;
	scanf("%d", &n);
	tab= (int*)(n*sizeof(*tab));
	for(i=0; i<n; i++) 
		scanf("%d", tab+i);
		
	qsort(tab, n, sizeof(*tab), compare);
		
	if(tab[0]==tab[1])
		printf("%d\n", tab[1]);
			
	for(i=2; i<n; i++){
		if(tab[i]==tab[i-1] && tab[i]!=tab[i-2])
			printf("%d\n", tab[i]);
		}
	
	return 0;
}
