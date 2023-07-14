/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */
package backendfs2022logica.aula04;

import java.util.Scanner;
import javax.swing.JOptionPane;

/**
 *
 * @author thini
 */
public class Vetores {
    public static void arrayUnidimensional(int nEntrada)   {

        Scanner ler = new Scanner(System.in);

        int n = nEntrada; // tamanho do vetor
        int v[] = new int[n]; // declaração do vetor "v"
        int i; // índice ou posição

        // Entrada de Dados
        for (i=0; i<n; i++) {
            System.out.printf("Informe %2do. valor de %d: ", (i+1), n);
            v[i] = ler.nextInt();
        }
        
        // Processamento: somar todos os valores, definir o maior e o menor valor
        int soma = 0;
        int menor = v[0]; // v[0] = 1o. valor armazenador no vetor "v"
        int maior = v[0];
    
        for (i = 0; i < n; i++) {
            soma = soma + v[i];
            if (v[i] < menor) menor = v[i];
            if (v[i] > maior) maior = v[i];
        }

        // Saída (resultados)
        System.out.printf("\n");
    
        for (i=0; i<n; i++) {
            if (v[i] == menor)
                System.out.printf("v[%d] = %2d <--- menor valor\n", i, v[i]);
            else if (v[i] == maior)
                 System.out.printf("v[%d] = %2d <--- maior valor\n", i, v[i]);
            else System.out.printf("v[%d] = %2d\n", i, v[i]);
        }

        System.out.printf("\nSoma = %d\n", soma);
    
    }
    
     public static void arrayBidimensional(int linha, int coluna){
  
         int matriz[][] = new int[linha][coluna];
         
            for (int l = 0; l < linha; l++) {
                for (int c = 0; c < coluna; c++) {
                       matriz[l][c] = Integer.parseInt(JOptionPane.showInputDialog
                        ("Valor para Linha = " + l + " Coluna = " + c));
                }
            }

            for (int l = 0; l < linha; l++) {
                for (int c = 0; c < coluna; c++) {
                   JOptionPane.showMessageDialog
                    (null, "Valor Linha e Coluna " + l + " x " + c + " = " + matriz[l][c]);
                 }
            }

     
     }
    
    
    
}

