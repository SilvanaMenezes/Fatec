/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Controller.Helpers;

import Modelo.Usuarios;
import View.Login;

/**
 *
 * @author lab02aluno
 */
public class LoginHelper {
    
    private final Login view;

    public LoginHelper(Login view) {
        this.view = view;
    }
    
    public Usuarios obterModel(){
        

        String nome = view.getJTextUsuario().getText();
        String senha = view.getJTextSenha().getText();
      
        
        Usuarios userModel = new Usuarios ("07/03/1981", "cliente", senha, "555.444.777-99", nome);
        
        return userModel;
    }
}
