#include<iostream>
#include <chrono>

using namespace std;
int main ()
{
   typedef std::chrono::high_resolution_clock Time;
   typedef std::chrono::milliseconds ms;
   typedef std::chrono::duration<float> fsec;
   auto t0 = Time::now();
   unsigned seed = time(0);
   srand(seed);
   int i, j,temp,pass=0;
   int a[10000];
   cout <<"Input list ...\n";
   for(i = 0; i<10000; i++) {
       a[i]=rand()%100; //Generate number between 0 to 99
      cout <<a[i]<<"\t";
   }
cout<<endl;
for(i = 0; i<10000; i++) {
   for(j = i+1; j<10000; j++)
   {
      if(a[j] < a[i]) {
         temp = a[i];
         a[i] = a[j];
         a[j] = temp;
      }
   }
pass++;
}
cout <<"Sorted Element List ...\n";
for(i = 0; i<10000; i++) {
   cout <<a[i]<<"\t";
}
cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
fsec duration = Time::now() - t0;
std::cout << duration.count() << "s\n";
return 0;
}