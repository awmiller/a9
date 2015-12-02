#ifndef VERTEX_H
#define VERTEX_H

#include <vector>

class Vertex{
  vector<char> edges;
  char label;
  
 public:
  
  Vertex(char);
  void addEdge(char);   
  char getLabel();
  const vector<char> getEdges();
}

#endif
