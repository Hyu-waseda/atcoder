#include <stdio.h>

void insertion2(int n, int *data){
    int i, j;
    for (i = 1; i < n; i++){
		int a = data[i];
		for (j = i; j > 0 && data[j-1] < a; j--){
			data[j] = data[j - 1];
			if(j == 1 || data[j-1] < a){
				data[j-1] = a;
				break;
			}
		}
	}
	//return data;
}

int main(void){
	int n = 8;
	int data[8] = {2, 8, 7, 3, 6, 1, 5, 4};
	
	int i , gap = 
}

	for(int i = 0;i < n;i++){
		printf("%d",data[i]);
	}
}

