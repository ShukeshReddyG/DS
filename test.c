#include <stdio.h>
 
int main(){
	int num, count = 0;
	int i;
	unsigned long long sum = 0;
	int flag = 0;
	int negative_sum = 0;
	scanf("%d", &num);       
 
	int * arr = (int *) malloc (sizeof(int) * num);
	for (i=0; i<num; ++i) {
		scanf("%d", &arr[i]); 
	} 
 
	for (i=0; i<num; ++i) {
		if (arr[i] >= 0) {
			flag = 1;
			sum = sum + arr[i];
			++count;
		} else {
			if ((!flag) && (!negative_sum))
				negative_sum = arr[i];
			else 
				negative_sum = negative_sum > arr[i] ? negative_sum : arr[i];
		}
	}
 
	if (!flag) {
		sum = negative_sum;
		count = 3;
	}
 
	printf("%ld %d", sum, count);       // Writing output to STDOUT
}
