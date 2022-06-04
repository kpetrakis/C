#include <stdio.h>

int *function(int array[], int len){
	if(len>0){
		for(int i=0;i<len;i++){
			array[i] = 5;
		}
	}
	//return array;
}

int main(){

	int c;
	int arr[2]; 
	
	//c = function(arr, 3);
	function(arr,3);
	for(int i=0;i<3;i++){
		printf("%d", arr[i]);
	}
	return 0;
}
