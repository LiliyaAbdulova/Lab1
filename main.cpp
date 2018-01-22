#include <QCoreApplication>
#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;
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
   for(i=0;i<size-1;i++)cout<<a[i]<<endl;
}
int main()
{
   clock_t time;
    time = clock();
    int i,size=10000;
    int a[size];
for(i=0;i<size;i++){
    a[i]=1+rand()%9000;
}
selection(a,size);
time = clock() - time;
printf("second%f", (double)time/CLOCKS_PER_SEC);
system("pause");
}
