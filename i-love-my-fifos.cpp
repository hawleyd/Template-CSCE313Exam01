#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>
#include <fcntl.h>
#include <assert.h>

using namespace std;

int main()
{
    //for parent and child communication
 /*
    const int MAX_FILE_SIZE = 1000;
    const char *FIFO = "MY_FIFO";
    int fifo_writer = open (FIFO, O_CREAT|O_WRONLY);
    assert (fifo_writer != -1);
    
    int fifo_reader = open (FIFO, O_RDONLY);
    assert (fifo_reader != -1);


    char message_C[MAX_FILE_SIZE];
    char message_P[MAX_FILE_SIZE];
   
    pid_t c1_pid;
    pid_t c2_pid;
*/


    //fork the first child process
    
        //parent is reading
  
       
        //child here, recall fork to get second child
        
        //child 1 here
       
    
        //child 1 writes message to parent

       //now close the fifo
       
            //second child here
       
	return 0;
}