/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/UnitTests/JUnit5TestClass.java to edit this template
 */
package com.franksuarez.dsa;

import java.lang.reflect.Field;
import java.util.logging.Level;
import java.util.logging.Logger;
import org.junit.jupiter.api.AfterEach;
import org.junit.jupiter.api.AfterAll;
import org.junit.jupiter.api.BeforeEach;
import org.junit.jupiter.api.BeforeAll;
import org.junit.jupiter.api.Test;
import static org.junit.jupiter.api.Assertions.*;
import sun.misc.Unsafe;

/**
 *
 * @author franksuarez
 */
public class TreeTest {
    
    public TreeTest() {
    }
    
    @BeforeAll
    public static void setUpClass() {
    }
    
    @AfterAll
    public static void tearDownClass() {
    }
    
    @BeforeEach
    public void setUp() {
    }
    
    @AfterEach
    public void tearDown() {
    }

    
    
    @Test
    public void testUnsafe() {
        //Unsafe Unsafe = sun.misc.Unsafe;
        Class<Unsafe> aClass = sun.misc.Unsafe.class;
        
        try {
            //Field[] declaredFields = Unsafe.class.getDeclaredFields();
            Field declaredField = Unsafe.class.getDeclaredField("theInternalUnsafe");
            System.out.printf("%s%n",declaredField.getName());
            
            System.out.printf("Type: %s%n",declaredField.getType().getName());
            
        } catch (NoSuchFieldException ex) {
            Logger.getLogger(TreeTest.class.getName()).log(Level.SEVERE, null, ex);
        } catch (SecurityException ex) {
            Logger.getLogger(TreeTest.class.getName()).log(Level.SEVERE, null, ex);
        }
        
        
    }


}
