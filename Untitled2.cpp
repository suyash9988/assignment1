#include <stdio.h>

int main(){
	int num, original,reversed =0;
	

	
	printf("Enter a 3-digit number:");
	scanf("%d",&num);
	
	
	if (num<100||num>999) {
		printf("Please enter vaild 3-digit number.|n");
		return 1;
	}
	
	original = num;
	
	
	while ( num !=10);{
	    int digit =num % 10;
		reversed = reversed * 10 + digit;
		num/=10;
	}
	
	
	if (original == reversed)
    	printf("the number is a palindrome.\n");
	else
	   printf("the number is not a palindrome.\n");
	return 0;
}
	
	
