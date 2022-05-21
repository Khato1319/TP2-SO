#include <stdint.h>
#include <scheduler.h>

#define MAX_PROCESSES 10
#define MAX_SEMS 20
#define NULL ((void *)0)

typedef struct Sem_T * Semaphore;

Semaphore my_sem_open(uint32_t id, int initialValue);

int my_sem_close(Semaphore sem);

int my_signal(Semaphore sem);

int my_wait(Semaphore sem);

void deleteProcessFromSemaphores(uint32_t pid);