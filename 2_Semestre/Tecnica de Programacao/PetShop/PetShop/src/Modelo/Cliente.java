/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Modelo;

/**
 *
 * @author lab02aluno
 */
public class Cliente extends Pessoa {
 
    private String endereco;
    private String animal;

    public Cliente(String endereco, String animal, String CPF, String nome, char sexo, String telefone, String email) {
        super(CPF, nome, sexo, telefone, email);
        this.endereco = endereco;
        this.animal = animal;
    }

    public Cliente(String endereco, String animal, String CPF, String nome) {
        super(CPF, nome);
        this.endereco = endereco;
        this.animal = animal;
    }

    public String getEndereco() {
        return endereco;
    }

    public void setEndereco(String endereco) {
        this.endereco = endereco;
    }

    public String getAnimal() {
        return animal;
    }

    public void setAnimal(String animal) {
        this.animal = animal;
    }
}
