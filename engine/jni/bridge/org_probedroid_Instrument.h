/**
 *   The MIT License (MIT)
 *   Copyright (C) 2016 ZongXian Shen <andy.zsshen@gmail.com>
 *
 *   Permission is hereby granted, free of charge, to any person obtaining a
 *   copy of this software and associated documentation files (the "Software"),
 *   to deal in the Software without restriction, including without limitation
 *   the rights to use, copy, modify, merge, publish, distribute, sublicense,
 *   and/or sell copies of the Software, and to permit persons to whom the
 *   Software is furnished to do so, subject to the following conditions:
 *
 *   The above copyright notice and this permission notice shall be included in
 *   all copies or substantial portions of the Software.
 *
 *   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 *   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 *   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 *   THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 *   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 *   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 *   IN THE SOFTWARE.
 */

/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_probedroid_Instrument */

#ifndef _Included_org_probedroid_Instrument
#define _Included_org_probedroid_Instrument
#ifdef __cplusplus
extern "C" {
#endif
#undef org_probedroid_Instrument_INSTRUMENT_OK
#define org_probedroid_Instrument_INSTRUMENT_OK 0L
#undef org_probedroid_Instrument_ERR_CLASS_NOT_FOUND
#define org_probedroid_Instrument_ERR_CLASS_NOT_FOUND 1L
#undef org_probedroid_Instrument_ERR_NO_SUCH_METHOD
#define org_probedroid_Instrument_ERR_NO_SUCH_METHOD 2L
#undef org_probedroid_Instrument_ERR_EMPTY_STRING
#define org_probedroid_Instrument_ERR_EMPTY_STRING 3L
#undef org_probedroid_Instrument_ERR_ABNORMAL_BUNDLE
#define org_probedroid_Instrument_ERR_ABNORMAL_BUNDLE 4L
/*
 * Class:     org_probedroid_Instrument
 * Method:    instrumentMethodNative
 * Signature: (ZLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Lorg/probedroid/support/MethodBundle;)I
 */
JNIEXPORT jint JNICALL Java_org_probedroid_Instrument_instrumentMethodNative
  (JNIEnv *, jobject, jboolean, jstring, jstring, jstring, jobject);

#ifdef __cplusplus
}
#endif
#endif
