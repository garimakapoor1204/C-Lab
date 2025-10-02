#include <stdio.h>

int main()
{
  int n, i, pos = 0, neg = 0, odd = 0, even = 0;
  scanf("%d", &n);
  int a[n];
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (i = 0; i < n; i++)
  {
    if (a[i] > 0)
      pos++;
    else if (a[i] < 0)
      neg++;
    if (a[i] % 2 == 0)
      even++;
    else
      odd++;
  }
  printf("Positive: %d\nNegative: %d\nOdd: %d\nEven: %d\n", pos, neg, odd, even);
  return 0;
}
