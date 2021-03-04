#include "sum.h"

int Array[1000] = {};
int sum[10] = {};

void *task_body(void *pv) {
  int i, ps, temp, thread_num = (__intptr_t)pv;
  for (i = 0; i <= 100; i++)
    //Adding 100 Array Values
    sum[i] += Array[ thread_num * 100 + i]; 
}

int sumof1000() {

  int i, k = 0, n = 10, final_sum = 0;
  pthread_t ptarr[n];
  srand(time(0));

  for(i=0; i<1000; i++) {
    //Assigning Random Value to Array
    Array[i] = random()%10;
  }

  for (i = 0; i < n; i++) {
    //Create a Thread to Add 100 Array Values
    pthread_create(&ptarr[i], NULL, task_body, (void *)(__intptr_t)i);
  }

  for (i = 0; i < n; i++)
    pthread_join(ptarr[i], NULL);

  for(i=0; i<100; i++)
  {
    //Adding the Results from Thread to get Final value
    final_sum += sum[i]; 
  }
  return final_sum; 
}
