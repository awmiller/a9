#include "vertex.h"

Vertex::Vertex(char Label){
  this->label = Label;
  edges = vector<char>();
}

void Vertex::addEdge(char edge){
  this->edges.push_back(edge);
}

char Vertex::getLabel(){
  return label;
}

const vector<char> Vertex::getEdges(){
  return (const vector<char>)edges;
}

bool Vertex::containsEdge(char edge){
  for(int i=0; i < edges.size(); i++){
    if(this->edges[i]==edge){
      return true;
    }
  }
  return false;
}
