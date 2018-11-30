/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

package Paquete_CheckSum;


public class ClaseConectoraLibrary {

    public ClaseConectoraLibrary() {
    }
    
    
    public native void metodoParaCalcularCheckSum(int[]arreglo,int longitud);
    public native int metodoParaRegresarLowByte();
    public native int metodoParaRegresarHighByte();
    
    static{
        /* Forma de plantear la ruta para la unicacion del .dll donde se correra el CHECKSUM */
        System.load("D:\\Users\\Capo\\Desktop\\programa_tesis_de_maestria\\LibraryCheckSumSensorTarjeta\\dist"
                + "\\ClaseConectoraLibrary.dll");
    
    }
}
