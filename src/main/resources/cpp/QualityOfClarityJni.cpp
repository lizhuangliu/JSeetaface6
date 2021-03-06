#include "pch.h"
#include <yezhss/cn_yezhss_seetaface_cxx_QualityOfClarityNative.h>
#include <seeta/QualityOfClarity.h>

static jobject toQualityResult(JNIEnv* env, seeta::QualityResult result)
{
	jclass qualityResultClazz = getClass(env, "cn.yezhss.seetaface.po.QualityResult");
	jobject qualityResult = newObject(env, qualityResultClazz);
	setInt(env, qualityResult, qualityResultClazz, "level", result.level);
	setFloat(env, qualityResult, qualityResultClazz, "score", result.score);
	return qualityResult;
}

/*
 * Class:     cn_yezhss_seetaface_cxx_QualityOfClarityNative
 * Method:    init
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_cn_yezhss_seetaface_cxx_QualityOfClarityNative_init__
(JNIEnv*, jclass)
{
	seeta::QualityOfClarity* quality = new seeta::QualityOfClarity();
	return (jlong)quality;
}

/*
 * Class:     cn_yezhss_seetaface_cxx_QualityOfClarityNative
 * Method:    init
 * Signature: (FF)J
 */
JNIEXPORT jlong JNICALL Java_cn_yezhss_seetaface_cxx_QualityOfClarityNative_init__FF
(JNIEnv*, jclass, jfloat low, jfloat high)
{
	seeta::QualityOfClarity* quality = new seeta::QualityOfClarity(low, high);
	return (jlong)quality;
}

/*
 * Class:     cn_yezhss_seetaface_cxx_QualityOfClarityNative
 * Method:    check
 * Signature: (JLcn/yezhss/seetaface/po/SeetaImageData;Lcn/yezhss/seetaface/po/SeetaRect;[Lcn/yezhss/seetaface/po/SeetaPointF;)Lcn/yezhss/seetaface/po/QualityResult;
 */
JNIEXPORT jobject JNICALL Java_cn_yezhss_seetaface_cxx_QualityOfClarityNative_check
(JNIEnv* env, jclass, jlong nativeId, jobject image, jobject rect, jobjectArray points)
{
	seeta::QualityOfClarity* quality = (seeta::QualityOfClarity*)nativeId;
	int n = env->GetArrayLength(points);
	SeetaImageData imageData = toSeetaImageData(env, image);
	SeetaRect face = toRect(env, rect);
	SeetaPointF* pointFs = toPoints(env, points);
	seeta::QualityResult result = quality->check(imageData, face, pointFs, n);
	delete pointFs;
	return toQualityResult(env, result);
}

/*
 * Class:     cn_yezhss_seetaface_cxx_QualityOfClarityNative
 * Method:    close
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_cn_yezhss_seetaface_cxx_QualityOfClarityNative_close
(JNIEnv*, jclass, jlong nativeId)
{
	seeta::QualityOfClarity* quality = (seeta::QualityOfClarity*)nativeId;
	delete quality;
}