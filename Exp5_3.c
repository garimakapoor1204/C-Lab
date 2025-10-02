#include <stdio.h>

int main() {
    int n,i,x,count=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    scanf("%d",&x);
    for(i=0;i<n;i++) if(a[i]==x) count++;
    printf("Frequence of %d is %d\n",x, count);
    return 0;
}