/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class Paquete_CheckSum_ClaseConectoraLibrary */

#ifndef _Included_Paquete_CheckSum_ClaseConectoraLibrary
#define _Included_Paquete_CheckSum_ClaseConectoraLibrary
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     Paquete_CheckSum_ClaseConectoraLibrary
 * Method:    metodoParaCalcularCheckSum
 * Signature: ([II)V
 */
JNIEXPORT void JNICALL Java_Paquete_1CheckSum_ClaseConectoraLibrary_metodoParaCalcularCheckSum
  (JNIEnv *, jobject, jintArray, jint);

/*
 * Class:     Paquete_CheckSum_ClaseConectoraLibrary
 * Method:    metodoParaRegresarLowByte
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_Paquete_1CheckSum_ClaseConectoraLibrary_metodoParaRegresarLowByte
  (JNIEnv *, jobject);

/*
 * Class:     Paquete_CheckSum_ClaseConectoraLibrary
 * Method:    metodoParaRegresarHighByte
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_Paquete_1CheckSum_ClaseConectoraLibrary_metodoParaRegresarHighByte
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif