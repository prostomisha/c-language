#include <stdio.h>

int max_elem(int tab[], int k, int n){
    int r, h;
    h = k;
    r = tab[k];
    for(k + 1; k < n; k++){
        if(tab[k] > r){
            r = tab[k];
            h = k;
        }
    }
    return h;
}
swap(int tab[], int i, int j){
    int s;
    s = tab[i];
    tab[i] = tab[j];
    tab[j] = s;
}
sort(int tab[], int n){
	int i;
    for(i = 0; i < n; i++){
        swap(tab, i, max_elem(tab, i, n));
    }
    for(i = 0; i < n; i++){
        printf("%d ",tab[i]);        
    }

}

int main(){
    int n, l, i;
    scanf("%d",&n);
    int tab[n];
    for( i = 0; i < n; i++){
        scanf("%d",&l);
        tab[i] = l;
    }
    sort(tab, n);
	return 0;
}
