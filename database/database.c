#include <stdio.h>
#include <netdb.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

#define sa struct sockaddr

#define max 80
#define port 8080

void create_table(char table)
void drop_table(char table)

int main()
{
    int sock, connfd, len;
    struct sockaddr_in servaddr, cli;
    
    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = htonl(INADDR_ANY);
    servaddr.sin_port = htons(port);
  
    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock == -1) {
        printf("socket creation failed...\n");
        exit(0);
    }
  
}
  
void create_table(char table)
{
    FILE *fp;
    fp = fopen(table);
}

void drop_table(char table)
{
    if(remove(table) == 0){
        printf("The file is deleted successfully.");
    }
    else{
        printf("The file is not deleted.");
    }
}
