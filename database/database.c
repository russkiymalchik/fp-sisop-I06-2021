#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

#define MAX 80
#define PORT 8080
#define SA struct sockaddr

void create_table(char table)
void drop_table(char table)
void func(int sock)

int main()
{
    int sock, connfd, len;
    struct sockaddr_in servaddr, cli;
    
    //Assign IP, PORT
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(PORT);
  
    //Socket create and verification
    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == -1) 
    {
        printf("socket creation failed...\n");
        exit(0);
    }
    else
    {
        printf("Socket successfully created..\n");
    }
  
}
  
//Function to create table
void create_table(char table)
{
    FILE *fp;
    fp = fopen(table);
}

//Function to drop table
void drop_table(char table)
{
    if(remove(table) == 0)
    {
        printf("The file is deleted successfully.");
    }
    else
    {
        printf("The file is not deleted.");
    }
}

//Function to chat between client and server
void func(int sock)
{
    
}
  
