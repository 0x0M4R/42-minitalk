#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <stdio.h>/*
static void	ft_kill(int pid, char *str)
{
	int		i;
	char	c;
	while (*str)
	{
		i = 8;
		c = *str++;
		while (i--)
		{
			if (c >> i & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(100);
		}
	}*/
int main(int ac, char **av)
{
    if (ac!=3)
    {
        printf("error. wrong arguments");
        return 0;
    }
    //printf("%d\n",atoi(av[2]));
    //printf("%d",kill(atoi(av[1]),SIGUSR1));
    int i=0;
    //for each character in av[2]
    //h is 01101000 in binary
    while(*av[1])
    {
        //printf("%c",*av[1]);
        //for every bit check if its zero or one
        i=7;
        while(i>=0)
        {
            if(((*av[1]>>i)&1)==1)
            {
            printf("1");
            kill(atoi(av[2]),SIGUSR1);
            }
            else
            {
            printf("0");
            kill(atoi(av[2]),SIGUSR2);
            }
            usleep(10);
            i--;
        }
        printf(" ");
        //break;
        av[1]++;
    }
    
    //make sigaction struct
    //struct sigaction sa;
    //print pid
    //printf("PID : %d",getpid());
    //ft_kill(atoi(av[2]),)
    //sa.sa_sigaction = sig_handler;
    //initialize structure with 0;
}