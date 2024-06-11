/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Interface.java to edit this template
 */
package com.franksuarez.dsa;

/**
 *
 * @author franksuarez
 */
public interface Tree<T> {
    public interface Node<T> {
        //public Node<T> filterLevel(int level, int idx);

        public Node<T> get(int idx) throws IndexOutOfBoundsException;

        void setValue(T value);

        public T getValue();

        void put(T value, int idx);

        void remove(int idx);
    }

    
    public T get(int... idxs);
    
    public Node<T> getNode(int... idxs);
    
    public void put(T value, int... idxs);
    
    public void remove(int... idxs);
    
    
    
}
