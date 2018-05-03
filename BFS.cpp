//
// Created by Jack Butler on 5/3/2018.
//

#include <iostream>
#include <climits>
using namespace std;

class Queue {

private:
    int maxQueueSize, front, rear, currentSize;
    int *queue;

public:
    Queue(int maxQueueSize) {
        front = 0;
        rear = 0;
        currentSize = 0;
        this->maxQueueSize = maxQueueSize;
        queue = new int[maxQueueSize];
    }

    ~Queue() {
        delete queue;
    }

    void enqueue(int val) {
        currentSize++;
        queue[rear++] = val;
        if (rear == maxQueueSize)
            rear = 0;

    }

    int dequeue() {
        currentSize--;
        int x = queue[front++];
        if (front == maxQueueSize)
            front = 0;
        return x;
    }

    int getSize() {
        return currentSize;
    }
};

class BFS {

private:
    int **adjList;
    int *numOutEdges;
    int numVertices;

public:
    int *visited;
    int *level;

    BFS(int **adjList, int *numOutEdges, int numVertices) {

        this->adjList = adjList;
        this->numOutEdges = numOutEdges;
        this->numVertices = numVertices;
        visited = new int[numVertices];
        level = new int[numVertices];
    }

    ~BFS() {
        delete visited;
        delete level;
    }

    void executeBFS(int startVertex) { // complete this method
    }
};

void printLevelArray(int *A, int len) {
    cout << "[";
    for (int i = 0; i < len - 1; i++) {
        if (A[i] == INT_MAX)
            cout << "infty, ";
        else
            cout << A[i] << ", ";
    }
    if (A[len - 1] == INT_MAX)
        cout << "infty]";
    else
        cout << A[len - 1] << "]";
}

void graph1() {

    int row0[] = { 1, 3, 4 };
    int row1[] = { 0, 2, 3 };
    int row2[] = { 1, 3 };
    int row3[] = { 0, 1, 2, 6 };
    int row4[] = { 0, 5 };
    int row5[] = { 4, 6 };
    int row6[] = { 3, 5 };
    int *adjList[7] = { row0, row1, row2, row3, row4, row5, row6 };
    int numOutEdges[] = { 3, 3, 2, 4, 2, 2, 2 };
    BFS bfs(adjList, numOutEdges, 7);
    bfs.executeBFS(4);
    cout << "Visited Array: ";
    printLevelArray(bfs.visited, 7);
    cout << endl;
    cout << "Level Array:   ";
    printLevelArray(bfs.level, 7);
    cout << endl;
}

void graph2() {

    int row0[] = { 1, 3 };
    int row1[] = { 0, 2, 3 };
    int row2[] = { 1, 3 };
    int row3[] = { 0, 1, 2, 5 };
    int row4[] = { 0, 5, 6 };
    int row5[] = { 3 };
    int row6[] = { 4 };
    int *adjList[7] = { row0, row1, row2, row3, row4, row5, row6 };
    int numOutEdges[] = { 2, 3, 2, 4, 3, 1, 1 };
    BFS bfs(adjList, numOutEdges, 7);
    bfs.executeBFS(0);
    cout << "Visited Array: ";
    printLevelArray(bfs.visited, 7);
    cout << endl;
    cout << "Level Array:   ";
    printLevelArray(bfs.level, 7);
    cout << endl;
}

int main() {

    cout << "*** Graph One ***" << endl;
    graph1();
    cout << "\n*** Graph Two ***" << endl;
    graph2();
    return 0;
}

