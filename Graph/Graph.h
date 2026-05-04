#pragma once
#include <iostream>
#include <set>
using namespace std;

class Node {
	string name;
	set<Node*> neighbours; // Множество соседий 
	void addNeighbour(Node* neighbour);
	void removeNeighbour(Node* neighbour);
public:
	typedef set<Node*>::const_iterator node_iterator; // Константный итератор

	Node(const string& aname) : name(aname) {};
	const string& getname() const { return name; } // Возвращает имя вершины
	node_iterator nb_begin() const { // Возвращает начальную вершину
		return neighbours.begin();
	}
	node_iterator nb_end() const {
		return neighbours.end(); // Возвращает конечную
	}
	friend class Graph;
};

class Graph {
	set<Node*> nodes; // Множество вершин
public:
	typedef set<Node*>::const_iterator node_iterator;

	void addNode(Node* node);
	void removeNode(Node* node);
	void addEdge(Node* begin, Node* end);
	void removeEdge(Node* begin, Node* end);

	node_iterator begin() const {
		return nodes.begin(); // Возвращает начальную вершину
	}
	node_iterator end() const {
		return nodes.end(); // Возвращает конечную
	}
};

class BFS {
	const Graph& graph; 
public:
	BFS(const Graph& agraph) : graph(agraph) {} // конструктор
	bool connected(Node* begin, Node* end);
};

class DFS
{
private:
	const Graph& graph;
	set<Node*> visited; // Множество посещённых узлов
	bool connectedRecursive(Node* begin, Node* end);

public:
	DFS(const Graph& agraph) : graph(agraph) {} // Конструктор
	bool connected(Node* begin, Node* end);
};