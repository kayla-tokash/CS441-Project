//Work in progress, look at how to implement the data structures and incorperate// libpcap stuff


#ifndef __BF_H__
#define __BF_H__
#include <sys/socket.h>
#include <netinet.h/in.h>
#include <arpa/inet.h>	


struct Edge {
	int weight;
	struct sockaddr_in source, destination;
}

struct Graph {
	int V, E; // V number of verticies, E number of edges

	struct Edge *edge;
}

struct Graph* createGraph(int V, int E);
void printSolution(int distance[], int n);
void BellmanFord(struct Graph* graph, int source);



#endif /* __BF_H__ */
