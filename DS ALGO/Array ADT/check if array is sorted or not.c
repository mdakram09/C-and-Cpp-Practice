#include <stdio.h>
int main()
{
  int n, arr[1000], a = 1, d = 1, i;

  printf("Enter the size of the array\n");
  scanf("%d", &n);


  printf("Enter the array elements one by one \n");
  for (i = 0; i < n; i++)
    scanf("%d", &arr[i]);

  i = 0;

  while ((a == 1 || d == 1) && i < n - 1) {
    if (arr[i] < arr[i+1])
      d = 0;
    else if (arr[i] > arr[i+1])
      a = 0;
    i++;
  }

  if (a == 1)
    printf("The array is sorted in ascending order.\n");
  else if (d == 1)
    printf("The array is sorted in descending order.\n");
  else
    printf("The array is not sorted.\n");

  return 0;
}