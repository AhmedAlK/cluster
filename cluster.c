#include <stdio.h>
#include <stdlib.h>
#include "cluster.h"

void send_sector(BUFFER sector){
	//TODO send the sector to a node
}

CONNECTION create_connections(char *ip, int port, BUFFER sector){
	CONNECTION con;
	struct sockaddr_in ip_address;
	con.sector = create_buffer(shared, data);

	void (*thread_work)(sector) = &send_sector;
	
	con.socket = create_socket();
	con.ip = create_ip(ip, port);
	con.thread = pthread_create(con.thread, NULL, );
	// TODO send the stuff on a new thread
	return con;
}

BUFFER create_buffer(unsigned char *shared, unsigned char *data){
	BUFFER buffer;
	buffer.size = sizeof(*shared) + sizeof(*data);
	buffer.shared = shared;
	buffer.data = data;
	return buffer;
}

ADDRESS create_ip(char *ip, int port){
	//TODO gotta make the ip address
	ADDRESS address;
	return address;
}

int create_socket(){
	return socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
}

void set_stylus(BUFFER sector, int offset){
	//TODO STYLUS of a record player
}

int send_to_buffer(unsigned char *shared, unsigned char *data){
	CONNECTION connections[2];
	const char *nodes[2];
	nodes[0] = "10.10.10.2";
	nodes[1] = "10.10.10.3";
	create_connections(connections, nodes, 2000);

	return 0; //Make error codes?	
}
