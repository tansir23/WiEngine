/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_nodes_BitmapFontLabel */

#ifndef _Included_com_wiyun_engine_nodes_BitmapFontLabel
#define _Included_com_wiyun_engine_nodes_BitmapFontLabel
#ifdef __cplusplus
extern "C" {
#endif
#undef com_wiyun_engine_nodes_BitmapFontLabel_LEFT
#define com_wiyun_engine_nodes_BitmapFontLabel_LEFT 0L
#undef com_wiyun_engine_nodes_BitmapFontLabel_CENTER
#define com_wiyun_engine_nodes_BitmapFontLabel_CENTER 1L
#undef com_wiyun_engine_nodes_BitmapFontLabel_RIGHT
#define com_wiyun_engine_nodes_BitmapFontLabel_RIGHT 2L
/*
 * Class:     com_wiyun_engine_nodes_BitmapFontLabel
 * Method:    nativeInit
 * Signature: (Lcom/wiyun/engine/utils/BitmapFont;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_BitmapFontLabel_nativeInit
  (JNIEnv *, jobject, jobject, jstring);

/*
 * Class:     com_wiyun_engine_nodes_BitmapFontLabel
 * Method:    setFont
 * Signature: (Lcom/wiyun/engine/utils/BitmapFont;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_BitmapFontLabel_setFont
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_BitmapFontLabel
 * Method:    nativeGetFont
 * Signature: (Lcom/wiyun/engine/utils/BitmapFont;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_BitmapFontLabel_nativeGetFont
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_BitmapFontLabel
 * Method:    setText
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_BitmapFontLabel_setText
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_wiyun_engine_nodes_BitmapFontLabel
 * Method:    getText
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_wiyun_engine_nodes_BitmapFontLabel_getText
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_BitmapFontLabel
 * Method:    setColor
 * Signature: (Lcom/wiyun/engine/types/WYColor3B;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_BitmapFontLabel_setColor
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_BitmapFontLabel
 * Method:    nativeGetColor
 * Signature: (Lcom/wiyun/engine/types/WYColor3B;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_BitmapFontLabel_nativeGetColor
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_BitmapFontLabel
 * Method:    getAlpha
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_BitmapFontLabel_getAlpha
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_BitmapFontLabel
 * Method:    setAlpha
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_BitmapFontLabel_setAlpha
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_BitmapFontLabel
 * Method:    setSpaceWidth
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_BitmapFontLabel_setSpaceWidth
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_BitmapFontLabel
 * Method:    getSpaceWidth
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_BitmapFontLabel_getSpaceWidth
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_BitmapFontLabel
 * Method:    setTabSize
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_BitmapFontLabel_setTabSize
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_BitmapFontLabel
 * Method:    getTabSize
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_BitmapFontLabel_getTabSize
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_BitmapFontLabel
 * Method:    setLineWidth
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_BitmapFontLabel_setLineWidth
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     com_wiyun_engine_nodes_BitmapFontLabel
 * Method:    getLineWidth
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_BitmapFontLabel_getLineWidth
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_BitmapFontLabel
 * Method:    setAlignment
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_BitmapFontLabel_setAlignment
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_BitmapFontLabel
 * Method:    getAlignment
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_BitmapFontLabel_getAlignment
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_BitmapFontLabel
 * Method:    getLineSpacing
 * Signature: ()F
 */
JNIEXPORT jfloat JNICALL Java_com_wiyun_engine_nodes_BitmapFontLabel_getLineSpacing
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_BitmapFontLabel
 * Method:    setLineSpacing
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_BitmapFontLabel_setLineSpacing
  (JNIEnv *, jobject, jfloat);

#ifdef __cplusplus
}
#endif
#endif
