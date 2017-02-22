#ifndef CLUSTER_H
#define CLUSTER_H

#define HEADER_SIZE 
#define DATA_SIZE 128
#define STATIC_SIZE 1024

typedef struct _header{
	int size;
	unsigned char data[HEADER_SIZE];
}HEAD;

typedef struct _static{
	int size;
	unsigned char data[STATIC_SIZE];
}STATIC;

typedef struct _buffer {
	int size;
	unsigned char data[DATA_SIZE];
}BUFFER;

#endif
