#include <stdio.h>
#include <stdlib.h>
#include "cluster.h"

void send_sector(BUFFER *sector){
	//TODO send the sector to a node
}

int create_socket(){
	return socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
}
void create_connections(CONNECTION *con, BUFFER *buf, ADDRESS *list){
	struct sockaddr_in ip_address;

	con[0].sector = buf[0];
	con[0].socket = create_socket();
	con[0].ip = list[0];
	//con[0].thread = pthread_create(con[0].thread, NULL, thread_work);
	// TODO send the stuff on a new thread
}

void create_buffer(BUFFER *buffer, BUFFER *shared, BUFFER *data){
	buffer[0].size = sizeof(*shared) + sizeof(*data);
	buffer[0].shared = (unsigned char *) shared;
	buffer[0].data = (unsigned char *) data;
}

void create_addresses(ADDRESS *list){
	//TODO gotta make the ip address
	ADDRESS address;
}


void make_slices(BUFFER sector, int offset){
	//TODO STYLUS of a record player
}

int send_to_buffer(BUFFER *shared, BUFFER *data){
	CONNECTION connections[2];
	ADDRESS address[2];
	BUFFER buffer[2];
	create_addresses(&address[0]);
	create_buffer(&buffer[0], shared, data);
	create_connections(&connections[0], &buffer[0], &address[0]);

	return 0; //Make error codes?
}
