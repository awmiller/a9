#ifndef VERTEX_H
#define VERTEX_H

#include <vector>

using namespace std;

class Vertex{
  vector<char> edges;
  char label;
  
 public:
  
  Vertex(char);
  void addEdge(char);   
  char getLabel();
  const vector<char> getEdges();
  bool operator==(const char &other) const {
      return other == label;
  }
  bool containsEdge(char);
};

#endif
