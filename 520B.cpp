#include <stdio.h>
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;

using namespace std;

int main() {
    int n, m;
    scan(n);
    scan(m);
    if (m < n) {
        printf("%d", n - m);
        return 0;
    }
    int cnt = 0;
    while (n < m) {
        if (m % 2) {
            m++;
        } else {
            m /= 2;
        }
        cnt++;
    }
    printf("%d", cnt + n - m);
}
