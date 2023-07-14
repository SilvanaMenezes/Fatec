 /*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package backendfs2022logica.aula01;

import javax.swing.JOptionPane;

/**
 *
 * @author Aluno
 */
public class Operadores {
    
    public static void atribuicao() {
        int lado = 2;
        float pi = 3.1426F;
        char caract = 'A';
        String texto = "DevMedia";
        int area = 2;
        area *= 2;
        
        JOptionPane.showMessageDialog(null, "Lado = " + lado);
        JOptionPane.showMessageDialog(null, "pi = " + pi);
        JOptionPane.showMessageDialog(null, "Caracter = " + caract);
        JOptionPane.showMessageDialog(null, "Texto = " + texto);
        JOptionPane.showMessageDialog(null, "Area = " + area);
        
        System.out.println("Lado = " + lado);
        System.out.println("pi = " + pi);
        System.out.println("Caracter = " + caract);
        System.out.println("Texto = " + texto);
        System.out.println("Texto = " + area);

    }
    

    public static void aritmeticos (double n1,double n2) {
        
        // adicao
        double resultado = n1 + n2;
        JOptionPane.showMessageDialog(null, "Soma = " + resultado);
        System.out.println("Soma = " + resultado);

         // subtracao
        resultado = n1 - n2;
        JOptionPane.showMessageDialog(null, "Sub = " + resultado);
        System.out.println("Sub = " + resultado);

         // multiplicao
        resultado = n1 * n2;
        JOptionPane.showMessageDialog(null, "Mul = " + resultado);
        System.out.println("Mul = " + resultado);

         // div
        resultado = n1 / n2;
        JOptionPane.showMessageDialog(null, "Div = " + resultado);
        System.out.println("Div = " + resultado);

    }


    public static void incremento() {
        int numero = 5;
        JOptionPane.showMessageDialog(null, "numero = " + numero);
        System.out.println("numero = " + numero);
        numero++;
        JOptionPane.showMessageDialog(null, "numero = " + numero);
        System.out.println("numero = " + numero);
        numero--;
        JOptionPane.showMessageDialog(null, "numero = " + numero);
        System.out.println("numero = " + numero);
        
        /* 
        No primeiro println(), desafioUm é incrementado antes de seu valor ser lido para compor 
        a instrução de soma. Sendo assim, temos desafioUm = 5 + 6. Já no segundo println(), 
        primeiro o valor é lido, resultando em desafioDois = 5 + 5. Somente após a leitura desafioDois é 
        incrementado, e depois, recebe o valor da soma, tendo seu valor sobrescrito com o número 10.
        */
        int desafioUm = 5;
        JOptionPane.showMessageDialog(null, desafioUm  += ++desafioUm);
        System.out.println(desafioUm  += ++desafioUm );

        int desafioDois = 5;
        JOptionPane.showMessageDialog(null, desafioDois  += desafioDois++);
        System.out.println(desafioDois  += desafioDois++);
        
    }

    public static void igualdade() {
        int valorA = 1;
        int valorB = 2;

        String textoA = "TESTE";
        String textoB = "TEXTO";
        
        if(valorA == valorB){
                System.out.println("Valores iguais");
                JOptionPane.showMessageDialog(null, "Valores iguais");
        } else {
                System.out.println("Valores diferentes");
                JOptionPane.showMessageDialog(null, "Valores diferentes");
        }

        if(valorA != valorB){
            System.out.println("Valores diferentes");
            JOptionPane.showMessageDialog(null, "Valores diferentes");
        } else {
            System.out.println("Valores iguais");
            JOptionPane.showMessageDialog(null, "Valores iguais");
        }

        if(textoA.equals(textoB)){
                System.out.println("TEXTOS iguais");
                JOptionPane.showMessageDialog(null, "TEXTOS iguais");
        } else {
                System.out.println("TEXTOS diferentes");
                JOptionPane.showMessageDialog(null, "TEXTOS diferentes");
        }

        if(!textoA.equals(textoB)){
            System.out.println("TEXTOS diferentes");
            JOptionPane.showMessageDialog(null, "TEXTOS diferentes");

        } else {
            System.out.println("TEXTOS iguais");
            JOptionPane.showMessageDialog(null, "TEXTOS iguais");
        }
    }


    public static void relacionais() {

        int valorA = 1;
        int valorB = 2;

        if (valorA > valorB) {
            System.out.println("maior");
            JOptionPane.showMessageDialog(null, "maior");
        }

        if (valorA >= valorB) {
            System.out.println("maior ou igual");
            JOptionPane.showMessageDialog(null, "maior ou igual");
        }

        if (valorA < valorB) {
            System.out.println("menor");
            JOptionPane.showMessageDialog(null, "menor");
        }

        if (valorA <= valorB) {
            System.out.println("menor ou igual");
            JOptionPane.showMessageDialog(null, "menor ou igual");
        }

    }
    
    public static void logicos () {
        if((1 == (2 -1)) && (2 == (1 + 1))){
            System.out.println("Ambas as expressões são verdadeiras");
            JOptionPane.showMessageDialog(null, "Ambas as expressões são verdadeiras");

        }
        
        if ((1 != (2 -1)) || (2 == (1+1))) {
            System.out.println("iguais");
            JOptionPane.showMessageDialog(null, "iguais");

        }
    }
    
    
    public static void exemplos () {
    
        int quantidadeAnos = 5;
        int horasTrabalhadas = 40;
        int valorHora = 50;
        int salario = 0;
        
        if (quantidadeAnos <= 1) {
            salario = 1500 + (valorHora * horasTrabalhadas);
        } else if ((quantidadeAnos > 1) && (quantidadeAnos < 3)) {
            salario = 2000 + (valorHora * horasTrabalhadas);
        } else {
            salario = 3000 + (valorHora * horasTrabalhadas);
        }

        System.out.println("salario" + salario);
        JOptionPane.showMessageDialog(null, "salario" + salario);

    }
   
}
