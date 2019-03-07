#include <stdio.h>

int main(){
	int n, i, A[1000], B[1000], k;
	int j;
	j=1;
	scanf("%d", &n);
	for (i=1; i<=n; i++){
		scanf("%d", &A[i]);
	}
	for (i=1; i<=n; i++){
		if (i%2==0){
			B[j]=A[i];
			
			j++;
		}
	}
	for (i=j-1; i>0; i--){
		printf("%d ", B[i]);
	}
}
