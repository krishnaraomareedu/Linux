#include "ServerClient.h"

int main()
{
	int ret;
	mqd_t mqid3;
	struct mq_attr attr;
	attr.mq_msgsize=256;
	attr.mq_maxmsg=10;
	//Message Queue in Server Process
	mqid3=mq_open("/mque1",O_WRONLY|O_CREAT,0666,&attr);
	if(mqid3<0)
	{
		perror("mq_open");
		exit(1);
	}
	char str1[]="temp.c";
	int len=strlen(str1);
	ret=mq_send(mqid3,str1,len+1,5);
	if(ret<0)
	{
		perror("mq_send");
		exit(2);
	}
	mq_close(mqid3);
	return 0;
}
