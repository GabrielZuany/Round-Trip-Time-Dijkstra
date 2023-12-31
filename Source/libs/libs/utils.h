#ifndef UTILS_H
#define UTILS_H

#include "graph.h"
#include "heap.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

double *dijkstra_algorithm(Graph *g, int s);
double RTT(int a, int b, double *dists_a, double *dists_b);

#endif
