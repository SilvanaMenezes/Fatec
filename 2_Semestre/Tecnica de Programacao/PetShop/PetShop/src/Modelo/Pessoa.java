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
public abstract class Pessoa {
    
    public String CPF;
    public String nome;
    public char sexo;
    public String telefone;
    public String email;   

    public Pessoa(String CPF, String nome, char sexo, String telefone, String email) {
        this.CPF = CPF;
        this.nome = nome;
        this.sexo = sexo;
        this.telefone = telefone;
        this.email = email;
    }

    public Pessoa(String CPF, String nome) {
        this.CPF = CPF;
        this.nome = nome;
    }
    
    public String getCPF() {
        return CPF;
    }

    public void setCPF(String CPF) {
        this.CPF = CPF;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public char getSexo() {
        return sexo;
    }

    public void setSexo(char sexo) {
        this.sexo = sexo;
    }

    public String getTelefone() {
        return telefone;
    }

    public void setTelefone(String telefone) {
        this.telefone = telefone;
    }

    public String getEmail() {
        return email;
    }

    public void setEmail(String email) {
        this.email = email;
    }
    
    
    
}
