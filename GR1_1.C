#include<stdio.h>
 int multiplyNumbers(int n);
int main() {
    int n;
    printf("Enter a +ve integer: ");
    scanf("%d",&n);
    printf("Fact of %d = %ld", n, multiplyNumbers(n));
    return 0;
}

 int multiplyNumbers(int n) {
    if (n>=1)
        return n*multiplyNumbers(n-1);
    else
    return 1;
}
