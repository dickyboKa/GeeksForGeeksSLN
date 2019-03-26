#include <iostream>
#include <vector>
#include "Graph/GraphList.h"
#include "Graph/CodingProblem.h"

int main()
{
	GraphList g(4, true);
	g.addEdge(0, 1);
	g.addEdge(0, 2);
	g.addEdge(1, 2);
	g.addEdge(2, 0);
	g.addEdge(2, 3);
	g.addEdge(3, 3);

	g.print();
	std::cout << "Transitive closure matrix is \n";
	transitiveClosure(g);
	return 0;
}


