#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <stdio.h>
//sigaction struct
/*
struct sigaction
{
    void (*sa_handler)(int);
    void (*sa_sigaction)(int, siginfo_t *, void *);
    sigset_t sa_mask;
    int sa_flags;
    void (*sa_restorer)(void);
};
*/
/*
  write
◦ ft_printf and any equivalent YOU coded
◦ signal
◦ sigemptyset
◦ sigaddset
◦ sigaction
◦ kill
◦ getpid
◦ malloc
◦ free
◦ pause
◦ sleep
◦ usleep
◦ exit*/
//signal handler
void  sig_handler(int signal)
{
    static int charcount;
    if (!charcount)
    charcount=0;
    //check each signal for 8 bytes.char
    //print char.
    if (signal==SIGUSR1)
    write(1,"1",1);
    else
    write(1,"0",1);
    charcount++;
    if (c)
}
int main()
{
    //make sigaction struct
    //struct sigaction sa;
    //print pid
    signal(SIGUSR1, sig_handler);
    signal(SIGUSR2, sig_handler);
    //check if signal returns error!!
    /*
    if (signal(SIGINT, SIGINT_handler) == SIG_ERR) {
          printf("SIGINT install error\n");
          exit(1);
     }
     if (signal(SIGQUIT, SIGQUIT_handler) == SIG_ERR) {
          printf("SIGQUIT install error\n");
          exit(2);
     } */
    printf("PID : %d\n",getpid());
    
    //sa.sa_sigaction = sig_handler;
    while(42);
    //initialize structure with 0;
}