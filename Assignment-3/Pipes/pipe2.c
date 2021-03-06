#include "pipes.h"

void main() 
{
    char str[256]="start"; 
    int fifo_w,fifo_r; 
    while(strcmp(str,"end")!=0)   
    {   
        fifo_w= open("pipeA",O_WRONLY);   
        if(fifo_w<0)     
            printf("\nError opening pipe");   
        else     
        {     
            printf("chat2: ");     
            scanf("%s",str);     
            write(fifo_w,str,255*sizeof(char));     
            close(fifo_w);     
        }
        
        fifo_r=open("pipeB",O_RDONLY);

        if(fifo_r<0)     
            printf("\nError opening write pipe");   
        else     
        {     
            read(fifo_r,str,255*sizeof(char));     
            close(fifo_r);     
            printf("\n%s",str);     
        }   
    }
} 