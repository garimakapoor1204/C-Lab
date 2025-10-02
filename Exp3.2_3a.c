//to generate the following set of output
#include <stdio.h>
int main(){
    
    /*
      1
     23
    456
    */
    int num=1;
    int rows=3;
    for(int i=1;i<=rows;i++){
        for(int s=1;s<=rows-i;s++){
            printf(" ");
        }
        for(int j=1;j<=i;j++){
            printf("%d",num);
            num++;
        }
        printf("\n");
    }
    return 0;
}