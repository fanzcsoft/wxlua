//----------------------------------------------------------------------------
// Purpose:     Defines for the wxWidgets binding of wxLua
// Author:      John Labenski, Francesco Montorsi
// Created:     04/02/2006
// RCS-ID:
// Copyright:   (c) John Labenski, 2006
// Licence:     wxWidgets licence
//----------------------------------------------------------------------------

#ifndef __WXLUA_BINDWXDEFS_H__
#define __WXLUA_BINDWXDEFS_H__

#include "wx/defs.h"
#include "wxlua/include/wxlstate.h"

// ----------------------------------------------------------------------------
// WXDLLIMPEXP macros for the wxWidgets bindings
// ----------------------------------------------------------------------------

#if defined(WXMAKINGDLL_BINDWXADV) || defined(WXMAKINGDLL_WXBINDADV)
    #define WXDLLIMPEXP_BINDWXADV WXEXPORT
    #define WXDLLIMPEXP_DATA_BINDWXADV(type) WXEXPORT type
#elif defined(WXUSINGDLL)
    #define WXDLLIMPEXP_BINDWXADV WXIMPORT
    #define WXDLLIMPEXP_DATA_BINDWXADV(type) WXIMPORT type
#else // not making nor using DLL
    #define WXDLLIMPEXP_BINDWXADV
    #define WXDLLIMPEXP_DATA_BINDWXADV(type) type
#endif

#if defined(WXMAKINGDLL_BINDWXAUI) || defined(WXMAKINGDLL_WXBINDAUI)
    #define WXDLLIMPEXP_BINDWXAUI WXEXPORT
    #define WXDLLIMPEXP_DATA_BINDWXAUI(type) WXEXPORT type
#elif defined(WXUSINGDLL)
    #define WXDLLIMPEXP_BINDWXAUI WXIMPORT
    #define WXDLLIMPEXP_DATA_BINDWXAUI(type) WXIMPORT type
#else // not making nor using DLL
    #define WXDLLIMPEXP_BINDWXAUI
    #define WXDLLIMPEXP_DATA_BINDWXAUI(type) type
#endif

#if defined(WXMAKINGDLL_BINDWXBASE) || defined(WXMAKINGDLL_WXBINDBASE)
    #define WXDLLIMPEXP_BINDWXBASE WXEXPORT
    #define WXDLLIMPEXP_DATA_BINDWXBASE(type) WXEXPORT type
#elif defined(WXUSINGDLL)
    #define WXDLLIMPEXP_BINDWXBASE WXIMPORT
    #define WXDLLIMPEXP_DATA_BINDWXBASE(type) WXIMPORT type
#else // not making nor using DLL
    #define WXDLLIMPEXP_BINDWXBASE
    #define WXDLLIMPEXP_DATA_BINDWXBASE(type) type
#endif

#if defined(WXMAKINGDLL_BINDWXCORE) || defined(WXMAKINGDLL_WXBINDCORE)
    #define WXDLLIMPEXP_BINDWXCORE WXEXPORT
    #define WXDLLIMPEXP_DATA_BINDWXCORE(type) WXEXPORT type
#elif defined(WXUSINGDLL)
    #define WXDLLIMPEXP_BINDWXCORE WXIMPORT
    #define WXDLLIMPEXP_DATA_BINDWXCORE(type) WXIMPORT type
#else // not making nor using DLL
    #define WXDLLIMPEXP_BINDWXCORE
    #define WXDLLIMPEXP_DATA_BINDWXCORE(type) type
#endif

#if defined(WXMAKINGDLL_BINDWXGL) || defined(WXMAKINGDLL_WXBINDGL)
    #define WXDLLIMPEXP_BINDWXGL WXEXPORT
    #define WXDLLIMPEXP_DATA_BINDWXGL(type) WXEXPORT type
#elif defined(WXUSINGDLL)
    #define WXDLLIMPEXP_BINDWXGL WXIMPORT
    #define WXDLLIMPEXP_DATA_BINDWXGL(type) WXIMPORT type
#else // not making nor using DLL
    #define WXDLLIMPEXP_BINDWXGL
    #define WXDLLIMPEXP_DATA_BINDWXGL(type) type
