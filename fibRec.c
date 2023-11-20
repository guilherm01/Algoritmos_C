#include <stdio.h>
int fib(int n);

int main(){
int f, fn;
    puts("Informe o numero da sequencia");
    scanf("%d", &fn);
    f = fib(8);
    printf("Fib%d = %d\n", fn, f);
    return 0; 
}

int fib(int n){
int fibb;
    if(n == 0){
        return 0;
    }
    if(n == 1){
        return 1;
    }
    fibb = fib(n-1) + fib(n-2); 
    return fibb;
}