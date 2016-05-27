#include <stdio.h>
#include <sys/msg.h>
#include <sys/ipc.h>
#include <sys/types.h>

struct s
{
	long int a;
	char tab[500];
};

int main()
{
	struct s cos;
	key_t key =7;
	int msgflg = 0666;
	int msg=msgget(key, msgflg);
	if(msg==-1)
		{
			perror("Blad otwarcia kolejki");
			return 1;
		}
	int zmienna=msgrcv(msg,&cos,500,5,IPC_NOWAIT);
	if(zmienna==-1)
		{
			perror("Blad odebrania wiadomosci");
			return 1;
		}
	printf("%s\n",cos.tab);
	return 0;
}