#endif

#if defined(WXMAKINGDLL_BINDWXHTML) || defined(WXMAKINGDLL_WXBINDHTML)
    #define WXDLLIMPEXP_BINDWXHTML WXEXPORT
    #define WXDLLIMPEXP_DATA_BINDWXHTML(type) WXEXPORT type
#elif defined(WXUSINGDLL)
    #define WXDLLIMPEXP_BINDWXHTML WXIMPORT
    #define WXDLLIMPEXP_DATA_BINDWXHTML(type) WXIMPORT type
#else // not making nor using DLL
    #define WXDLLIMPEXP_BINDWXHTML
    #define WXDLLIMPEXP_DATA_BINDWXHTML(type) type
#endif

#if defined(WXMAKINGDLL_BINDWXMEDIA) || defined(WXMAKINGDLL_WXBINDMEDIA)
    #define WXDLLIMPEXP_BINDWXMEDIA WXEXPORT
    #define WXDLLIMPEXP_DATA_BINDWXMEDIA(type) WXEXPORT type
#elif defined(WXUSINGDLL)
    #define WXDLLIMPEXP_BINDWXMEDIA WXIMPORT
    #define WXDLLIMPEXP_DATA_BINDWXMEDIA(type) WXIMPORT type
#else // not making nor using DLL
    #define WXDLLIMPEXP_BINDWXMEDIA
    #define WXDLLIMPEXP_DATA_BINDWXMEDIA(type) type
#endif

#if defined(WXMAKINGDLL_BINDWXNET) || defined(WXMAKINGDLL_WXBINDNET)
    #define WXDLLIMPEXP_BINDWXNET WXEXPORT
    #define WXDLLIMPEXP_DATA_BINDWXNET(type) WXEXPORT type
#elif defined(WXUSINGDLL)
    #define WXDLLIMPEXP_BINDWXNET WXIMPORT
    #define WXDLLIMPEXP_DATA_BINDWXNET(type) WXIMPORT type
#else // not making nor using DLL
    #define WXDLLIMPEXP_BINDWXNET
    #define WXDLLIMPEXP_DATA_BINDWXNET(type) type
#endif

#if defined(WXMAKINGDLL_BINDWXRICHTEXT) || defined(WXMAKINGDLL_WXBINDRICHTEXT)
    #define WXDLLIMPEXP_BINDWXRICHTEXT WXEXPORT
    #define WXDLLIMPEXP_DATA_BINDWXRICHTEXT(type) WXEXPORT type
#elif defined(WXUSINGDLL)
    #define WXDLLIMPEXP_BINDWXRICHTEXT WXIMPORT
    #define WXDLLIMPEXP_DATA_BINDWXRICHTEXT(type) WXIMPORT type
#else // not making nor using DLL
    #define WXDLLIMPEXP_BINDWXRICHTEXT
    #define WXDLLIMPEXP_DATA_BINDWXRICHTEXT(type) type
#endif

#if defined(WXMAKINGDLL_BINDWXSTC) || defined(WXMAKINGDLL_WXBINDSTC)
    #define WXDLLIMPEXP_BINDWXSTC WXEXPORT
    #define WXDLLIMPEXP_DATA_BINDWXSTC(type) WXEXPORT type
#elif defined(WXUSINGDLL)
    #define WXDLLIMPEXP_BINDWXSTC WXIMPORT
    #define WXDLLIMPEXP_DATA_BINDWXSTC(type) WXIMPORT type
#else // not making nor using DLL
    #define WXDLLIMPEXP_BINDWXSTC
    #define WXDLLIMPEXP_DATA_BINDWXSTC(type) type
#endif

#if defined(WXMAKINGDLL_BINDWXXML) || defined(WXMAKINGDLL_WXBINDXML)
    #define WXDLLIMPEXP_BINDWXXML WXEXPORT
    #define WXDLLIMPEXP_DATA_BINDWXXML(type) WXEXPORT type
#elif defined(WXUSINGDLL)
    #define WXDLLIMPEXP_BINDWXXML WXIMPORT
    #define WXDLLIMPEXP_DATA_BINDWXXML(type) WXIMPORT type
