#include <cstdio>

int main () {
    int n1 = 1, n2 = 1;


    // fibonacci Encriment
    printf("%d\n", n1);
 
    while(n2 <= 1000) {
        printf("%i\n", n2);
        int n3 = n2;
        n2 = n1 + n2;
        n1 = n3;
        

    }
    
}