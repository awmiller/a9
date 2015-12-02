#include "graph.h"

Graph::Graph(){
  vertices = vector<Vertex>();
}

void Graph::addEdge(char x,char y){
  
  int x_index = indexOf(x);
  
  if(x_index != VERTEX_DOESNT_EXIST){
    vertices[x_index].addEdge(y);
  }else{
    Vertex v = Vertex(x);
    v.addEdge(y);
    vertices.push_back(v);
  }
  
  int y_index = indexOf(y);
  
  if(y_index != VERTEX_DOESNT_EXIST){
    vertices[y_index].addEdge(x);
  }else{
    Vertex v = Vertex(y);
    v.addEdge(x);
    vertices.push_back(v);
  }
  
}

int Graph::vertexCount(){
  return vertices.size();
}

bool Graph::vertexExists(char c){
  return indexOf(c) > VERTEX_DOESNT_EXIST;
}

bool  Graph::pathExists(char x,char y){
  
  int x_index = indexOf(x);
  int y_index = indexOf(y);
  
  if((y_index==VERTEX_DOESNT_EXIST)&&(x_index==VERTEX_DOESNT_EXIST)){
    return false;
  }
  
  Vertex x_vert = vertices[x_index];
  Vertex y_vert = vertices[y_index];
  
  return x_vert.containsEdge(y) && y_vert.containsEdge(x);
  
}

int Graph::indexOf(char x){
  int index = 0;
  
  for(;index<vertices.size();index++){
    if(vertices[index].getLabel() == x){
      break;
    }   
  }
  
  if(index < vertices.size()){
    return index;
  }else{
    return VERTEX_DOESNT_EXIST;
  }
}