/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: alex xinyi chen
 * ID: 202028305
 */

#include <stdio.h>
#include <string.h>

int main(void){
	long decimal=0;
	char hex[9];
	int i=0;
	
	printf("Enter a hexadecimal: ");
	fgets(hex, sizeof(hex), stdin);
	
	//checking if input contains invalid hex digit
	while(hex[i]!='\0' && hex[i]!='\n'){
		int decvalue;
		
		//characters are stored as ascii integers so we can use these kinds of comparisons
		//we also have to convert ascii to hex, which we do in decvalue
		if('0'<=hex[i] && hex[i]<='9'){
			decvalue=hex[i]-'0';
		}
		else if('a'<=hex[i] && hex[i]<='f'){
			decvalue=hex[i]-'a'+10;
		}
		else if('A'<=hex[i] && hex[i]<='F'){
			decvalue=hex[i]-'A'+10;
		}
		else{
			printf("Error: Invalid Hexadecimal\n");
			return 1;
		}

		decimal=decimal*16+decvalue;
		++i;
	}

	// print the decimal result
	printf("decimal: %ld\n", decimal);
	
	return 0;
}