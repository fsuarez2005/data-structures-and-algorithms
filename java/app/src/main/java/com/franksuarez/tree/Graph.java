/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.franksuarez.tree;

import java.util.List;

/**
 *
 * @author franksuarez
 */
public class Graph {
    private List<VertexPair> edges;
    private List<Vertex> vertices;
    
    class Vertex {
        
    }
    
    class VertexPair {
        
        
    }
    
    class Edge {
        
    }
    
//    adjacent(G, x, y): tests whether there is an edge from the vertex x to the vertex y;
    
    public boolean adjacent(Vertex v1, Vertex v2) {
        throw new UnsupportedOperationException();
    }
    
//    neighbors(G, x): lists all vertices y such that there is an edge from the vertex x to the vertex y;
    
    public List<Vertex> neighbors(Vertex v) {
        throw new UnsupportedOperationException();
    }
    
    
    
//    add_vertex(G, x): adds the vertex x, if it is not there;
    public void add_vertex(Vertex x) {
        throw new UnsupportedOperationException();     
    }
    
    
//    remove_vertex(G, x): removes the vertex x, if it is there;
    
    public void remove_vertex(Vertex v) {
        throw new UnsupportedOperationException();
    }
//    add_edge(G, x, y, z): adds the edge z from the vertex x to the vertex y, if it is not there;
    
    public void add_edge(Vertex v1, Vertex v2, Edge e) {
        throw new UnsupportedOperationException();
    }
    
//    remove_edge(G, x, y): removes the edge from the vertex x to the vertex y, if it is there;
    public void remove_edge(Vertex v1, Vertex v2) {
        throw new UnsupportedOperationException();
    }
//    get_vertex_value(G, x): returns the value associated with the vertex x;
    public Object get_vertex_value(Vertex v) {
        throw new UnsupportedOperationException();
    }
//    set_vertex_value(G, x, v): sets the value associated with the vertex x to v.
    public void set_vertex_value(Vertex v, Object value) {
        throw new UnsupportedOperationException();
    }
    

//Structures that associate values to the edges usually also provide:[1]

//    get_edge_value(G, x, y): returns the value associated with the edge (x, y);
    
    //public void get_edge_value()
    
//    set_edge_value(G, x, y, v): sets the value associated with the edge (x, y) to v.
    
    
    
    
}
