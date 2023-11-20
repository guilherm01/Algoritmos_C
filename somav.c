#include <stdio.h>
int somav(int v[], int n);

int main(){
int s, v[3] = {2, 2, 2};
    s = somav(v, 3);
    printf("Soma %d: \n", s);
    return 0;
}

int somav(int v[], int n){
int soma = 0;
    if(n == 1){
        return v[0];
    }
    soma =somav(v, n-1);
    soma = soma*v[n-1];

    return soma;

}