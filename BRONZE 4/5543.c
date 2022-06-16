#include <stdio.h>

int main()
{
    int b1, b2, b3, d1, d2, bm, dm;
    scanf("%d %d %d %d %d", &b1, &b2, &b3, &d1, &d2);
    
    if(b1 < b2 && b1 < b3)
        bm = b1;
    else if(b2 < b1 && b2 < b3)
        bm = b2;
    else
        bm = b3;
        
    if(d1 < d2)
        dm = d1;
    else
        dm = d2;
        
    printf("%d", bm + dm - 50);
    return 0;
}
