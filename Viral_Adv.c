#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    int a=5,b,c=0;
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++ ){
        a=floor(a/2);
        b=a*3;
        c=a+c;
        a=b;
    }
    printf("%d",c);
    return 0;
}
