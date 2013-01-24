// Copyright (c) 2013 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "chrome/test/chromedriver/command_names.h"

const char CommandNames::kNewSession[] = "newSession";
const char CommandNames::kStatus[] = "status";
const char CommandNames::kClose[] = "close";
const char CommandNames::kQuit[] = "quit";
const char CommandNames::kGet[] = "get";
const char CommandNames::kGoBack[] = "goBack";
const char CommandNames::kGoForward[] = "goForward";
const char CommandNames::kRefresh[] = "refresh";
const char CommandNames::kAddCookie[] = "addCookie";
const char CommandNames::kGetCookie[] = "getCookie";
const char CommandNames::kGetCookies[] = "getCookies";
const char CommandNames::kDeleteCookie[] = "deleteCookie";
const char CommandNames::kDeleteAllCookies[] = "deleteAllCookies";
const char CommandNames::kFindElement[] = "findElement";
const char CommandNames::kFindElements[] = "findElements";
const char CommandNames::kFindChildElement[] = "findChildElement";
const char CommandNames::kFindChildElements[] = "findChildElements";
const char CommandNames::kClearElement[] = "clearElement";
const char CommandNames::kClickElement[] = "clickElement";
const char CommandNames::kHoverOverElement[] = "hoverOverElement";
const char CommandNames::kSendKeysToElement[] = "sendKeysToElement";
const char CommandNames::kSendKeysToActiveElement[] = "sendKeysToActiveElement";
const char CommandNames::kSubmitElement[] = "submitElement";
const char CommandNames::kUploadFile[] = "uploadFile";
const char CommandNames::kGetCurrentWindowHandle[] = "getCurrentWindowHandle";
const char CommandNames::kGetWindowHandles[] = "getWindowHandles";
const char CommandNames::kSwitchToWindow[] = "switchToWindow";
const char CommandNames::kSwitchToFrame[] = "switchToFrame";
const char CommandNames::kGetActiveElement[] = "getActiveElement";
const char CommandNames::kGetCurrentUrl[] = "getCurrentUrl";
const char CommandNames::kGetPageSource[] = "getPageSource";
const char CommandNames::kGetTitle[] = "getTitle";
const char CommandNames::kExecuteScript[] = "executeScript";
const char CommandNames::kExecuteAsyncScript[] = "executeAsyncScript";
const char CommandNames::kSetBrowserVisible[] = "setBrowserVisible";
const char CommandNames::kIsBrowserVisible[] = "isBrowserVisible";
const char CommandNames::kGetElementText[] = "getElementText";
const char CommandNames::kGetElementValue[] = "getElementValue";
const char CommandNames::kGetElementTagName[] = "getElementTagName";
const char CommandNames::kDragElement[] = "dragElement";
const char CommandNames::kIsElementSelected[] = "isElementSelected";
const char CommandNames::kIsElementEnabled[] = "isElementEnabled";
const char CommandNames::kIsElementDisplayed[] = "isElementDisplayed";
const char CommandNames::kGetElementLocation[] = "getElementLocation";
const char CommandNames::kGetElementLocationOnceScrolledIntoView[] =
    "getElementLocationOnceScrolledIntoView";
const char CommandNames::kGetElementSize[] = "getElementSize";
const char CommandNames::kGetElementAttribute[] = "getElementAttribute";
const char CommandNames::kGetElementValueOfCssProperty[] =
    "getElementValueOfCssProperty";
