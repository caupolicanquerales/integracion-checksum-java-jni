/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include<jni.h>
#include<stdio.h>
#include"Paquete_CheckSum_ClaseConectoraLibrary.h"

#define PRESET_VALUE 0xFFFF;
#define POLYNOMIAL 0x8408;
unsigned short int crcValue;
unsigned short int polinomio=POLYNOMIAL;
jint low;
jint high;

JNIEXPORT void JNICALL Java_Paquete_1CheckSum_ClaseConectoraLibrary_metodoParaCalcularCheckSum
  (JNIEnv *env, jobject obj, jintArray arreglo, jint longitud)
{
    jint *codigo;
    crcValue=PRESET_VALUE;
    /*Forma de pasar el ARRAY suministrado por el argumento del metodo aun ARRAY en JNI*/
    codigo=(*env)->GetIntArrayElements(env,arreglo,NULL);
    unsigned char arregloByte[longitud];//arreglo para procesar en BYTE
    int i,j;
   /*Estructura para pasar el arreglo INT en un arreglo CHAR*/
    
    for(i=0;i<longitud;i++)
    {
        int valor=codigo[i];
        arregloByte[i]=valor;
    }
   
    for(i=0;i<longitud;i++)
    {
        crcValue=crcValue^*(arregloByte+i);
        
        for(j=0;j<8;j++)
        {
            if(crcValue & 0x0001)
            {
                crcValue=(crcValue>>1)^POLYNOMIAL;       
            }else
            {
                crcValue=(crcValue>>1);
            }
        }
    }
    
    low=crcValue & 0xFF;
    high=(crcValue>>8) & 0xFF;//forma de calcular el BYTE alto
    (*env)->ReleaseIntArrayElements(env,arreglo,codigo,0);//Manera de LIBERAR MEMORIA
   
    printf("%s\n"," estoy dentro de DLL checkSUM");
}

JNIEXPORT jint JNICALL Java_Paquete_1CheckSum_ClaseConectoraLibrary_metodoParaRegresarLowByte
  (JNIEnv *env, jobject obj)
{
    return low;
}

JNIEXPORT jint JNICALL Java_Paquete_1CheckSum_ClaseConectoraLibrary_metodoParaRegresarHighByte
  (JNIEnv *env, jobject obj)
{
    return high;
}
