#include <stdio.h>
int main() {
 int i, n, j;
  int tab[202];
 scanf("%d", &n);
 n=n/3;
 for(i=0; i<n; i++){
      scanf("%*d %*d %d", &tab[i]);
 } 
 for(j=n-1; j>=0; j--) {
  	printf("%d ", tab[j]);
 }
 return 0;
}
