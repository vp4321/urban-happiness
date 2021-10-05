#include<stdio.h>
#include<sys/types.h>
#include <unistd.h>

void main (void)
{
    int i=0;  i++;
    
	if(fork())  // creates a child process
	{
		//  code executed by original parent
		for(;;) {} 
	}
	else
	{
		//  code executed by new child
		for(;;) {}
	}

}
