#include <stdio.h>
int main(){
    //find all ramanujan number upto limit 20
    int limit = 20;
    int count = 0;
    printf("Ramanujan numbers using pairs 1 to %d are:\n", limit);
    for(int a=1; a<=limit; a++){
        for(int b=a; b<=limit; b++){
            int sum1 = a*a*a + b*b*b;
            for(int c=1; c<=limit; c++){
                for(int d=c; d<=limit; d++){
                    int sum2 = c*c*c + d*d*d;
                    if(sum1 == sum2 && (a != c || b != d)){
                        printf("%d^3 + %d^3 = %d", a, b, sum1);
                        printf("%d^3 + %d^3 = %d\n", c, d, sum2);
                        count++;
                    }
                }
            }
        }
    }
    return 0;
}