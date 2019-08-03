#include<stdio.h>

int arr[101],count=1;

void insert(int d)
{ int x,y,z;

  if(arr[1]==0)
  {arr[1]=d;
   count=count+1;
  }

 else
 { arr[count]=d;
   x=count;


   while(x>1)
   { y=x/2;

    if(arr[y]<arr[x])
    {z=arr[y];
     arr[y]=arr[x];
     arr[x]=z;
     x=x/2;
    }

    else if(arr[y]>=arr[x])
    break;
   }

  count=count+1;

 }

}


void delete()
{ int i=1,z;

  arr[1]=arr[count-1];
  count=count-1;

  while(i<=(count-1))
 { if(arr[2*i]>=arr[(2*i)+1] && arr[2*i]>arr[i]  && (2*i)<count)
   {z=arr[i];
    arr[i]=arr[2*i];
    arr[2*i]=z;
    i=2*i;
     }

     else if(arr[2*i]<arr[(2*i)+1] && arr[(2*i)+1]>arr[i] && (2*i)<count)
     {z=arr[i];
      arr[i]=arr[(2*i)+1];
      arr[(2*i)+1]=z;
      i=(2*i)+1;
     }

     else
     break;
   }
  }


  int main()
  { int i,d,y,j;
   for(j=1;;j++)
  { printf("1.Insert an element\n");
    printf("2.Delete\n");
    printf("3.Print\n");
    printf("4.Exit\n");
    scanf("%d",&d);

    if(d==1)
    { printf("enter the element\n");
      scanf("%d",&y);
      insert(y);
    }
    else if(d==2)
    { if(count==1)
      printf("Heap is empty\n");
      else
      delete();
    }
    else if(d==3)
   { if(count==1)
     printf("Heap is empty\n");
     else
     {for(i=1;i<=(count-1);i++)
     printf("%d ",arr[i]);
      printf("\n");}
   }
    else
    break;
  }
  return 0;
}
