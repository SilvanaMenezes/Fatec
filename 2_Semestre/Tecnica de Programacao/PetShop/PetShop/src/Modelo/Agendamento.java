/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Modelo;

import java.text.ParseException;
import java.text.SimpleDateFormat;
import java.util.Date;
import java.util.logging.Level;
import java.util.logging.Logger;


/**
 *
 * @author lab02aluno
 */
public class Agendamento {
    
    private int ID;
    private String observacao;
    private Usuarios Usuarios;
    private Servico servico;
    private Animal animal;
    private float valor;
    private Date data;   

    public Agendamento(int ID, Cliente Cliente, Servico servico, Animal animal, float valor, String data) {
        this.ID = ID;
        this.Usuarios = Usuarios;
        this.servico = servico;
        this.animal = animal;
        this.valor = valor;
        try {
            this.data = new SimpleDateFormat ("dd/MM/YYYYHM:mm").parse(data);
        } catch (ParseException ex) {
            Logger.getLogger(Agendamento.class.getName()).log(Level.SEVERE, null, ex);
        }
    }

    public Agendamento(int ID, Servico servico, Animal animal, float valor, Date data) {
        this.ID = ID;
        this.servico = servico;
        this.animal = animal;
        this.valor = valor;
        this.data = data;
    }

    /*public Agendamento(int i, Cliente cliente, Servico pet, Animal bicho, int i0, String _1030) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }*/

    public int getID() {
        return ID;
    }

    public void setID(int ID) {
        this.ID = ID;
    }

    public Usuarios getUsuarios() {
        return Usuarios;
    }

    public void setUsuarios(Usuarios Usuarios) {
        this.Usuarios = Usuarios;
    }

    public Servico getServico() {
        return servico;
    }

    public void setServico(Servico servico) {
        this.servico = servico;
    }

    public Animal getAnimal() {
        return animal;
    }

    public void setAnimal(Animal animal) {
        this.animal = animal;
    }

    public float getValor() {
        return valor;
    }

    public void setValor(float valor) {
        this.valor = valor;
    }

    public Date getData() {
        return data;
    }

    public void setData(Date data) {
        this.data = data;
    }
    
    
    
    
    
}
