#include <stdio.h>
#define min(a, b, c) ((a) < (b) ? ((a) < (c) ? (a) : (c)) : ((b) < (c) ? (b) : (c)))
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;

using namespace std;

int main() {
    int n, cntO = 0, idxE = 0, idxO = 0;
    scan(n);
    for (int i = 0, x; i < n; i++) {
        scan(x);
        if (x % 2) {
            cntO++;
            idxO = i + 1;
        } else {
            idxE = i + 1;
        }
    }
    if (cntO == 1) {
        printf("%d", idxO);
    } else {
        printf("%d", idxE);
    }
}
