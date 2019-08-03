#include <stdio.h>

int arr[100];

void heapify(int arr[], int n, int i)
{
        int largest = i;
        int l = 2*i + 1;
        int r = 2*i + 2;
    int z;


        if (l < n && arr[l] > arr[largest])
                largest = l;


        if (r < n && arr[r] > arr[largest])
                largest = r;


        if (largest != i)
        {

        z=arr[i];
        arr[i]=arr[largest];
        arr[largest]=z;

                heapify(arr, n, largest);
        }
}


void heapSort(int arr[], int n)
{ int i,z;

        for ( i = n / 2 - 1; i >= 0; i--)
                heapify(arr, n, i);


        for (i=n-1; i>=0; i--)
        {


        z=arr[0];
        arr[0]=arr[i];
        arr[i]=z;


                heapify(arr, i, 0);
              }
      }


      void printArray(int arr[], int n)
      { int i;

              for (i=0; i<n; ++i)
          printf("%d ",arr[i]);
              printf("\n");
      }

      int main()
      {  int i,n;

         printf("Please enter size of array\n");
         scanf("%d",&n);

         printf("Please enter elements\n");

         for(i=0;i<n;i++)
         scanf("%d",&arr[i]);

              heapSort(arr, n);

              printf("Sorted Array: ");
              printArray(arr, n);
      }
