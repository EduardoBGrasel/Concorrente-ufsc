#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void* routine() {
    printf("Dudu\n");
    sleep(3);
    printf("end thread 1\n");
}
void* routine2() {
    printf("Dudu2\n");
    sleep(3);
    printf("end thread 2\n");
}

int main() {

    pthread_t t1, t2;
    pthread_create(&t1, NULL, &routine, NULL); // create a thread (passing pointers)
    pthread_create(&t2, NULL, &routine2, NULL); // create a  thread (passing pointers)
    pthread_join(t1, NULL); // like wait in process
    pthread_join(t2, NULL); // like wait in process

    return 0;

}