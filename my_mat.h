#define N 10

#define INF 999999999

#define DEBUG 0

typedef enum {False = 0, True = 1} boolean;

void printGraph(int graph[][N], int column);

void floydWarshall(int graph[][N]);

void doA_updateGraph(int graph[][N]);

const char* doB_pathExists(int graph[][N]);

int doC_shortestPath(int graph[][N]);
