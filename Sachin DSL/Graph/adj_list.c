#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct List {
    struct node *head;
};

struct Graph {
    int V;
    struct List *array;
};

struct node *c_node(int x) {
    struct node *q = (struct node *)malloc(sizeof(struct node));
    q->data = x;
    q->next = NULL;
    return q;
}

struct Graph *createGraph(int V) {
    struct Graph *graph = (struct Graph *)malloc(sizeof(struct Graph));
    graph->V = V;
    graph->array = (struct List *)malloc(sizeof(struct List) * V);
    int i;
    for (i = 0; i < V; i++) {
        graph->array[i].head = NULL;
    }
    return graph;
}

void addEdge(struct Graph *graph, int src, int des) {
    struct node *temp = c_node(des);
    temp->next = graph->array[src].head;
    graph->array[src].head = temp;
}

void printGraph(struct Graph *graph) {
    int v;
    for (v = 0; v < graph->V; ++v) {
        struct node *trav = graph->array[v].head;
        printf("\n Adjacency list of vertex %d\n head ", v);
        while (trav != NULL) {
            printf("-> %d", trav->data);
            trav = trav->next;
        }
        printf("\n");
    }
}

int main() {
    int V = 5;
    struct Graph *graph = createGraph(V);
    addEdge(graph, 0, 1);
    addEdge(graph, 0, 4);
    addEdge(graph, 1, 2);
    addEdge(graph, 1, 3);
    addEdge(graph, 1, 4);
    addEdge(graph, 2, 3);
    addEdge(graph, 3, 4);

    // print the adjacency list representation of the above graph
    printGraph(graph);

    return 0;
}
