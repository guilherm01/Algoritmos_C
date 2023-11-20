#include <stdio.h>
void bubbleSort(int v[], int n);
int buscaBin(int v[], int n, int x);

int main(){
int v[5] = {5, 2, 1, 4, 8}, x = 4, result;
    bubbleSort(v, 5);
    result = buscaBin(v, 5, x);
    if(result == -1){
        puts("valor nao encontrado");
    }
        printf("valor esta na posição %d\n", result);
    return 0;
    
}



void bubbleSort(int v[], int n){
int i, j, temp = 0;
    for(i = 0; i < n; i++){
        for(j = 0; j < n-i-1; j++){
            if(v[j] > v[j+1]){
                temp = v[j];
                v[j] = v[j+1];
                v[j+1] = temp;
            }
        }
    }
}


int buscaBin(int v[], int n, int x){
//{1, 2, 4, 5, 8}
int fim = n-1, inicio = 0, meio;
    
    while(inicio <= fim){
        meio = (inicio+fim)/2;
        if(x == v[meio]){
            return meio;
        }
        if(v[meio] > x){
            fim = meio - 1;
        }
        else{
            inicio = meio + 1;
        }

    }
    
    return -1;
}