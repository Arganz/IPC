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
	int msgflg = IPC_CREAT | 0666;
	scanf("%s",cos.tab);
	cos.a=5;
	int msg=msgget(key, msgflg);
	if(msg==-1)
		{
			perror("Blad utworzenia kolejki");
			return 1;
		}
	msgsnd(msg,&cos,500,0);
	return 0;
}