#else // not making nor using DLL
    #define WXDLLIMPEXP_BINDWXXML
    #define WXDLLIMPEXP_DATA_BINDWXXML(type) type
#endif

#if defined(WXMAKINGDLL_BINDWXXRC) || defined(WXMAKINGDLL_WXBINDXRC)
    #define WXDLLIMPEXP_BINDWXXRC WXEXPORT
    #define WXDLLIMPEXP_DATA_BINDWXXRC(type) WXEXPORT type
#elif defined(WXUSINGDLL)
    #define WXDLLIMPEXP_BINDWXXRC WXIMPORT
    #define WXDLLIMPEXP_DATA_BINDWXXRC(type) WXIMPORT type
#else // not making nor using DLL
    #define WXDLLIMPEXP_BINDWXXRC
    #define WXDLLIMPEXP_DATA_BINDWXXRC(type) type
#endif


// Declare this here to avoid having to include the socket headers when
// using WXLUA_DECLARE_BIND_ALL

#ifndef WXDLLIMPEXP_WXLUASOCKET
    #ifdef WXMAKINGDLL_WXLUASOCKET
        #define WXDLLIMPEXP_WXLUASOCKET WXEXPORT
        #define WXDLLIMPEXP_DATA_WXLUASOCKET(type) WXEXPORT type
    #elif defined(WXUSINGDLL)
        #define WXDLLIMPEXP_WXLUASOCKET WXIMPORT
        #define WXDLLIMPEXP_DATA_WXLUASOCKET(type) WXIMPORT type
    #else // not making nor using DLL
        #define WXDLLIMPEXP_WXLUASOCKET
        #define WXDLLIMPEXP_DATA_WXLUASOCKET(type) type
    #endif
#endif // WXDLLIMPEXP_WXLUASOCKET

// ----------------------------------------------------------------------------
// wxLUA_USEBINDING_XXX defines control the WXLUA_DECLARE_BIND_XXX and
// WXLUA_IMPLEMENT_BIND_XXX macros to allow the wxLuaBinding_XXX_init()
// functions to be called or not depending on the existence of the bind libs.
//
// Normally =1, but they are overridden by autoconf (configure) to 0 using
// the compiler directive -DwxLUA_USEBINDING_XXX=0 if the corresponding
// wxWidgets library is not found.
// ----------------------------------------------------------------------------

// Enable or disable initializing the wxLua bindings

#ifndef wxLUA_USEBINDING_WXLUA
    #define wxLUA_USEBINDING_WXLUA                      1
#endif
#ifndef wxLUA_USEBINDING_WXLUASOCKET
    #define wxLUA_USEBINDING_WXLUASOCKET                1
#endif

// Enable or disable initializing the wxWidgets bindings

#ifndef wxLUA_USEBINDING_WXADV
    #define wxLUA_USEBINDING_WXADV                      1
#endif
#ifndef wxLUA_USEBINDING_WXAUI
    #define wxLUA_USEBINDING_WXAUI                      1
#endif
#ifndef wxLUA_USEBINDING_WXBASE
    #define wxLUA_USEBINDING_WXBASE                     1
#endif
#ifndef wxLUA_USEBINDING_WXCORE
    #define wxLUA_USEBINDING_WXCORE                     1
#endif
#ifndef wxLUA_USEBINDING_WXGL
    #define wxLUA_USEBINDING_WXGL                       1
#endif
#ifndef wxLUA_USEBINDING_WXHTML
    #define wxLUA_USEBINDING_WXHTML                     1
#endif
#ifndef wxLUA_USEBINDING_WXMEDIA
    #define wxLUA_USEBINDING_WXMEDIA                    1
#endif
#ifndef wxLUA_USEBINDING_WXNET
    #define wxLUA_USEBINDING_WXNET                      1
#endif
#ifndef wxLUA_USEBINDING_WXRICHTEXT
    #define wxLUA_USEBINDING_WXRICHTEXT                 0 // NOT FINISHED or WORKING
#endif
#ifndef wxLUA_USEBINDING_WXSTC
    #define wxLUA_USEBINDING_WXSTC                      1
