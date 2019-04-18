#include<stdio.h>
#include<sys/types.h>
#include<string.h>
#include<netdb.h>
#include<netinet/in.h>
#include<stdlib.h>
#include<netdb.h>
#include <netinet/in.h>
#include <unistd.h>//write() and read()


int main(int argc, char *argv[])
{
	int sockfd, portno, n;
	struct sockaddr_in serv_addr;
	struct hostent *server;

	char buffer[1024];

	if(argc < 3)
	{
		fprintf(stderr,"Usage Error %s hostname port\n", argv[0]);
		exit(0);
	}

	portno = atoi(argv[2]);
	sockfd = socket(AF_INET, SOCK_STREAM, 0);

	if(sockfd < 0)
	{
		fprintf(stderr, "Socket Not created\n");
	}

	server = gethostbyname(argv[1]);
	if(server == NULL)
	{
		fprintf(stderr, " Host invalid\n");
	}

	bzero((char *) &serv_addr, sizeof(serv_addr));
	serv_addr.sin_family = AF_INET;

	bcopy((char *)server->h_addr, (char *)&serv_addr.sin_addr.s_addr, server->h_length);
	serv_addr.sin_port = htons(portno);

	/*
	 * Connect system call - Sending request
	 * */
	int consuccess =  connect(sockfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr));
	if(consuccess < 0)
	{
		fprintf(stderr, "Error in connecting\n");
	}
	bzero(buffer,strlen(buffer));
	printf("Ente MSG: ");
	fscanf(stdin,"%s",buffer);
	n = write(sockfd, buffer, strlen(buffer));
	if(n < 0)
	{
		fprintf(stderr, "Write failed\n");
	}
	bzero(buffer, strlen(buffer));
	int nbytes = read(sockfd, buffer, strlen(buffer));
	if(nbytes < 0)
	{
		fprintf(stderr, "Read Failed\n");
	}

	printf("Received : %s", buffer);
	return 0;
}
