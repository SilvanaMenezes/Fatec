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
public class Animal {
    
    public int ID;
    public String raca;
    public int idade;
    public String nomeAnimal;
    public String obs;    

    public Animal(int ID, String raca, int idade, String nomeAnimal, String obs) {
        this.ID = ID;
        this.raca = raca;
        this.idade = idade;
        this.nomeAnimal = nomeAnimal;
        this.obs = obs;
    }

    public int getID() {
        return ID;
    }

    public void setID(int ID) {
        this.ID = ID;
    }

    public String getRaca() {
        return raca;
    }

    public void setRaca(String raca) {
        this.raca = raca;
    }

    public int getIdade() {
        return idade;
    }

    public void setIdade(int idade) {
        this.idade = idade;
    }

    public String getNomeAnimal() {
        return nomeAnimal;
    }

    public void setNomeAnimal(String nomeAnimal) {
        this.nomeAnimal = nomeAnimal;
    }

    public String getObs() {
        return obs;
    }

    public void setObs(String obs) {
        this.obs = obs;
    }
    
    
    
}


