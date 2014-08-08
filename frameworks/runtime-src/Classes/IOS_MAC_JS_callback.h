//
//  IOS_MAC_JS_callback.h
//  cocos-standard
//
//  Created by weixueji on 8/8/14.
//
//

#ifndef cocos_standard_IOS_MAC_JS_callback_h
#define cocos_standard_IOS_MAC_JS_callback_h

#include "ScriptingCore.h"
#include "AppDelegate.h"

extern jsval jsCallerObject;
extern AppDelegate *gAppDelegate;
extern JSFunctionSpec js_global_functions[];

JSBool beServer(JSContext *cx, uint32_t argc, jsval *vp);
JSBool beClient(JSContext *cx, uint32_t argc, jsval *vp);
JSBool joinServer(JSContext *cx, uint32_t argc, jsval *vp);
JSBool endSession(JSContext *cx, uint32_t argc, jsval *vp);
JSBool disconnectFromServer(JSContext *cx, uint32_t argc, jsval *vp);
JSBool sendPacket(JSContext *cx, uint32_t argc, jsval *vp);

void tirggerFunc(string funcToTrigger);
void tirggerFuncWithString(string funcToTrigger, NSString *message);
void tirggerFuncWithString(string funcToTrigger, string message);

#endif
