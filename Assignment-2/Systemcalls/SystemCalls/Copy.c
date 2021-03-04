#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int f1, f2, nbytes;

    //Opening S1 to read the data from the file
	f1 = open("Sample1.txt",O_RDONLY);

    //Opening Sample2 to write the data which is in S1 to S2
	f2 = open("Sample2.txt",O_WRONLY|O_CREAT, 0666);

    //Checking the condition of the file
	if(f1<0 || f2<0)
	{
		perror("open");
		exit(1);
	}
	int maxlen = 128;
	char buf[maxlen];
	nbytes=read(f1,buf,maxlen);
    //Checking the data is addded or not
	if(nbytes<0)
	{
		perror("read");
		exit(2);
	}
    //Writing read into Sample2
	write(f2,buf,nbytes);

    //Closing the files which are opened
	close(f1);
    close(f2);
	return 0;
}
