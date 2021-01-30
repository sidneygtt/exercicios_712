// C program to print the elements of 3-D 
// array using pointer notation 
#include<stdio.h> 
int main() 
{ 
int arr[2][4][4][1]= { {
					{ 
						{5, 10, 99, 25} ,   {5, 10, 99, 25}
						{6, 11, 99, 25},    {6, 11, 99, 25}
						{7, 12, 99, 25},    {7, 12, 99, 25}
                        {200, 300, 99, 25}, {200, 300, 99, 25}
}}, 
					{ {
						{20, 30, 99, 25}, 
						{21, 31, 99, 25}, 
						{22, 32, 99, 25},
                        {500, 600, 99, 25},
					} }
					}; 
int i, j, k; 
for (i = 0; i < 2; i++) 
{ 
	for (j = 0; j < 4; j++) 
	{ 
	for (k = 0; k < 4; k++) 
    {
        for(b=0; b<1; b++){
		printf("%d\t", *(*(*( *(arr + i) + j) +k)+b); 
	printf("\n"); 
	} 

}
}
return 0; 

