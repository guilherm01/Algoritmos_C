#include <stdio.h>
int max(int v[], int n);
int min(int v[], int n);

    
int main(){
int mn, mx, v[5] = {2, 4, 6, 7, 3};
    mx = max(v, 5);
    mn = min(v, 5);
    printf("maximo %d\nminimo %d\n", mx, mn);
    
    return 0; 
}

int max(int v[], int n){
int maxvetor;
    if(n == 1){
        return v[0];
    }
    else{
        maxvetor = max(v, n-1);
    }
    if(maxvetor > v[n-1])
        return maxvetor;
    else
        return v[n-1];
}

int min(int v[], int n){
int minvetor;
    if(n == 1){
        return v[0];
    }
    else{
        minvetor = min(v, n-1);
    }
    if(minvetor < v[n-1])
        return minvetor;
    else
        return v[n-1];
}