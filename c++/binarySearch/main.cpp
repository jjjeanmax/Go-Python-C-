#include <iostream>
#include <chrono>
using namespace std;

int binarySearch(int array[], int x, int low, int high) {
  
	// Repeat until the pointers low and high meet each other
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      cout<<array[mid];
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int main(void) {
    typedef std::chrono::high_resolution_clock Time;
    typedef std::chrono::milliseconds ms;
    typedef std::chrono::duration<float> fsec;
    auto t0 = Time::now();
    unsigned seed = time(0);
    srand(seed);
    int array[10000];
    int i;
    for(i = 0; i<10000; i++) {
       array[i]=rand()%100; //Generate number between 0 to 99
        //  cout << array[i];
    }
  int x = 555;
  int n = sizeof(array) / sizeof(array[0]);
  printf("\n");
  int result = binarySearch(array, x, 0, n - 1);
  if (result == -1)
    printf("Not found\n");
  else
    printf("Element is found at index %d\n", result);
  fsec duration = Time::now() - t0;
  std::cout << duration.count() << "s\n";
}