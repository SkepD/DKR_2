#include <stdio.h>
#include <stdlib.h>

void printArray(int N);
int mostFrequent(int N);
int frequency(int N, int element);
int array[20];

int main()
{
int N,most_frequent,i,x;

do{
printf("Enter the size of the array [1-20]:");
scanf("%d", &N);
}while (N < 1 || N > 20);

system("cls");

for (i = 0; i < N; i++) {
    do {
        printf("Type element[%d][-3;3]: ",i);
        scanf("%d", &x);
    } while (x < -3 || x > 3);
array[i] = x;
}
system("cls");

most_frequent = mostFrequent(N);

printArray(N);

printf("\nThe most frequent element is %d and it appears %d times.\n", most_frequent, frequency(N, most_frequent));
getch();
return 0;
}

//------------------------------------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------------------------------------


void printArray(int N)
{
  int i;
  printf("Your array is:\n");
  for (i = 0; i < N; i++)
  {
    printf("%d ", array[i]);
  }
}


int mostFrequent(int N)
{
  int i, max_count = 0, max_element = array[0];
  for (i = 0; i < N; i++)
  {
    int count = frequency(N, array[i]);
    if (count > max_count)
    {
      max_count = count;
      max_element= array[i];
}
}
return max_element;
}


int frequency(int N, int element)
{
  int i, count = 0;
  for (i = 0; i < N; i++)
  {
    if (array[i] == element)
    {
      count++;
    }
  }
  return count;
}
