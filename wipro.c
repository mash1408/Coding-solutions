#include <stdio.h>
int
check (int arr[], int index, int length)
{
  for (int i = 0; i < length; i++)
    {
      if (arr[i] == index)
	return 1;
    }
  return 0;
}

int
getPos (int arr[], int element, int length)
{
  for (int i = 0; i < length; i++)
    {
      if (arr[i] == element)
	return i;
    }
  return 0;
}

int
main ()
{
  int numStudents;
  scanf ("%d", &numStudents);
  int studScores[1000];
  for (int i = 0; i < numStudents; i++)
    {
      scanf ("%d", &studScores[i]);
    }

  int stateLevel = 0;
  scanf ("%d", &stateLevel);
  int max = studScores[0];
  int selected[stateLevel];

  for (int i = 0; i < stateLevel; i++)
    {
      max = studScores[0];
      for (int j = 0; j < numStudents; j++)
	{
	  if (studScores[j] > max && !check (selected, j, stateLevel))
	    max = studScores[j];
	}
      if (max == studScores[0])
	selected[i] = -1;
      else
	selected[i] = getPos (studScores, max, numStudents);
      printf ("%d ", max);
    }
  return 0;
}
