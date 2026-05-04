#include "Graph.h"
#include <iostream>
#include <set>
using namespace std;

//  Удаление узла графа
void Graph::removeNode(Node* node) {
	for (set<Node*>::iterator it = nodes.begin(); it != nodes.end(); it++) {
		// Извлечение из итератора указатели на узел
		(*it)->removeNeighbour(node);
	}

	nodes.erase(node);
	delete node;
}

//Добавление ребра
void Graph::addEdge(Node* begin, Node* end) {
	if (nodes.find(begin) == nodes.end()) {
		return; //узел begin отсутствует в графе
	}
	if (nodes.find(end) == nodes.end()) {
		return; //узел end отсутствует в графе
	}

	// Добавляем оба ребра
	begin->addNeighbour(end);
	end->addNeighbour(begin);
}

//Добавление узла
void Graph::addNode(Node* node) {
	nodes.insert(node);
}

// Удаление ребра графа
void Graph::removeEdge(Node* begin, Node* end) {
	if (nodes.find(begin) == nodes.end()) {
		return; //узел begin отсутствует в графе
	}
	if (nodes.find(end) == nodes.end()) {
		return; //узел end отсутствует в графе
	}

	//Удаляем рёбра
	begin->removeNeighbour(end);
	end->removeNeighbour(begin);
}

void Node::addNeighbour(Node* neighbour) {
	neighbours.insert(neighbour);
}

void Node::removeNeighbour(Node* neighbour) {
	neighbours.erase(neighbour);
}

bool BFS::connected(Node* begin, Node* end)
{
	if (!begin || !end) // Проверка указателей
		return false;

	// Создание очереди
	queue<Node*> nodes;
	nodes.push(begin);
	set<Node*> visited;

	while (!nodes.empty())
	{
		Node* next = nodes.front(); // Берём перввый узел из очереди
		nodes.pop(); // Удаляем первый узел из очереди

		if (next == end) 
			return true; 

		visited.insert(next); // Добавляем вершину в множество посещённых

		//Проходим по всем соседям текущего узла
		for (Node::node_iterator it = next->nb_begin(); it != next->nb_end(); it++)
			if (visited.find(*it) == visited.end())
				nodes.push(*it);
	}
	return false;
}

bool DFS::connectedRecursive(Node* begin, Node* end)
{
	if (begin == end) // Если теккущий узел конечный, то путь найден
		return true;

	visited.insert(begin); // Добавляем текущий узел в множество посещённых

	for (Node::node_iterator it = begin->nb_begin(); it != begin->nb_end(); it++)
		if (visited.find(*it) == visited.end()) // Если сосед не посещён
			if (connectedRecursive(*it, end)) // Рекурсивно ищем из соседа
				return true;

	return false;
}