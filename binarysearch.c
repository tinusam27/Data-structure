#include <stdio.h>
int main()
    {
       int c, first, last, middle, n,s, array[100];
       printf("enter number of elements\n");
       scanf("%d",&n);
       printf("enter %d integers\n", n);
       for (c = 0; c < n; c++)
          {
          scanf("%d",&array[c]);
          }
       printf("enter value to find\n");
       scanf("%d", &s);
     
       first = 0;
       last = n - 1;
       middle = (first+last)/2;
     
       while (first <= last) 
       {
          if (array[middle] < s)
             first = middle + 1;    
          else if (array[middle] == s) 
          {
             printf("%d is present at location %d\n",s,middle+1);
             break;
          }
          else
             last = middle - 1;
             middle = (first + last)/2;
       }
       if (first > last)
          printf("%d is not present in the list\n", s);
     return 0;  
    }
