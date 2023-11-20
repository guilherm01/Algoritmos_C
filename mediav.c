#include <stdio.h>
float mediav(int v[], int n);
int somav(int v[], int n);

int main(){
int v[3] = {7, 5, 3};
float m;
    m = mediav(v, 3);
    printf("Media %.2f: \n", m);

    return 0;
}

float mediav(int v[], int n){
int soma = 0;
float media = 0;
    if(n == 1){
        return v[0];
    }
    soma = somav(v, n);
    media = soma/n;

    return media;

}


int somav(int v[], int n){
int soma = 0;
    if(n == 1){
        return v[0];
    }
    soma = somav(v, n-1);
    soma = soma+v[n-1];

    return soma;

}