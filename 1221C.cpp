#include <stdio.h>
#define min(a, b, c) ((a) < (b) ? ((a) < (c) ? (a) : (c)) : ((b) < (c) ? (b) : (c)))
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;

using namespace std;

int main() {
    int q;
    scan(q);
    for (int i = 0, c, m, x; i < q; i++) {
        scan(c);
        scan(m);
        scan(x);
        printf("%d\n", min(c, m, (c + m + x) / 3));
    }
}
