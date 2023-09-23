#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_133a/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_133a
#include "struct_converters.h"
#include "cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002.h"

struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002
{
#ifdef __cplusplus
    virtual ~cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002(  ) = 0;
    virtual bool Init(  ) = 0;
    virtual bool Shutdown(  ) = 0;
    virtual uint64_t CreateBrowser( const char *, const char * ) = 0;
    virtual void RemoveBrowser( uint32_t ) = 0;
    virtual void LoadURL( uint32_t, const char *, const char * ) = 0;
    virtual void SetSize( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void StopLoad( uint32_t ) = 0;
    virtual void Reload( uint32_t ) = 0;
    virtual void GoBack( uint32_t ) = 0;
    virtual void GoForward( uint32_t ) = 0;
    virtual void AddHeader( uint32_t, const char *, const char * ) = 0;
    virtual void ExecuteJavascript( uint32_t, const char * ) = 0;
    virtual void MouseUp( uint32_t, uint32_t ) = 0;
    virtual void MouseDown( uint32_t, uint32_t ) = 0;
    virtual void MouseDoubleClick( uint32_t, uint32_t ) = 0;
    virtual void MouseMove( uint32_t, int32_t, int32_t ) = 0;
    virtual void MouseWheel( uint32_t, int32_t ) = 0;
    virtual void KeyDown( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void KeyUp( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void KeyChar( uint32_t, uint32_t, uint32_t ) = 0;
    virtual void SetHorizontalScroll( uint32_t, uint32_t ) = 0;
    virtual void SetVerticalScroll( uint32_t, uint32_t ) = 0;
    virtual void SetKeyFocus( uint32_t, bool ) = 0;
    virtual void ViewSource( uint32_t ) = 0;
    virtual void CopyToClipboard( uint32_t ) = 0;
    virtual void PasteFromClipboard( uint32_t ) = 0;
    virtual void Find( uint32_t, const char *, bool, bool ) = 0;
    virtual void StopFind( uint32_t ) = 0;
    virtual void GetLinkAtPosition( uint32_t, int32_t, int32_t ) = 0;
    virtual void SetCookie( const char *, const char *, const char *, const char *, uint32_t, bool, bool ) = 0;
    virtual void SetPageScaleFactor( uint32_t, float, int32_t, int32_t ) = 0;
    virtual void AllowStartRequest( uint32_t, bool ) = 0;
    virtual void JSDialogResponse( uint32_t, bool ) = 0;
    virtual void FileLoadDialogResponse( uint32_t, const char ** ) = 0;
#endif /* __cplusplus */
};

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Init_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    params->_ret = iface->Init(  );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Shutdown_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    params->_ret = iface->Shutdown(  );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CreateBrowser_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    params->_ret = iface->CreateBrowser( params->pchUserAgent, params->pchUserCSS );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_RemoveBrowser_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->RemoveBrowser( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_LoadURL_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->LoadURL( params->unBrowserHandle, params->pchURL, params->pchPostData );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetSize_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->SetSize( params->unBrowserHandle, params->unWidth, params->unHeight );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopLoad_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->StopLoad( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Reload_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->Reload( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoBack_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->GoBack( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GoForward_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->GoForward( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AddHeader_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->AddHeader( params->unBrowserHandle, params->pchKey, params->pchValue );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ExecuteJavascript_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->ExecuteJavascript( params->unBrowserHandle, params->pchScript );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseUp_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->MouseUp( params->unBrowserHandle, params->eMouseButton );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDown_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->MouseDown( params->unBrowserHandle, params->eMouseButton );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseDoubleClick_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->MouseDoubleClick( params->unBrowserHandle, params->eMouseButton );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseMove_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->MouseMove( params->unBrowserHandle, params->x, params->y );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_MouseWheel_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->MouseWheel( params->unBrowserHandle, params->nDelta );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyDown_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    uint32_t lin_nNativeKeyCode = manual_convert_nNativeKeyCode( params->nNativeKeyCode );
    iface->KeyDown( params->unBrowserHandle, lin_nNativeKeyCode, params->eHTMLKeyModifiers );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyUp_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    uint32_t lin_nNativeKeyCode = manual_convert_nNativeKeyCode( params->nNativeKeyCode );
    iface->KeyUp( params->unBrowserHandle, lin_nNativeKeyCode, params->eHTMLKeyModifiers );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_KeyChar_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->KeyChar( params->unBrowserHandle, params->cUnicodeChar, params->eHTMLKeyModifiers );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetHorizontalScroll_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->SetHorizontalScroll( params->unBrowserHandle, params->nAbsolutePixelScroll );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetVerticalScroll_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->SetVerticalScroll( params->unBrowserHandle, params->nAbsolutePixelScroll );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetKeyFocus_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->SetKeyFocus( params->unBrowserHandle, params->bHasKeyFocus );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_ViewSource_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->ViewSource( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_CopyToClipboard_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->CopyToClipboard( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_PasteFromClipboard_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->PasteFromClipboard( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_Find_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->Find( params->unBrowserHandle, params->pchSearchStr, params->bCurrentlyInFind, params->bReverse );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_StopFind_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->StopFind( params->unBrowserHandle );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_GetLinkAtPosition_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->GetLinkAtPosition( params->unBrowserHandle, params->x, params->y );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetCookie_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->SetCookie( params->pchHostname, params->pchKey, params->pchValue, params->pchPath, params->nExpires, params->bSecure, params->bHTTPOnly );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_SetPageScaleFactor_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->SetPageScaleFactor( params->unBrowserHandle, params->flZoom, params->nPointX, params->nPointY );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_AllowStartRequest_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->AllowStartRequest( params->unBrowserHandle, params->bAllowed );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_JSDialogResponse_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->JSDialogResponse( params->unBrowserHandle, params->bResult );
}

void cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse( struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002_FileLoadDialogResponse_params *params )
{
    struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *iface = (struct cppISteamHTMLSurface_STEAMHTMLSURFACE_INTERFACE_VERSION_002 *)params->linux_side;
    iface->FileLoadDialogResponse( params->unBrowserHandle, params->pchSelectedFiles );
}

#ifdef __cplusplus
}
#endif
