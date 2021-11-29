#include <stdio.h>
#include "my_mat.h"

int main() {
    int graph[N][N] = {{0}};
    int loopEnable = 1;
	int i, j;

    // init graph
    for (i = 0; i < N; i++) {
      for (j = 0; j < N; j++) {
	  graph[i][j] = INF;
      }
    }

    // start main loop
    while (loopEnable) {
	char cmd;

	// await for command from user
	scanf("%s", &cmd);

	// perform command
	switch (cmd) {
	    case 'A':
		doA_updateGraph(graph);	
		floydWarshall(graph);
		printGraph(graph, N);
		break;
	    case 'B':
		printf("%s", doB_pathExists(graph));
		break;
	    case 'C':
		printf("%d", doC_shortestPath(graph));
		break;
	    default: // exit main for D
		loopEnable = 0;
	    printf("\n");
	}
    }

    return 0;
}
