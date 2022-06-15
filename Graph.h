#pragma once

#include <iostream>

using namespace std;

// stores adjacency list items
struct adjNode
{
    int val;
    int cost;
    adjNode* next;
};

// structure to store edges
struct graphEdge
{
    int start_ver;
    int end_ver;
    int weight;
};

class DiaGraph
{
private:
    // insert new nodes into adjacency list from given graph
    adjNode* getAdjListNode(int value, int weight, adjNode* head);
    int N;  // number of nodes in the graph

public:
    adjNode** head;                //adjacency list as array of pointers

    DiaGraph(graphEdge edges[], int n, int N);
    ~DiaGraph();
};