#endif
#ifndef wxLUA_USEBINDING_WXXML
    #define wxLUA_USEBINDING_WXXML                      1
#endif
#ifndef wxLUA_USEBINDING_WXXRC
    #define wxLUA_USEBINDING_WXXRC                      1
#endif

// ----------------------------------------------------------------------------
// Macros to initialize the wxWidgets bindings taking the wxUSE_XXX conditions
// into account.
//
// Note: This cannot possibly work 100% of the time since even though these
// conditions may be true, you still have to link to the libraries which
// cannot be checked for. However, if these conditions are enabled the libs
// are most likely created so it's better than nothing.
//
// NOTE: Normally you need only add a line like this at the top of your file
// extern bool wxLuaBinding_XXX_init();
// and another like this before you use any wxLuaStates.
// wxLuaBinding_XXX_init();
// The "extern" is used to avoid having to #include the binding header which
// can be rather long.
// ----------------------------------------------------------------------------

#if wxLUA_USEBINDING_WXLUA
    #define WXLUA_DECLARE_BIND_WXLUA extern WXDLLIMPEXP_WXLUA bool wxLuaBinding_wxlua_init(); // modules/wxlua
    #define WXLUA_IMPLEMENT_BIND_WXLUA wxLuaBinding_wxlua_init();
#else
    #define WXLUA_DECLARE_BIND_WXLUA
    #define WXLUA_IMPLEMENT_BIND_WXLUA
#endif // wxLUA_USEBINDING_WXLUA

#if wxLUA_USEBINDING_WXLUASOCKET
    #define WXLUA_DECLARE_BIND_WXLUASOCKET extern WXDLLIMPEXP_WXLUASOCKET bool wxLuaBinding_wxluasocket_init(); // modules/wxluasocket
    #define WXLUA_IMPLEMENT_BIND_WXLUASOCKET wxLuaBinding_wxluasocket_init();
#else
    #define WXLUA_DECLARE_BIND_WXLUASOCKET
    #define WXLUA_IMPLEMENT_BIND_WXLUASOCKET
#endif //wxLUA_USEBINDING_WXLUASOCKET



#if wxLUA_USEBINDING_WXADV
    #define WXLUA_DECLARE_BIND_WXADV  extern WXDLLIMPEXP_BINDWXADV bool wxLuaBinding_wxadv_init(); // modules/wxbind
    #define WXLUA_IMPLEMENT_BIND_WXADV  wxLuaBinding_wxadv_init();
#else
    #define WXLUA_DECLARE_BIND_WXADV
    #define WXLUA_IMPLEMENT_BIND_WXADV
#endif // wxLUA_USEBINDING_WXADV

#if wxLUA_USEBINDING_WXAUI && wxUSE_AUI
    #define WXLUA_DECLARE_BIND_WXAUI extern WXDLLIMPEXP_BINDWXAUI bool wxLuaBinding_wxaui_init(); // modules/wxbind
    #define WXLUA_IMPLEMENT_BIND_WXAUI wxLuaBinding_wxaui_init();
#else
    #define WXLUA_DECLARE_BIND_WXAUI
    #define WXLUA_IMPLEMENT_BIND_WXAUI
    //#warning "WXLUA_DECLARE/IMPLEMENT_BIND_WXAUI is not used since wxUSE_AUI=0"
#endif // wxLUA_USEBINDING_WXAUI && wxUSE_AUI

#if wxLUA_USEBINDING_WXBASE
    #define WXLUA_DECLARE_BIND_WXBASE extern WXDLLIMPEXP_BINDWXBASE bool wxLuaBinding_wxbase_init(); // modules/wxbind
    #define WXLUA_IMPLEMENT_BIND_WXBASE wxLuaBinding_wxbase_init();
#else
    #define WXLUA_DECLARE_BIND_WXBASE
    #define WXLUA_IMPLEMENT_BIND_WXBASE
#endif // wxLUA_USEBINDING_WXBASE

#if wxLUA_USEBINDING_WXCORE
    #define WXLUA_DECLARE_BIND_WXCORE extern WXDLLIMPEXP_BINDWXCORE bool wxLuaBinding_wxcore_init(); // modules/wxbind
    #define WXLUA_IMPLEMENT_BIND_WXCORE wxLuaBinding_wxcore_init();
