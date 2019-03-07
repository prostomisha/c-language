#include <stdio.h>
 

int main()
{
	int m, n, i, l, max;
	max=-1;
	scanf("%d %d", &m, &n);
	
	int a[100] ={0};
	int j;
	for (j=1;j<=n;j++){
		scanf("%d", &l);
		a[l] += 1;				
	}
	
	
	for (i=1; i<=m;i++){
		printf("%d: %d\n", i, a[i]);
		if (a[i]>max)
			max=i;
		
	}
	for (i=1; i<=m;i++){
		
		if (a[i]>a[i-1])
			max=i;
		
	}
	printf("%d", max);
	
	
}
