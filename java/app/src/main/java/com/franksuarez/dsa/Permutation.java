/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package com.franksuarez.dsa;

import java.util.Arrays;
import java.util.List;

/**
 *
 * @author franksuarez
 */
public class Permutation {
    
    
    /** Heap's Algorithm for permutations.
     * https://en.wikipedia.org/wiki/Heap%27s_algorithm
     * 
     * 
     * @param <T>
     * @param k
     * @param array 
     */
    public static <T> void heapAlgorithm(int k, T[] array) {
        if (k == 1) {
            // print array
            System.out.println(Arrays.toString(array));
        } else {
            heapAlgorithm(k - 1, array);
            
            for (int i = 0; i < k - 1; i++) {
                
                T temp;
                
                // swap choice dependent on parity of K (even or odd)
                if ((k % 2) == 0) {
                    // swap array[i] and array[k-1]
                    temp = array[i];
                    array[i] = array[k-1];
                    array[k-1] = temp;
                } else {
                    // swap array[0] and array[k-1]
                    temp = array[0];
                    array[0] = array[k-1];
                    array[k-1] = temp;
                }
                heapAlgorithm(k - 1, array);
            }
        }
    }
    
    
    
    
    /** Returns permutations of a String.
     * 
     * @param s 
     */
    public static void permutation(String s) {
        System.out.printf("s = %s%n",s);
        // s.length == 2
        // split string into char array
        List<String> asList = Arrays.asList(s.split(""));
        // take first char and place second char in all places
        
        
        
        
        
    }
}
