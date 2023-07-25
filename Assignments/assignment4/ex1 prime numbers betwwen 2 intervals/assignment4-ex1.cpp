#include <stdio.h>


int is_prime(int num) {
    if (num <= 1) {
    	
        return 0;
    }

    for (int i = 2; i < num; i++) {
        if (num % i == 0) {
            return 0;
        }
    }

   
}

int main() {
    int x, y;

    printf("Enter two numbers (intervals): ");
    scanf("%d %d", &x, &y);

    printf("Prime numbers between %d and %d are: ", x, y);
    for (int n = x; n <= y; n++) {
        if (is_prime(n)) {
            printf("%d ", n);
        }
    }

 

    return 0;
}

