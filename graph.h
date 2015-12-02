#ifndef GRAPH_H
#define GPRAH_H

#include <vector>
#include "vertex.h"

#define VERTEX_DOESNT_EXIST -1

using namespace std;

class Graph{

  vector<Vertex> vertices; 
  int indexOf(char);
    
 public:
  Graph();
  void addEdge(char,char);
  int vertexCount();
  bool vertexExists(char);
  bool  pathExists(char,char);

};

#endif