#else
    #define WXLUA_DECLARE_BIND_WXCORE
    #define WXLUA_IMPLEMENT_BIND_WXCORE
#endif // wxLUA_USEBINDING_WXCORE

#if wxLUA_USEBINDING_WXGL && wxUSE_GLCANVAS
    #define WXLUA_DECLARE_BIND_WXGL extern WXDLLIMPEXP_BINDWXGL bool wxLuaBinding_wxgl_init(); // modules/wxbind
    #define WXLUA_IMPLEMENT_BIND_WXGL wxLuaBinding_wxgl_init();
#else
    #define WXLUA_DECLARE_BIND_WXGL
    #define WXLUA_IMPLEMENT_BIND_WXGL
#endif // wxLUA_USEBINDING_WXGL && wxUSE_GLCANVAS

#if wxLUA_USEBINDING_WXHTML && wxUSE_HTML
    #define WXLUA_DECLARE_BIND_WXHTML extern WXDLLIMPEXP_BINDWXHTML bool wxLuaBinding_wxhtml_init(); // modules/wxbind
    #define WXLUA_IMPLEMENT_BIND_WXHTML wxLuaBinding_wxhtml_init();
#else
    #define WXLUA_DECLARE_BIND_WXHTML
    #define WXLUA_IMPLEMENT_BIND_WXHTML
#endif // wxLUA_USEBINDING_WXHTML && wxUSE_HTML

#if wxLUA_USEBINDING_WXMEDIA && wxUSE_MEDIACTRL
    #define WXLUA_DECLARE_BIND_WXMEDIA extern WXDLLIMPEXP_BINDWXMEDIA bool wxLuaBinding_wxmedia_init(); // modules/wxbind
    #define WXLUA_IMPLEMENT_BIND_WXMEDIA wxLuaBinding_wxmedia_init();
#else
    #define WXLUA_DECLARE_BIND_WXMEDIA
    #define WXLUA_IMPLEMENT_BIND_WXMEDIA
#endif // wxLUA_USEBINDING_WXMEDIA && wxUSE_MEDIACTRL

#if wxLUA_USEBINDING_WXNET
    #define WXLUA_DECLARE_BIND_WXNET  extern WXDLLIMPEXP_BINDWXNET  bool wxLuaBinding_wxnet_init(); // modules/wxbind
    #define WXLUA_IMPLEMENT_BIND_WXNET  wxLuaBinding_wxnet_init();
#else
    #define WXLUA_DECLARE_BIND_WXNET
    #define WXLUA_IMPLEMENT_BIND_WXNET
#endif // wxLUA_USEBINDING_WXNET

#if wxLUA_USEBINDING_WXRICHTEXT && wxUSE_RICHTEXT
    #define WXLUA_DECLARE_BIND_WXRICHTEXT extern WXDLLIMPEXP_BINDWXRICHTEXT bool wxLuaBinding_wxrichtext_init(); // modules/wxbind
    #define WXLUA_IMPLEMENT_BIND_WXRICHTEXT wxLuaBinding_wxrichtext_init();
#else
    #define WXLUA_DECLARE_BIND_WXRICHTEXT
    #define WXLUA_IMPLEMENT_BIND_WXRICHTEXT
#endif // wxLUA_USEBINDING_WXRICHTEXT && wxUSE_RICHTEXT

#if wxLUA_USEBINDING_WXSTC
    #define WXLUA_DECLARE_BIND_WXSTC extern WXDLLIMPEXP_BINDWXSTC bool wxLuaBinding_wxstc_init(); // modules/wxbind
    #define WXLUA_IMPLEMENT_BIND_WXSTC wxLuaBinding_wxstc_init();
#else
    #define WXLUA_DECLARE_BIND_WXSTC
    #define WXLUA_IMPLEMENT_BIND_WXSTC
#endif // wxLUA_USEBINDING_WXSTC

