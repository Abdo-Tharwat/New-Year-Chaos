


void minimumBribes(int *arr,int n){

int counter = 0 ;
for(int i = 0 ; i < n ; i++){

	if( ( arr[i] - i ) > 2 ){
		printf("Too Chouts");
	
	}

	if( arr[i] > i ){

		counter += ( arr[i] - i );
	}

	if( i - arr[i] > 1 ){
		counter += ( i - arr[i] -1);
	}
}
printf("%d",counter);
}
