#include <stdio.h>
#include <stdlib.h>

int *alocaMemoria(int *pont, int N){

	pont = (int *) malloc(N*sizeof(int));

	return pont;
}



int binarySearch(int *array, int K, int n){
	int l,r,m,i;
	l = 0;
	r = n - 1;

	while(l<=r){
		m = (l+r)/2;
		i = m - 1;
		if(K == array[m]){
			while(array[i] == array[m]){
				i--;
				m--;
			}
			return m;}

		else if(K < array[m]){
			r = m - 1;
		}
		else{
			l = m + 1;
		}
	}

	return -1;
}

int main(){

	int *array;
	int n;
	int i;

	scanf("%d", &n);

	array = alocaMemoria(array,n);

	for(i=0;i<n;i++){
		scanf("%d", &array[i]);
	}

	printf("%d\n", binarySearch(array,5,n));

	return 0;
}