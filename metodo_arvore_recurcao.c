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