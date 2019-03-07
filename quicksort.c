#include <stdio.h>
#include <stdlib.h>


int compare(const void *x, const void *y)
{
    if(*(int*)x>*(int*)y) 
		return -1;
    else if	(*(int*)x==*(int*)y)
		return 0;
    else
		return 1;
}

int main() {
	int n, l, i, s;
	int *tab;
	scanf("%d", &l);
	for(s=0; s<l; s++){
		scanf("%d", &n);
		tab=(int*)malloc(n*sizeof(*tab));
		for(i=0; i<n; i++) 
			scanf("%d ", tab+i);
		qsort(tab, n, sizeof(*tab), compare);
		for(i=0; i<n; i++) 
			printf("%d ", tab[i]);
			printf("\n");
		free(tab);
	}
	
}
