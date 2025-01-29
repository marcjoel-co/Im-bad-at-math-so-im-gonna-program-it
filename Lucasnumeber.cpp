#include <cstdio>

int main(){
    int n = 1, n2 = 3;

    printf("%d\n", n);
    while(n2 < 1000){
        
        printf("%d\n", n2);
        int temp = n2;
        n2 = n + n2;
        n = temp;
    }
}