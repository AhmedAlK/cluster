#ifndef CLUSTER_H
#define CLUSTER_H

#include <pthread.h>
#include <sys/socket.h>
#include <arpa/inet.h>

typedef struct sockaddr_in ADDRESS;

typedef struct _buffer {
	int size;
	int offset; //TODO not done
	unsigned char *head;
	unsigned char *shared;
	unsigned char *data;
}BUFFER;

typedef struct _connection {
	BUFFER sector;
	ADDRESS ip;
	pthread_t thread;
	int socket;
}CONNECTION;

//whups
CONNECTION create_connections(char *ip, int port, (void *)function_name);
BUFFER create_buffer(unsigned char *shared, unsigned char *data);
int send_to_cluster(buffer);

#endif
