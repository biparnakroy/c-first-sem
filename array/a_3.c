//Question 3:
//menu driven program for matrix operations like (+) (-) and (x) [3X3]
#include <Stdio.h>
void main()
{
   int a[][] , b[][]; //array declearation
   int m=0; //switch variable
   int i,j,k; // loop variable
   int s[][], d[][], m[][]; // array storing the value of sum diff and multiplication
   printf("ENTER THE TWO MATRICES (3x3)\n A[][]:\n");
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
      scanf("%d",&a[i][j];
      }
   }
   printf("\nB[][]:|n");
   for(i=0;i<3;i++)
   {
    for(j=0;j<3;j++)
    {
      scanf("%d",&b[i][j];
      }
   }
   printf("THE MATRICES ARE\nA[][]:\n");
   for(i=0;i<3;i++)
   {
        for(j=0;j<3j++)
        {
             printf("%d\t",a[i][j]):
             }
          printf("\n");
    }
    printf("\nB[][]:");
     for(i=0;i<3;i++)
   {
        for(j=0;j<3j++)
        {
             printf("%d\t",B[i][j]):
             }
          printf("\n");
    }
  printf("ENTER YOUR CHOICE\n 1) ADD\n2) Subtact (A-B)\n3) MULTIPLY (AB)\n");
  scanf("%d",&m);
   switch(m)
   {
      case1 1:
              for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
                      {
                        s[i][j]=a[i][j]+b[i][j];
                      }
                 }
                printf("A[][] + B[][]=");
                for(i=0;i<3;i++)
                  {
                      for(j=0;j<3;j++)
                        {
                          printf ("%d\t",s[i][j]);
                        }
                       printf("\n");
                  }
                  break;
    case1 2:
              for(i=0;i<3;i++)
                {
                    for(j=0;j<3;j++)
                      {
                        s[i][j]=a[i][j]-b[i][j];
                      }
                 }
                printf("A[][] - B[][]=");
                for(i=0;i<3;i++)
                  {
                      for(j=0;j<3;j++)
                        {
                          printf ("%d\t",d[i][j]);
                        }
                       printf("\n");
                  }  
                  break;
     case3:
            
            for(i=0;i<3;i++)
            {
               for(j=0;j<3;j++)
               {
                  for(k=0;k<3;k++)
                    m[i][j]+=a[i][k]*b[k][j];
               }
            }
      
                printf("A[][] x B[][]=");
                for(i=0;i<3;i++)
                  {
                      for(j=0;j<3;j++)
                        {
                          printf ("%d\t",m[i][j]);
                        }
                       printf("\n");
                  }  
                  break;
      default:
            prinft("WORNG INPUT");
   }
 }
 
