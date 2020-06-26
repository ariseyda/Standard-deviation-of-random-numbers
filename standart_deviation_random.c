#include<stdio.h>
#include<math.h>

//A computer program generates 100 random numbers and stores them in an array. 
//Computes the mean and standard deviation of this array of data and displays the difference between each value and the mean. 

//How is Standard Deviation Calculated?
//To calculate the standard deviation, we have to follow the steps below.
//1-) Firstly, the arithmetic average of the data is calculated.
//2-) The differences of the terms given in the series with the arithmetic mean are calculated.
//3-) The squares of the differences are summed.
//4-) The result obtained is divided by one minus the number of terms.

int main(){
	
	int array[100];
	int sum=0,i;
	time_t t;
	
	srand((unsigned) time(&t));
	
	for(i=0;i<100;i++){
		printf("%d\n",array[i]=rand() % 50);
	}
	for(i=0;i<100;i++){
		sum+=array[i];
	}
	
	/*printf("\nSum:%d",sum);*/
	
	float mean=sum/100.0;
	
	printf("\nMean:%.2f\n",mean);
	
	int k;
	float sum2=0;
	
	for(k=0;k<100;k++){
		
		printf("Difference between %d and average:%.2f\n",array[k],array[k]-(mean*1.0));
		sum2+=sqrt(array[k]-(mean*1.0));
		
	}
	
	
	float standart_deviation=sum2/99.0;
	
	printf("\nStandart deviation:%.2f",standart_deviation);
	
	
	return 0;
}
 
