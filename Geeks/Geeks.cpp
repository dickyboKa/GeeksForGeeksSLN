#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include "Graph/GraphMatrix.h"

int main()
{
	GraphMatrix *graphs = new GraphMatrix(5);
	graphs->addEdge(0, 1);
	graphs->addEdge(0, 4);
	graphs->addEdge(1, 2);
	graphs->addEdge(1, 3);
	graphs->addEdge(1, 4);
	graphs->addEdge(2, 3);
	graphs->addEdge(3, 4);
	graphs->print();

	delete graphs;
	return 0;
}


