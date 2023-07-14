/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package Controller;

import View.Login;

/**
 *
 * @author lab02aluno
 */
public class LoginController {

    private final Login view;

    public LoginController(Login view) {
        this.view = view;
    }
    
    
    
   public void ChamandoView(){
       System.out.println("Acessando view");
       this.view.ExibirMensagem("Recebi a chamada do Controller");
       
   }

    /*public void chamandoView() {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }*/
    
}
