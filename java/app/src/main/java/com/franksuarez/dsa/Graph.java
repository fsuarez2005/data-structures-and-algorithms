package com.franksuarez.dsa;

import java.util.List;

/** Graph interface.
 *
 * @author franksuarez
 */
public interface Graph<T> {

    public interface Vertex<U> {

        public void set_name(String name);

        public String get_name();

        public void set_value(U value);

        public void get_value();

    }

    public interface Edge<V> {

        public void set_vertex_1(Vertex v);

        public Vertex get_vertex_1();

        public void set_vertex_2(Vertex v);

        public void get_vertex_2();

        public void set_value(V value);

        public V get_value();

    }

    public boolean adjacent(Vertex v1, Vertex v2);

    public List<Vertex> neighbors(Vertex v);

    public void add_vertex(Vertex x);

    public void remove_vertex(Vertex v);

    public void add_edge(Vertex v1, Vertex v2, Edge e);

    public void remove_edge(Vertex v1, Vertex v2);

    public T get_vertex_value(Vertex v);

    public void set_vertex_value(Vertex v, T value);

    public Edge get_edge_value(Vertex v1, Vertex v2);

    public void set_edge_value(Vertex v1, Vertex v2, T value);

}
