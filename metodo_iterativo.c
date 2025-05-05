void f(int n){
    if (n > 0) {
        printf("%d\n", n);
        f(n - 1);
    }
}