#include <stdio.h>

#include <stlib.h>

int main()
int i, j, k;
{
int C[3][2][2]={{{2,5},{7,9}},
                 {{3,4},{6,2}},
                 {{0,8}},{11,13}}};
for(i=0; i<3; i++)
 {
     for (j=0; j<2; j++)
        {
            for( k=0; k<2; k++)
            {
                printf (" matriz 3d:%d\t", *(*(*(C+i)+j)+k));
                printf("\n");
            }
        }
        printf("prograama finalizado com sucesso");
        return 0;
        
 }


