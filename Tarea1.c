#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main() {
    pid_t pid = fork();

    if(pid<0){
        perror("Error al ejecutar fork");
        exit(1);
    } 
    else if(pid == 0){
        for (int i = 10000; i >= 1; i--) {
            printf("Hijo: %d\n", i);
        }
    } 
    else {
        for (int i = 1; i <= 10000; i++) {
            printf("Padre: %d\n", i);
        }
    }

    return 0;
}