#include <stdio.h>
#include <time.h>

int binsearch(int, int[], int);
int binsearch2(int, int[], int);

int main(void)
{
  int x = 41;
  int n = 10;
  int v[] = {2, 4, 7, 11, 21, 26, 32, 38, 41, 55, 61, 71, 84, 94, 97, 101, 106, 110, 117, 120, 125, 138, 139, 141, 146, 148, 150};
  clock_t t;
  t = clock();
  int one = binsearch(x, v, n);
  t = clock() - t;
  printf("binsearch  position: %i - taking: %f\n", one,
         (double)t / CLOCKS_PER_SEC);
  t = clock();
  int two = binsearch2(x, v, n);
  t = clock() - t;
  printf("binsearch2 position: %i - taking: %f\n", two,
         (double)t / CLOCKS_PER_SEC);
}

int binsearch(int x, int v[], int n)
{
  int low, high, mid;
  low = 0;
  high = n - 1;
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (x < v[mid])
      high = mid - 1;
    else if (x > v[mid])
      low = mid + 1;
    else
      return mid;
  }
  return -1;
}

int binsearch2(int x, int v[], int n)
{
  int low, high, mid;
  low = 0;
  high = n - 1;
  while (high - low > 2)
  {
    mid = (low + high) / 2;
    if (x <= v[mid])
      high = mid - 1;
    else
      low = mid + 1;
  }
  if (v[low] == x)
    return low;
  else if (v[high] == x)
    return high;
  else
    return -1;
}
