#include <stdio.h>
#include <stdlib.h>

#include<netdb.h>
#include<netinet/in.h>

#include<string.h>

int main(int argc, char *argv[])
{
    int sockfd, port_no , n;
    struct sockaddr_in serv_addr;
    struct hostent *server;
    struct sockadd

    char buffer[1024];

    if (argc < 3) {
        fprintf(stderr,"Port and host not specified\n");
        exit(0);
    }
    //Read port number
    port_no = atoi(argv[2]);

    /*******************************************************************************/
    //1. Create Socket Point
    /*******************************************************************************/
    sockfd = socket(AF_INET,SOCK_STREAM, 0);

    if (sockfd < 0) {
        fprintf(stderr,"Socket\n");
        exit(0);
    }
    
    //Get the host name 
    server = gethostbyname(argv[1]);

    if (server == NULL) {
        fprintf(stderr, "Error, no such host available");
    }

    bzero((char * ) &serv_addr, sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(port_no);

    /**********************************************************/
    //2. Connect with server
    /**********************************************************/
    int ret = connect(sockfd,(struct sockaddr_in *) serv_addr, sizeof(serv_addr));
    if(ret < 0)
    {
        fprintf(stderr,"Error in Connect\n");
        exit(0);
    }
    /**********************************************************/
    //2. Send/Receive Message to server
    /**********************************************************/
    //Read form stdin
    printf("Enter the message for transmit");
    memset(buffer,0,strlen(buffer));
    //bzero(buffer,sizeof(buffer));
    fscanf(stdin,"%s",buffer);
    
    //Write the buffer to server socket
    n =  write(sockfd,buffer,strlen(buffer));

    //if fails
    if (n < 0){
        perror("Error in write to socket\n");
        exit(0);
    }

    //Receive
    memset(buffer,0,strlen(buffer));
    n = read(sockfd, buffer, 1024);
    if (n < 0)
    {
        fprintf(stderr,"Error in Read\n");
    }

    printf("Received => %s",buffer);


    return 0;
}