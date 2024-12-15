using namespace std;

void
qsort(int arrLength,
    int start, int end,
    int* intArray)
{
  /**
   * Base case: start and end are equal to each
   * other, in which case nothing needs to be
   * done.  I must also include cases where start
   * is greater than end, such as when sorting a
   * subarray of length 2.
   */
  if(start >= end)
  {
    return;
  }
  int midPt = (start + end) / 2;
  /**
   * Inductive Hypothesis: There exists a program called
   * qsort() that can sort a subsection of an array of
   * size N.
   */
  int pivot=numArray[midPt];
  int i=end-1;
  int j=start;
      while(i>j)
      {
        if(numArray[i]<pivot && numArray[j]>pivot)
        {
            tmp=numArray[i];
            numArray[i]=numArray[j];
            numArray[j]=tmp;
            i--;
            j++;
        }
        else if(numArray[i]<pivot)
        {
            j++;
        }
        else if(numArray[j]>pivot)
        {
            i--;
        }
      }
  qsort(arrLength, start, midPt - 1, numArray);
  qsort(arrLength, midPt + 1, end, numArray);
}

int main(int argc, char** argv)
{
  int* valueArray = NULL;
  if(argc >= 2)
  {
     int numValues = atoi(argv[1]);
     valueArray = new int[numValues];
     for(int k = 0; k < numValues; k++)
       {
         valueArray[k] = atoi(argv[k + 2]);
       }
     qsort(argc - 2, 0, argc - 2, valueArray);
  }
  return 0;
}
