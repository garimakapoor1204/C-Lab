#include <stdio.h>

int main()
{
  int n, i, max1, max2;
  scanf("%d", &n);
  int a[n];
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  if (a[0] > a[1])
  {
    max1 = a[0];
    max2 = a[1];
  }
  else
  {
    max1 = a[1];
    max2 = a[0];
  }
  for (i = 2; i < n; i++)
  {
    if (a[i] > max1)
    {
      max2 = max1;
      max1 = a[i];
    }
    else if (a[i] > max2 && a[i] != max1)
      max2 = a[i];
  }
  printf("Second max element: %d\n", max2);
  return 0;
}
