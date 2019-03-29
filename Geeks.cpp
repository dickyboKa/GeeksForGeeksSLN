#include <iostream>
#include <vector>
#include "Graph/GraphMatrix.h"
#include "Graph/PrimMST.h"
int main()
{
	GraphMatrix g(5);

	g.addEdge(0, 1, 2);
	g.addEdge(0, 3, 6);

	g.addEdge(1, 0, 2);
	g.addEdge(1, 2, 3);
	g.addEdge(1, 3, 8);
	g.addEdge(1, 4, 5);

	g.addEdge(2, 1, 3);
	g.addEdge(2, 4, 7);

	g.addEdge(3, 0, 6);
	g.addEdge(3, 1, 8);
	g.addEdge(3, 4, 9);

	g.addEdge(4, 1, 5);
	g.addEdge(4, 2, 7);
	g.addEdge(4, 3, 9);

	g.print();
	PrimMST pm(g);
	pm.findMinimumSpanningTree();
	pm.printMST();
	return 0;
}


