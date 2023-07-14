/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package View;

import Modelo.Agendamento;
import Modelo.Animal;
import Modelo.Cliente;
import Modelo.Servico;
import Modelo.Usuarios;

/**
 *
 * @author lab02aluno
 */
public class Main {
    
    public static void main(String[] args) {
        
        Animal bicho = new Animal (77, "Yorkshire", 10, "Totó", "Obs");
        
        Servico pet = new Servico (77, "Tosa e Banho", 150);
        //String endereco, String animal, String CPF, String nome, char sexo, String telefone, String email
        Cliente cliente = new Cliente ("Rua do Autódromo", bicho.nomeAnimal, "11122233344", "Ayrton Senna", 'M',
                "11955884562", "ayrton@gmail.com");
        //String dtNascimento, String nvAcesso, String pwSenha, String CPF, String nome, char sexo, String telefone, String email
        Usuarios user = new Usuarios ("07/12/1970 10:20", "Admin", "1234", "111.222.333-44", "Marlon Brando",
        'M', "963727217", "marlon@gmail.com");
        //                                          int ID, Usuarios Usuarios, Servico servico, Animal animal, float valor, String data
        Agendamento agendamento = new Agendamento (1, cliente, pet, bicho, 120, "11/05/2023 10:30");
        
        System.out.println("DADOS DO CLIENTE ----------");
        System.out.println("CPF = " + cliente.getCPF());
        System.out.println("Nome = " + cliente.getNome());
        System.out.println("Sexo = " + cliente.getSexo());
        System.out.println("Endereço = " + cliente.getEndereco());
        System.out.println("Email = " + cliente.getEmail());
        System.out.println("----------------------------------");
        
        System.out.println("DADOS DO AGENDAMENTO -----------");
        System.out.println("Nome do animal: " + agendamento.getAnimal().getNomeAnimal());
        System.out.println("Servico: " + agendamento.getServico().getDescricao());
        System.out.println("Data: " + agendamento.getData().getTime());
        System.out.println("---------------------------------");
        
        System.out.println("DADOS DO ANIMAL DO CLIENTE ------------");
        
     
        
    }
    
}
