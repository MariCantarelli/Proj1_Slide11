void f(int n){
    if (n > 1) {
        printf("%d\n", n);
        f(n/2);
    }
}

void f(int n){
    if (n > 0) {
        for (int i = 0; i < n; i++){
            printf("%d\n", n);
            f(n-1);
        }
    }
}

void f(int n){
    if (n > 0) {
        for (int i = 0; i < n; i*=2){
            printf("%d\n", n);
            f(n-1);
        }
    }
} 

void f(int n){
    if (n > 0) {
    for (int i = 0; i < n; i++)
    printf("%d\n", n);
    f(n/2);
    }
}

void f(int n){
    if (n > 0) {
        printf("%d\n", n);
        f(n-1);
        f(n-1);
    }
}

void f(int n){
    if (n > 1) {
    for (int i=0; i < n; i++)
        printf("%d\n", n);
    f(n/2);
    f(n/2);
    }
}