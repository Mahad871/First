#pragma once


char swp(char* one, char* two) {

	int i = 0 ,n=0;
	char temp;

	for(i=0; *(one+i)!='\0'; i++) {
	
		temp = *(one + i);
		*(one + i) = *(two + i);
		*(two + i) = temp;
	
	}

	return 0;
}