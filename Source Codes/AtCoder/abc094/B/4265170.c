#include <stdio.h>

int main(){
    
    int n, m, x;
    
    scanf("%d %d %d", &n, &m, &x);
    
    int vet[n];
    
    for(int i = 0; i < n; i++){
        vet[i] = 0;
    }
    
    int aux;
    
    for(int i = 0; i < m; i++){
        scanf("%d", &aux);
        vet[aux] = 1;
    }
    
    int soma_esq = 0;
    
    for(int i = x; i > 0; i--){
        soma_esq = soma_esq + vet[i];
    }
    
    int soma_dir = 0;
    
    for(int i = x; i <n; i++){
        soma_dir = soma_dir + vet[i];
    }
    
    if(soma_dir > soma_esq){
        printf("%d", soma_esq);
    }
    else{
        printf("%d", soma_dir);
    }
    

    return 0;
} 