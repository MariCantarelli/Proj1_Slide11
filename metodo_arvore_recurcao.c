void f(int n){
    if (n > 1) {
        printf("%d\n", n);
        f(n/2);
    }
}