#include <stdio.h>
#include "my_mat.h"

int main() {
    int graph[N][N] = {0};
    int loopEnable = 1;
    boolean first_print_done = False;


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
		if (first_print_done)
			printf("\n");
		printf("%s", doB_pathExists(graph));
		first_print_done = True;		
		break;
	    case 'C':
		if (first_print_done)
			printf("\n");
		printf("%d", doC_shortestPath(graph));
		first_print_done = True;
		break;
	    default: // exit main for D
		loopEnable = 0;
	}
    }

    return 0;
}

