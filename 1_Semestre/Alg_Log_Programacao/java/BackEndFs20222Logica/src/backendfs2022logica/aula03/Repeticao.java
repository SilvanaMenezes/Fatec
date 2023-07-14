/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package backendfs2022logica.aula03;

import javax.swing.JOptionPane;

/**
 *
 * @author thini
 */
public class Repeticao {
    public static void enquanto(int n1)   {
            while (n1 <= 10) {
                JOptionPane.showMessageDialog(null, "Opção " + n1);
                n1++;
            }
     }
    
     public static void repita(int n1)   {
            do {
                JOptionPane.showMessageDialog(null, "Opção " + n1);
                n1++;
            } while (n1 <= 10) ;
     }

     public static void para(int n1)   {
            for (int i = n1; i <=10; i++) {
                JOptionPane.showMessageDialog(null, "Opção " + i);
            }
     }


    
}    

