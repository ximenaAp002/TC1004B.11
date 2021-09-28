#include <stdio.h>
#include <unistd.h>

int main(){
    int pid = fork();
    if (pid == 0){
        printf("Soy el prceso hijo: pid =%d \n",pid);
    } else {
        printf("Soy el proceso padre: pid =%d \n",pid);
    }
    return 0;
}