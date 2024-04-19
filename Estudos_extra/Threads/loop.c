#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <pthread.h>

void* routine() {
    printf("Dudu\n");
    sleep(3);
    printf("end thread 1\n");
}

int main() {
    pthread_t thread[4];
    for (int i = 0; i < 4; i++) {
        if (pthread_create(&thread[i], NULL, &routine, NULL) != 0) {
            perror("failed to create the thread");
            return 1;
        };
    }
    return 0;
}