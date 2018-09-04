#include <iostream>
int main() {
    long long a,b;
    while (scanf("%lli %lli", &a, &b) != EOF)
        printf("%lli\n",(a>b)?(a-b):(b-a));
    return 0;
}