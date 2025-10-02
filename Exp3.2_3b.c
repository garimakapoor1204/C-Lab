//to generate the following set of output
#include <stdio.h>
int main(){
    
    /*
    1
    11
    121
    1331
    14641
    */
    int rows = 5;
    for(int i=0; i<rows; i++){
        int number = 1;
        for(int j=0; j<=i; j++){
            printf("%d", number);
            number = number * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}