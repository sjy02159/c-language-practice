#include<stdio.h>
int main(){
int j=0,k=0,l=0;
for (int i=100;i<=999;i++){
	j=i%10;
	k=(i%100)/10;
	l=i/100;
	if(j*j*j+k*k*k+l*l*l==i){
		printf("%d\n",i);
	}
	
}
/*
 * File: narcissistic_number.c
 * Description: Find all narcissistic numbers (水仙花数) between 100 and 999.
 * Author: sjy02159
 * Date: 2026-10
 */
	
	return 0;
}