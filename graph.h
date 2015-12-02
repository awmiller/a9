#ifndef GRAPH_H
#define GPRAH_H

#include <vector>

class Graph{

  vector<Vertex> vertices;    
    
  public:
    void addEdge(char,char);
    int vertexCount();
    bool vertexExists(char);
    bool  pathExists(char,char);

};

#endif
