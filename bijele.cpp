#include<iostream>
int main() {
    int in;
    int e[] = {1,1,2,2,2,8};
    for(int i=0;i<6;i++) {
        scanf("%d", &in);
        printf("%d", e[i]-in);
        if (i<5) printf(" ");
    }
}