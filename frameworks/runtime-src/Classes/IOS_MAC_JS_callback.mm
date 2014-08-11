//
//  IOS_MAC_JS_callback.cpp
//  cocos-standard
//
//  Created by weixueji on 8/8/14.
//
//

#include "IOS_MAC_JS_callback.h"


bool wxj_ios_callStaticMethod(JSContext *cx, uint32_t argc, jsval *vp) {
    jsval *argv = JS_ARGV(cx, vp);
    JSString *method_name_jsv = JSVAL_TO_STRING(argv[0]);
    JSString *method_argv_jsv = JSVAL_TO_STRING(argv[1]);
    char * method_name = JS_EncodeString(cx, method_name_jsv);
    char * method_argv = JS_EncodeString(cx, method_argv_jsv);
    JS_SET_RVAL(cx, vp, JSVAL_NULL);
    NSLog(@"\nmethod_name:%s\nmethod_argv:%s",method_name,method_argv);
    return true;
}

void js_register_wxj_ios_call(JSContext *cx,JSObject *global){
    JSFunctionSpec funcs[] = {
        JS_FS("wxj_ios_callStaticMethod", wxj_ios_callStaticMethod, 2, 0),
        JS_FS_END
    };
    JS_DefineFunctions(cx, global, funcs);
}

