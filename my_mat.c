#include <stdio.h>
#include "my_mat.h"

void printGraph(int graph[][N], int column) {
	int i, j;
    if (DEBUG == 0) return;
    printf("graph vertix %d\n", column);
    for (i = 0; i < N; i++) {
	for (j = 0; j < N; j++) {
	    if (graph[i][j] == INF)
		printf("%20s", "INF");
    	    else
		printf("%20d", graph[i][j]);
    	}
    	printf("\n");
    }
}

// Implementing floyd warshall algorithm
void floydWarshall(int graph[][N]) {
  int i, j, k;

  for (i = 0; i < N; i++)
    for (j = 0; j < N; j++)
      graph[i][j] = graph[i][j];

  // Adding vertices individually
  for (k = 0; k < N; k++) {
    for (i = 0; i < N; i++) {
      for (j = 0; j < N; j++) {
	if (i == j) continue;
        if (graph[i][k] + graph[k][j] < graph[i][j])
          graph[i][j] = graph[i][k] + graph[k][j];
      }
    }
  }
}

void doA_updateGraph(int graph[][N]) {
	int i,j; 
    for (i = 0; i < N; i++) {
	for (j = 0; j < N; j++) {
	    int weight = INF;
	    scanf("%d", &weight);
	    graph[i][j] = (weight == 0) ? INF : weight;
	}
    }
}

char* doB_pathExists(int graph[][N]) {
    int i, j;

    scanf("%d", &i);
    scanf("%d", &j);

    if (graph[i][j] != INF) 
	return "True";
    else 
	return "False";
}

int doC_shortestPath(int graph[][N]) {
    int i, j;

    scanf("%d", &i);
    scanf("%d", &j);

    if (graph[i][j] != INF) 
	return graph[i][j];
    else 
	return -1;

}
