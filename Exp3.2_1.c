//To enter numbers till user wants
#include <stdio.h>
int main(){
    int count0, countp, countn;
    count0 = countp = countn = 0;
    char choice='y';
    do{
        int num;
        printf("Enter an integer: ");
        scanf("%d", &num);
        if(num>0) countp++;
        else if(num<0) countn++;
        else count0++;
        printf("Do you want to continue (y/n)? ");
        scanf(" %c", &choice);
    }while(choice=='y');
    printf("Zeros: %d\n", count0);
    printf("Positives: %d\n", countp);
    printf("Negatives: %d\n", countn);

    return 0;
}