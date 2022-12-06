
#include <stdio.h>
#include <string.h>

int main()
{

  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++)
  {

    int N, k;

    scanf("%d%d", &N, &k);
    int d = (N * k - 1) % 4;
    if (N % 2 == 0 && k % 2 == 0)
    {
      printf("0\n");
    }
    else
    {
      if (N > k)
      {
        if (d > k)
        {
          printf("%d\n", k);
        }
        else
        {
          printf("%d\n", (N * k - 1) % 4 + 1);
        }
      }
      else
      {
        if (d > N)
        {
          printf("%d\n", N);
        }
        else
        {
          printf("%d\n", (N * k - 1) % 4 + 1);
        }
      }
    }
  }
}