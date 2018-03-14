#include <QCoreApplication>
#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;
void line(int *a,int n){
    int min,mesto,k,i;
    for(int i=1;i<=n;i++)
       {
               min=a[i];
               for(int j=i+1;j<=n;j++)
               {
                       if (min>a[j])
                       {
                                    min=a[j];
                                    mesto=j;
                       }
               }
               k=a[i];
               a[i]=min;
               a[mesto]=k;
       }
    for(i=0;i<n-1;i++)cout<<"*"<<a[i]<<endl;
}
void selection(int *a,int size)
{
   int i,j,mx,nmx;
   for(i=0;i<size-1;i++){
       mx=a[i];
   nmx=i;
  for(j=i+1;j<size-1;j++){
      if (a[j]<mx)
   {
   mx=a[j];
    nmx=j;
      }
   }
   a[nmx]=a[i];
           a[i]=mx;
}
   for(i=0;i<size-1;i++)cout<<"#"<<a[i]<<endl;
}

void radix(int *ar, int *br, int *cr, int sizeC, int sizeAB)
{
    int i,k,n;
    k = sizeC;
    n = sizeAB;
    for (i = 0; i <= k; i++)
        cr[i]=0;
    for (i = 0; i < n; i++)
        cr[ar[i]]+=1;
    for (i = 1; i < k+1; i++)
        cr[i]+=cr[i-1];
    for (i = n-1; i >= 0; i--)
      {
         br[cr[ar[i]]-1]=ar[i];
         cr[ar[i]]-=1;
      }for(i=0;i<n-1;i++)cout<<"-"<<ar[i]<<endl;
  }
int main()
{
   clock_t time;
    time = clock();
    int i,size=10000;
    int a[size];
    int b[size];
    int c[size];
for(i=0;i<size;i++){
    a[i]=1+rand()%10000;
}
for(i=0;i<size;i++){
    b[i]=1+rand()%10000;
}
//radix(a,b,c,size,size);
selection(a,size);

time = clock() - time;
cout<<endl<<"Time=";
printf("second%f", (double)time/CLOCKS_PER_SEC);
cout<<endl;
//line(b,size);
system("pause");
}
