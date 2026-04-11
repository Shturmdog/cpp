#include "Graph.h"
#include <iostream>
#include <set>
using namespace std;

void Graph::removeNode(Node* node) {
	for (set<Node*>::iterator it = nodes.begin(); it != nodes.end(); it++) {
		(*it)->removeNeighbour(node);
	}

	nodes.erase(node);
	delete node;
}

void Graph::addEdge(Node* begin, Node* end) {
	if (nodes.find(begin) == nodes.end()) {
		return;
	}
	if (nodes.find(end) == nodes.end()) {
		return;
	}

	begin->addNeighbour(end);
	end->addNeighbour(begin);
}

void Graph::addNode(Node* node) {
	nodes.insert(node);
}

void Graph::removeEdge(Node* begin, Node* end) {
	if (nodes.find(begin) == nodes.end()) {
		return;
	}
	if (nodes.find(end) == nodes.end()) {
		return;
	}

	begin->removeNeighbour(end);
	end->removeNeighbour(begin);
}

void Node::addNeighbour(Node* neighbour) {
	neighbours.insert(neighbour);
}

void Node::removeNeighbour(Node* neighbour) {
	neighbours.erase(neighbour);
}