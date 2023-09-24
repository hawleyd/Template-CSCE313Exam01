#include <stdlib.h>
#include <stdio.h>
#include <iostream>

using namespace std;

int main (int argc, char *argv[])
{
    if(argc !=2)
    {
        printf("%s", "Usage: movie-rand \"movies.txt\"");
    }
    else
    {
        printf("Arg 2 is %s",argv[1]);
    }
}