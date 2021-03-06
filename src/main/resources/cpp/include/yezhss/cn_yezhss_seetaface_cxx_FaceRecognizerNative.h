/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class cn_yezhss_seetaface_cxx_FaceRecognizerNative */

#ifndef _Included_cn_yezhss_seetaface_cxx_FaceRecognizerNative
#define _Included_cn_yezhss_seetaface_cxx_FaceRecognizerNative
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     cn_yezhss_seetaface_cxx_FaceRecognizerNative
 * Method:    init
 * Signature: (Lcn/yezhss/seetaface/po/SeetaModelSetting;)J
 */
JNIEXPORT jlong JNICALL Java_cn_yezhss_seetaface_cxx_FaceRecognizerNative_init
  (JNIEnv *, jclass, jobject);

/*
 * Class:     cn_yezhss_seetaface_cxx_FaceRecognizerNative
 * Method:    cropFace
 * Signature: (JLcn/yezhss/seetaface/po/SeetaImageData;[Lcn/yezhss/seetaface/po/SeetaPointF;)Lcn/yezhss/seetaface/po/SeetaImageData;
 */
JNIEXPORT jobject JNICALL Java_cn_yezhss_seetaface_cxx_FaceRecognizerNative_cropFace
  (JNIEnv *, jclass, jlong, jobject, jobjectArray);

/*
 * Class:     cn_yezhss_seetaface_cxx_FaceRecognizerNative
 * Method:    extractCroppedFace
 * Signature: (JLcn/yezhss/seetaface/po/SeetaImageData;)[F
 */
JNIEXPORT jfloatArray JNICALL Java_cn_yezhss_seetaface_cxx_FaceRecognizerNative_extractCroppedFace
  (JNIEnv *, jclass, jlong, jobject);

/*
 * Class:     cn_yezhss_seetaface_cxx_FaceRecognizerNative
 * Method:    extract
 * Signature: (JLcn/yezhss/seetaface/po/SeetaImageData;[Lcn/yezhss/seetaface/po/SeetaPointF;)[F
 */
JNIEXPORT jfloatArray JNICALL Java_cn_yezhss_seetaface_cxx_FaceRecognizerNative_extract
  (JNIEnv *, jclass, jlong, jobject, jobjectArray);

/*
 * Class:     cn_yezhss_seetaface_cxx_FaceRecognizerNative
 * Method:    calculateSimilarity
 * Signature: (J[F[F)F
 */
JNIEXPORT jfloat JNICALL Java_cn_yezhss_seetaface_cxx_FaceRecognizerNative_calculateSimilarity
  (JNIEnv *, jclass, jlong, jfloatArray, jfloatArray);

/*
 * Class:     cn_yezhss_seetaface_cxx_FaceRecognizerNative
 * Method:    set
 * Signature: (JID)V
 */
JNIEXPORT void JNICALL Java_cn_yezhss_seetaface_cxx_FaceRecognizerNative_set
  (JNIEnv *, jclass, jlong, jint, jdouble);

/*
 * Class:     cn_yezhss_seetaface_cxx_FaceRecognizerNative
 * Method:    get
 * Signature: (JI)D
 */
JNIEXPORT jdouble JNICALL Java_cn_yezhss_seetaface_cxx_FaceRecognizerNative_get
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     cn_yezhss_seetaface_cxx_FaceRecognizerNative
 * Method:    close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_cn_yezhss_seetaface_cxx_FaceRecognizerNative_close
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
