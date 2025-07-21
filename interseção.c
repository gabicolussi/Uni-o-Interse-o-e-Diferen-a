#include <stdio.h>
int main()
{
   int a[6], b[6], c[12];
   int i, cont=0,j,achou ;
   
   printf("Digite os 6 elementos do vetor:\n");
   for (i = 0; i < 6; i++) {
       scanf("%d", &a[i]);
   }
   
   printf("Digite os 6 elementos do vetor:\n");
   for (i = 0; i < 6; i++) {
       scanf("%d", &b[i]);
   }

    for (i = 0; i < 6; i++) {
       printf("%d", a[i]);
   }
    
    printf("\n");
    
     for (i = 0; i < 6; i++) {
       printf("%d", b[i]);
   }
    
    printf("\n");

    for (i = 0; i < 6; i++){
       achou=0;
        for (j = 0; j < 6; j++){
            if(a[i]==b[j]){
                achou=1;
            }
        }
        
        if(achou==1){
            c[cont]=a[i]; 
            cont++;
        }
    }
    
    for (i = 0; i < cont; i++){
        printf("Vetor C:");
        printf("%d\n", c[i]);
    }
    
return 0;
}
