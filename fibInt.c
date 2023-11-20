#include <stdio.h>

int fibInt(int f0, int f1, int n);

int main(){
int f, fn, f0 = 0, f1 = 1; 
    puts("Informe a sequencia fibb:");
    scanf("%d", &fn);
    
    f = fibInt(f0, f1, fn);
    printf("fib%d = %d\n", fn);
    return 0;
}

int fibInt(int f0, int f1, int n){
int i, fib_current, fib_prev, fib_next;
    if(n == 0){
        return f0;
    }
    if(n == 1){
        return f1; 
    }
    fib_prev = f0;
    fib_current = f1;
    for(i = 0; i < n+1; i++){
        fib_next = fib_prev + fib_current;
        fib_prev = fib_current;
        fib_current = fib_next; 
    }
    return fib_next; 
}