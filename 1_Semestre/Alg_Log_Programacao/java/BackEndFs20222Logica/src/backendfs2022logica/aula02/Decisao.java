/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package backendfs2022logica.aula02;

import javax.swing.JOptionPane;

/**
 *
 * @author lab7aluno
 */
public class Decisao {
    
    public static void DecisaoSimples (String texto) {
        if(texto.equals("TESTE")) {
            JOptionPane.showMessageDialog(null, texto + " igual");
        }
    }
    
    public static void DecisaoComposta (String texto) {
        if(texto.equals("TESTE")) {
            JOptionPane.showMessageDialog(null, texto + " igual");
        } else {
            JOptionPane.showMessageDialog(null, texto + " diferente");
        }
    }

    public static void DecisaoEncadeada (String texto) {
        if(texto.equals("TESTE")) {
            JOptionPane.showMessageDialog(null, texto + " igual");
        } else if (texto.equals("NAO TESTE")) {
            JOptionPane.showMessageDialog(null, texto + " NÃO TESTE");
        } else {
            JOptionPane.showMessageDialog(null, texto + " diferente");
        }

    }

    public static void DecisaoCaso (int n1) {
     switch(n1) {
       case 1:
        JOptionPane.showMessageDialog(null, "Opção " + n1);
        break;
       case 2:
        JOptionPane.showMessageDialog(null, "Opção " + n1);
        break;
       case 3:
        JOptionPane.showMessageDialog(null, "Opção " + n1);
        break;
       case 4:
        JOptionPane.showMessageDialog(null, "Opção " + n1);
        break;
       case 5:
        JOptionPane.showMessageDialog(null, "Opção " + n1);
        break;
       case 6:
        JOptionPane.showMessageDialog(null, "Opção " + n1);
        break;
       default:
        JOptionPane.showMessageDialog(null, "Opção desconhecida");
        break;
        }
    }

}
