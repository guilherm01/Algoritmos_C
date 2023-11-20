#include <stdio.h>
int buscaBin(int v[], int n, int low, int high, int x);

int main(){
int v[5] = {1, 2, 3, 4, 5}, pos; 
    
    pos = buscaBin(v, 5, 0, 4, 4);
    printf("Position %d: \n", pos);
    return 0;
}

int buscaBin(int v[], int n, int low, int high, int x){
int meio;
    meio = (low+high)/2;
    if(v[meio] == x){
        return meio;
    }
    else if(v[meio] > x){
        buscaBin(v, n, low, meio-1, x);
    }
    else{
        buscaBin(v, n, meio+1, high, x);
    }
    
}
