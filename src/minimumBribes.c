#include "minimumBribes.h"


void minimumBribes(int *arr,int n){
int counter_2 = 0 ;
int arrDeference[n];
int result = PASS ;
int counter = 0 ;
for( int i = n-1 ; i >= 0 ; i-- ){

	if( arr[i] >= i+1) continue ;

	 counter+= ( (i+1) - arr[i] ) ;
}

for(int i = 0 ; i < n ; i++){
	  if ((arr[i] - (i+1)) > 2)
		result = FAIL;
}

for(int i = 0 ; i < n ; i++){
	arrDeference[i]=(arr[i]-(i+1));
}

for(int i = 0 ; i < n ; i ++){
	if( arrDeference[i]==2 ){
		while(arrDeference[i]==2){
			counter_2++;
			i++;
		}
		if(arrDeference[i] != (-counter_2)) counter++;
	}
}

  if (!result)
    printf("%d\n", counter);
  else
    printf("Too chaotic\n");
}
