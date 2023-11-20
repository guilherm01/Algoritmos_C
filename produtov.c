#include <stdio.h>
int prodv(int v[], int n);

int main(){
int p, v[3] = {2, 2, 2};
    p = prodv(v, 3);
    printf("Produto %d: \n", p);

    return 0;
}

int prodv(int v[], int n){
int prod = 0;
    if(n == 1){
        return v[0];
    }
    prod = prodv(v, n-1);
    prod = prod*v[n-1];

    return prod;

}