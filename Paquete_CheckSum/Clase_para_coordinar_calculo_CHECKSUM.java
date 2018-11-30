/*
 * Clase encargada de order la ejecucion de CARGAR la libreria DLL para la
    ejecucion del calculo del CHECK SUM.
 */
package Paquete_CheckSum;


public class Clase_para_coordinar_calculo_CHECKSUM 
{
    public int low;
    public int high;
    
    public Clase_para_coordinar_calculo_CHECKSUM() {
    }
    public void metodo_para_determinar_CHECKSUM(int[] lineaCodigo)
    {
        int longitud=lineaCodigo.length;
        ClaseConectoraLibrary libraryCheckSum= new ClaseConectoraLibrary();
        
        libraryCheckSum.metodoParaCalcularCheckSum(lineaCodigo, longitud);
        low= libraryCheckSum.metodoParaRegresarLowByte();
        high= libraryCheckSum.metodoParaRegresarHighByte();
       
    }
    public int metodo_para_regresar_LOW_CheckSum()
    {
        return low;
    }
    public int metodo_para_regresar_HIGH_CheckSum()
    {
        return high;
    }
    
}//fin de la clase 
