//
//  IOS_MAC_JS_callback.h
//  cocos-standard
//
//  Created by weixueji on 8/8/14.
//
//

#ifndef cocos_standard_IOS_MAC_JS_callback_h
#define cocos_standard_IOS_MAC_JS_callback_h
#include "jsapi.h"
#include "cocos2d.h"

bool wxj_ios_callStaticMethod(JSContext *cx, uint32_t argc, jsval *vp);

void js_register_wxj_ios_call(JSContext *cx, JSObject *global);


#endif
