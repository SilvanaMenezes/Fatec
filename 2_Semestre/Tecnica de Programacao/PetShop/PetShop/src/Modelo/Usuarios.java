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


public class Usuarios extends Pessoa {

    private Date dtNascimento;
    private String nvAcesso;
    private String pwSenha;

    public Usuarios(String dtNascimento, String nvAcesso, String pwSenha, String CPF, String nome, char sexo, String telefone, String email) {
        super(CPF, nome, sexo, telefone, email);
        try {
            this.dtNascimento = new SimpleDateFormat("dd/MM/YYYY").parse(dtNascimento);
        } catch (ParseException ex) {
            Logger.getLogger(Usuarios.class.getName()).log(Level.SEVERE, null, ex);
        }
        this.nvAcesso = nvAcesso;
        this.pwSenha = pwSenha;        
        
    }

    public Usuarios(String dtNascimento, String nvAcesso, String pwSenha, String CPF, String nome) {
        super(CPF, nome);        
        try {
            this.dtNascimento = new SimpleDateFormat("dd/MM/YYYY").parse(dtNascimento);
        } catch(ParseException ex) {
            Logger.getLogger(Usuarios.class.getName()).log(Level.SEVERE, null, ex);
        }
        this.nvAcesso = nvAcesso;
        this.pwSenha = pwSenha;
    }

    public Usuarios(Date dtNascimento, String CPF, String nome) {
        super(CPF, nome);
        this.dtNascimento = dtNascimento;
    }  

    public Date getDtNascimento() {
        return dtNascimento;
    }

    public void setDtNascimento(Date dtNascimento) {
        this.dtNascimento = dtNascimento;
    }

    public String getNvAcesso() {
        return nvAcesso;
    }

    public void setNvAcesso(String nvAcesso) {
        this.nvAcesso = nvAcesso;
    }

    public String getPwSenha() {
        return pwSenha;
    }

    public void setPwSenha(String pwSenha) {
        this.pwSenha = pwSenha;
    }
    
    
    
    
    
}
