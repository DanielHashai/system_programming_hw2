#include <stdio.h>
#include "my_mat.h"

int main() {
    int graph[N][N] = {0};
    int loopEnable = 1;

    // init graph
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
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
		printf("%s\n", doB_pathExists(graph));
		break;
	    case 'C':
		printf("%d\n", doC_shortestPath(graph));
		break;
	    default: // exit main for D
		loopEnable = 0;
	}
    }

    return 0;
}
