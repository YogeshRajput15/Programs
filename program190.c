#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Fname[20];
    int fd=0;  //file descriptor

    printf("Enter file name to create\n");
    scanf("%s",Fname);

    fd=creat(Fname,0777);

    if(fd==-1)
    {
        printf("Unable to create file\n");
        return -1;
    }
    
    printf("File is succesfully created with FD %d",fd);

    return 0;
}