const char CommandNames::kElementEquals[] = "elementEquals";
const char CommandNames::kScreenshot[] = "screenshot";
const char CommandNames::kGetAlert[] = "getAlert";
const char CommandNames::kAcceptAlert[] = "acceptAlert";
const char CommandNames::kDismissAlert[] = "dismissAlert";
const char CommandNames::kGetAlertText[] = "getAlertText";
const char CommandNames::kSetAlertValue[] = "setAlertValue";
const char CommandNames::kSetTimeout[] = "setTimeout";
const char CommandNames::kImplicitlyWait[] = "implicitlyWait";
const char CommandNames::kSetScriptTimeout[] = "setScriptTimeout";
const char CommandNames::kExecuteSQL[] = "executeSQL";
const char CommandNames::kGetLocation[] = "getLocation";
const char CommandNames::kSetLocation[] = "setLocation";
const char CommandNames::kGetAppCache[] = "getAppCache";
const char CommandNames::kGetStatus[] = "getStatus";
const char CommandNames::kClearAppCache[] = "clearAppCache";
const char CommandNames::kIsBrowserOnline[] = "isBrowserOnline";
const char CommandNames::kSetBrowserOnline[] = "setBrowserOnline";
const char CommandNames::kGetLocalStorageItem[] = "getLocalStorageItem";
const char CommandNames::kGetLocalStorageKeys[] = "getLocalStorageKeys";
const char CommandNames::kSetLocalStorageItem[] = "setLocalStorageItem";
const char CommandNames::kRemoveLocalStorageItem[] = "removeLocalStorageItem";
const char CommandNames::kClearLocalStorage[] = "clearLocalStorage";
const char CommandNames::kGetLocalStorageSize[] = "getLocalStorageSize";
const char CommandNames::kGetSessionStorageItem[] = "getSessionStorageItem";
const char CommandNames::kGetSessionStorageKey[] = "getSessionStorageKey";
const char CommandNames::kSetSessionStorageItem[] = "setSessionStorageItem";
const char CommandNames::kRemoveSessionStorageItem[] =
    "removeSessionStorageItem";
const char CommandNames::kClearSessionStorage[] = "clearSessionStorage";
const char CommandNames::kGetSessionStorageSize[] = "getSessionStorageSize";
const char CommandNames::kSetScreenOrientation[] = "setScreenOrientation";
const char CommandNames::kGetScreenOrientation[] = "getScreenOrientation";
const char CommandNames::kMouseClick[] = "mouseClick";
const char CommandNames::kMouseDoubleClick[] = "mouseDoubleClick";
const char CommandNames::kMouseButtonDown[] = "mouseButtonDown";
const char CommandNames::kMouseButtonUp[] = "mouseButtonUp";
const char CommandNames::kMouseMoveTo[] = "mouseMoveTo";
const char CommandNames::kSendKeys[] = "sendKeys";
const char CommandNames::kImeGetAvailableEngines[] = "imeGetAvailableEngines";
const char CommandNames::kImeGetActiveEngine[] = "imeGetActiveEngine";
const char CommandNames::kImeIsActivated[] = "imeIsActivated";
const char CommandNames::kImeDeactivate[] = "imeDeactivate";
const char CommandNames::kImeActivateEngine[] = "imeActivateEngine";
const char CommandNames::kTouchSingleTap[] = "touchSingleTap";
const char CommandNames::kTouchDown[] = "touchDown";
const char CommandNames::kTouchUp[] = "touchUp";
const char CommandNames::kTouchMove[] = "touchMove";
const char CommandNames::kTouchScroll[] = "touchScroll";
const char CommandNames::kTouchDoubleTap[] = "touchDoubleTap";
const char CommandNames::kTouchLongPress[] = "touchLongPress";
const char CommandNames::kTouchFlick[] = "touchFlick";
const char CommandNames::kSetWindowSize[] = "setWindowSize";
const char CommandNames::kSetWindowPosition[] = "setWindowPosition";
const char CommandNames::kGetWindowSize[] = "getWindowSize";
const char CommandNames::kGetWindowPosition[] = "getWindowPosition";
const char CommandNames::kMaximizeWindow[] = "maximizeWindow";
const char CommandNames::kGetAvailableLogTypes[] = "getAvailableLogTypes";
const char CommandNames::kGetLog[] = "getLog";
const char CommandNames::kGetSessionLogs[] = "getSessionLogs";

// Custom Chrome commands:
const char CommandNames::kQuitAll[] = "quitAll";
