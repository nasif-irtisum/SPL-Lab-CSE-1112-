#include <stdio.h>
int main ()
{
    int n; scanf ("%d", &n);

    for (int i=1; i<=n; i++) {
        if (i==n) printf ("%d\n", i);
        else printf ("%d, ", i);
    }
    return 0;
}