#if wxLUA_USEBINDING_WXXML && wxUSE_XML
    #define WXLUA_DECLARE_BIND_WXXML extern WXDLLIMPEXP_BINDWXXML bool wxLuaBinding_wxxml_init(); // modules/wxbind
    #define WXLUA_IMPLEMENT_BIND_WXXML wxLuaBinding_wxxml_init();
#else
    #define WXLUA_DECLARE_BIND_WXXML
    #define WXLUA_IMPLEMENT_BIND_WXXML
#endif // wxLUA_USEBINDING_WXXML && wxUSE_XML

#if wxLUA_USEBINDING_WXXRC && wxUSE_XRC
    #define WXLUA_DECLARE_BIND_WXXRC extern WXDLLIMPEXP_BINDWXXRC bool wxLuaBinding_wxxrc_init(); // modules/wxbind
    #define WXLUA_IMPLEMENT_BIND_WXXRC wxLuaBinding_wxxrc_init();
#else
    #define WXLUA_DECLARE_BIND_WXXRC
    #define WXLUA_IMPLEMENT_BIND_WXXRC
#endif // wxLUA_USEBINDING_WXXRC && wxUSE_XRC

// ----------------------------------------------------------------------------
// Simplified macros to declare and implement the bindings
// Note the order of them which follows the C++ linking order.

// Declare all the bindings
#define WXLUA_DECLARE_BIND_ALL \
    WXLUA_DECLARE_BIND_WXLUA \
    WXLUA_DECLARE_BIND_WXLUASOCKET \
    WXLUA_DECLARE_BIND_WXBASE \
    WXLUA_DECLARE_BIND_WXCORE \
    WXLUA_DECLARE_BIND_WXADV \
    WXLUA_DECLARE_BIND_WXNET \
    WXLUA_DECLARE_BIND_WXXML \
    WXLUA_DECLARE_BIND_WXXRC \
    WXLUA_DECLARE_BIND_WXHTML \
    WXLUA_DECLARE_BIND_WXAUI \
    WXLUA_DECLARE_BIND_WXMEDIA \
    WXLUA_DECLARE_BIND_WXGL \
    WXLUA_DECLARE_BIND_WXSTC

// Declare a standard set of bindings, leaving out the more specialized libs
// These are libs that are almost always compiled by wxWidgets/wxLua
#define WXLUA_DECLARE_BIND_STD \
    WXLUA_DECLARE_BIND_WXLUA \
    WXLUA_DECLARE_BIND_WXBASE \
    WXLUA_DECLARE_BIND_WXCORE \
    WXLUA_DECLARE_BIND_WXADV \
    WXLUA_DECLARE_BIND_WXNET

// ----------------------------------------------------------------------------

// Implement all the bindings
#define WXLUA_IMPLEMENT_BIND_ALL \
    WXLUA_IMPLEMENT_BIND_WXLUA \
    WXLUA_IMPLEMENT_BIND_WXLUASOCKET \
    WXLUA_IMPLEMENT_BIND_WXBASE \
    WXLUA_IMPLEMENT_BIND_WXCORE \
    WXLUA_IMPLEMENT_BIND_WXADV \
    WXLUA_IMPLEMENT_BIND_WXNET \
    WXLUA_IMPLEMENT_BIND_WXXML \
    WXLUA_IMPLEMENT_BIND_WXXRC \
    WXLUA_IMPLEMENT_BIND_WXHTML \
    WXLUA_IMPLEMENT_BIND_WXAUI \
    WXLUA_IMPLEMENT_BIND_WXMEDIA \
    WXLUA_IMPLEMENT_BIND_WXGL \
    WXLUA_IMPLEMENT_BIND_WXSTC

// Implement a standard set of bindings, leaving out the more specialized libs
// These are libs that are almost always compiled by wxWidgets/wxLua
#define WXLUA_IMPLEMENT_BIND_STD \
    WXLUA_IMPLEMENT_BIND_WXLUA \
    WXLUA_IMPLEMENT_BIND_WXBASE \
    WXLUA_IMPLEMENT_BIND_WXCORE \
    WXLUA_IMPLEMENT_BIND_WXADV \
    WXLUA_IMPLEMENT_BIND_WXNET


#endif // __WXLUA_BINDWXDEFS_H__
