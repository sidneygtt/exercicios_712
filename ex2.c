// C program to print the elements of 3-D 
// array using pointer notation 
#include<stdio.h> 
int main() 
{ 
int arr[3][4][3] = {
					{ 
						{5, 10, 11}, 
						{6, 11, 11}, 
						{7, 12, 11}, 
                        {22,23, 23},
					}, 
					{ 
						{20, 30,31}, 
						{21, 31,32}, 
						{22, 32,33}, 
                        {22, 32,33}, 
                        
					}
                    { 
						{20, 30,31}, 
						{21, 31,32}, 
						{22, 32,33}, 
                        {22, 32,33}, 
					}
                    
					}; 
int i, j, k; 
for (i = 0; i < 2; i++) 
{ 
	for (j = 0; j < 4; j++) 
	{ 
	for (k = 0; k < 3; k++) 
		printf("%d\t", *(*(*(arr + i) + j) +k)); 
	printf("\n"); 
	} 
} 


return 0; 
} 
