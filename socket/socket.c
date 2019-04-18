/*
 * Socket Programming 
 * Author Jagannath and Ajinkya
 * */
#include<stdio.h>
#include<sys/types.h>
#include<sys/socket.h>//socket()
#include <stdlib.h>//atoi()
#include <strings.h>//bzero()
#include<string.h>
#include <netinet/in.h>
#include <unistd.h>//write() and read()

#define BACKLOG		 5

/*
 * Print Error
 * param:	
 * 	msg: char type input
 * return:
 * 	void
 * */
void error(char *msg);


int main(int argc, char *argv[])
{
	/*******   I   **********************************************************************/
	/*
	 * Create Server Sockets 
	 * */
	// Socket Input 
	//1. socket file descriptor for server and client
	//Port no and client number
	int sockfd, newsocketfd, portno, clilen;
	//Define buffer of 1024
	char buffer[1024] = { 0 };

	struct sockaddr_in serv_addr, cli_addr;
	int n;

	//check number of arguments
	if(argc < 2)
	{
		fprintf(stderr,"Error No port number is provided");
		exit(1);
	}

	//2.
	//Create master socket for bind and listen and accept
	//AF_INET for IPV4 address familiy
	//SOCK_STREAM - TCP Based protocol
	//0 for system decide protocol
	sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if(sockfd < 0)
	{
		error("Error, In Opening Socket!\n");
	}

	//Clear the structure - Options  memset() and bzero()
	//By doing clear it will clean garbage at the serv_addr
	bzero((char *) &serv_addr, sizeof(serv_addr));
	portno  = atoi(argv[1]);

	
	// struct sockaddr_in {
        //       sa_family_t    sin_family; /* address family: AF_INET */
        //       in_port_t      sin_port;   /* port in network byte order */
        //       struct in_addr sin_addr;   /* internet address */
        //   };
	// struct in_addr {
  	//  	  unsigned long s_addr;  // load with inet_aton()
	//   };
	serv_addr.sin_family = AF_INET;
	serv_addr.sin_addr.s_addr = INADDR_ANY;//Bind with all the avialable IP Addressess at host machine(IP address)
	//Its available to all the ip to each interface available like etho,wlan0 etc
	serv_addr.sin_port = htons(portno);//Network byte order

	/******* II ***********************************************************************************************************/
	/*
	 * 1. Bind System Call
	 * */
	int ret = bind(sockfd, (struct sockaddr *) &serv_addr, sizeof(serv_addr));
	if( ret < 0)
	{
		error("Error in binding!\n");
	}
	
	/******* III ***********************************************************************************************************/
	// Listen System call
	listen(sockfd, BACKLOG);
	clilen = sizeof(cli_addr);
	/******* IV ************************************************************************************************************/
	/*
	 * New sokcet will be created once connection is accepted
	 * int accept(int sockfd, struct sockaddr *addr, socklen_t *addrlen);
	 * 
	 * */
	newsocketfd = accept(sockfd, (struct sockaddr *) &cli_addr, &clilen);
	if(newsocketfd < 0)
	{
		error("Error in accepting the connection\n");
	}
	/******* V **************************************************************************************************************/
	/*
	 * Connection established
	 * Data exchange(Read and Write)
	 */
	bzero(buffer, sizeof(buffer));
	int readbytes = read(newsocketfd, buffer, sizeof(buffer));
	if (readbytes < 0)
	{
		error("Error in reading from socket\n");
	}

	//Print data what you got from socket
	printf("The Message Received: %s\n", buffer);
	/*
	 * ssize_t write(int fd, const void *buf, size_t count);
	 * */
	char *successMsg = "Hey Ajinkya! Recevied!";
	int writebytes = write(newsocketfd, successMsg, strlen(successMsg));
	if(writebytes < 0 )
	{
		error("Error in Writting\n");
	}
	return 0;
}

void error(char *msg)
{
	perror(msg);
	exit(1);
}
