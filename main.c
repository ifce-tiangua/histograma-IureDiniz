#include <stdio.h>
#include <stdlib.h>


int main(){
    int num_cate, aux;
    scanf("%d", &num_cate);
    if(num_cate != 0){
        int *p = (int*) malloc(num_cate * sizeof(int*));
    
        for(int i = 0; i < num_cate; i++){
            scanf("%d", &aux);
         p[i] = aux;
        }

        for(int i = 0; i < num_cate; i++){
            printf("%d ", p[i]);
            for(int j = 0; j < p[i]; j++){
                printf("*");
            }
            printf("\n");
        }

        free(p);

    }else{
        printf("vazio");
    }

    
    return 0;
}
