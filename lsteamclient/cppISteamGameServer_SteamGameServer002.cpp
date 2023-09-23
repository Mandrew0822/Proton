#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_099x/steam_api.h"
#include "steamworks_sdk_099x/isteamgameserver.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_099x
#include "struct_converters.h"
#include "cppISteamGameServer_SteamGameServer002.h"

struct cppISteamGameServer_SteamGameServer002
{
#ifdef __cplusplus
    virtual void LogOn(  ) = 0;
    virtual void LogOff(  ) = 0;
    virtual bool BLoggedOn(  ) = 0;
    virtual void GSSetSpawnCount( uint32_t ) = 0;
    virtual bool GSGetSteam2GetEncryptionKeyToSendToNewClient( void *, uint32_t *, uint32_t ) = 0;
    virtual bool GSSendSteam2UserConnect( uint32_t, const void *, uint32_t, uint32_t, uint16_t, const void *, uint32_t ) = 0;
    virtual bool GSSendSteam3UserConnect( CSteamID, uint32_t, const void *, uint32_t ) = 0;
    virtual bool GSRemoveUserConnect( uint32_t ) = 0;
    virtual bool GSSendUserDisconnect( CSteamID, uint32_t ) = 0;
    virtual bool GSSendUserStatusResponse( CSteamID, int32_t, int32_t ) = 0;
    virtual bool Obsolete_GSSetStatus( int32_t, uint32_t, int32_t, int32_t, int32_t, int32_t, const char *, const char *, const char *, const char * ) = 0;
    virtual bool GSUpdateStatus( int32_t, int32_t, int32_t, const char *, const char * ) = 0;
    virtual bool BSecure(  ) = 0;
    virtual CSteamID GetSteamID(  ) = 0;
    virtual bool GSSetServerType( int32_t, uint32_t, uint32_t, uint32_t, const char *, const char * ) = 0;
    virtual bool GSSetServerType2( int32_t, uint32_t, uint32_t, uint16_t, uint16_t, uint16_t, const char *, const char *, bool ) = 0;
    virtual bool GSUpdateStatus2( int32_t, int32_t, int32_t, const char *, const char *, const char * ) = 0;
    virtual bool GSCreateUnauthenticatedUser( CSteamID * ) = 0;
    virtual bool GSSetUserData( CSteamID, const char *, uint32_t ) = 0;
    virtual void GSUpdateSpectatorPort( uint16_t ) = 0;
    virtual void GSSetGameType( const char * ) = 0;
#endif /* __cplusplus */
};

void cppISteamGameServer_SteamGameServer002_LogOn( struct cppISteamGameServer_SteamGameServer002_LogOn_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    iface->LogOn(  );
}

void cppISteamGameServer_SteamGameServer002_LogOff( struct cppISteamGameServer_SteamGameServer002_LogOff_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    iface->LogOff(  );
}

void cppISteamGameServer_SteamGameServer002_BLoggedOn( struct cppISteamGameServer_SteamGameServer002_BLoggedOn_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->BLoggedOn(  );
}

void cppISteamGameServer_SteamGameServer002_GSSetSpawnCount( struct cppISteamGameServer_SteamGameServer002_GSSetSpawnCount_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    iface->GSSetSpawnCount( params->ucSpawn );
}

void cppISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient( struct cppISteamGameServer_SteamGameServer002_GSGetSteam2GetEncryptionKeyToSendToNewClient_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSGetSteam2GetEncryptionKeyToSendToNewClient( params->pvEncryptionKey, params->pcbEncryptionKey, params->cbMaxEncryptionKey );
}

void cppISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect( struct cppISteamGameServer_SteamGameServer002_GSSendSteam2UserConnect_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSSendSteam2UserConnect( params->unUserID, params->pvRawKey, params->unKeyLen, params->unIPPublic, params->usPort, params->pvCookie, params->cubCookie );
}

void cppISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect( struct cppISteamGameServer_SteamGameServer002_GSSendSteam3UserConnect_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSSendSteam3UserConnect( params->steamID, params->unIPPublic, params->pvCookie, params->cubCookie );
}

void cppISteamGameServer_SteamGameServer002_GSRemoveUserConnect( struct cppISteamGameServer_SteamGameServer002_GSRemoveUserConnect_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSRemoveUserConnect( params->unUserID );
}

void cppISteamGameServer_SteamGameServer002_GSSendUserDisconnect( struct cppISteamGameServer_SteamGameServer002_GSSendUserDisconnect_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSSendUserDisconnect( params->steamID, params->unUserID );
}

void cppISteamGameServer_SteamGameServer002_GSSendUserStatusResponse( struct cppISteamGameServer_SteamGameServer002_GSSendUserStatusResponse_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSSendUserStatusResponse( params->steamID, params->nSecondsConnected, params->nSecondsSinceLast );
}

void cppISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus( struct cppISteamGameServer_SteamGameServer002_Obsolete_GSSetStatus_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->Obsolete_GSSetStatus( params->nAppIdServed, params->unServerFlags, params->cPlayers, params->cPlayersMax, params->cBotPlayers, params->unGamePort, params->pchServerName, params->pchGameDir, params->pchMapName, params->pchVersion );
}

void cppISteamGameServer_SteamGameServer002_GSUpdateStatus( struct cppISteamGameServer_SteamGameServer002_GSUpdateStatus_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSUpdateStatus( params->cPlayers, params->cPlayersMax, params->cBotPlayers, params->pchServerName, params->pchMapName );
}

void cppISteamGameServer_SteamGameServer002_BSecure( struct cppISteamGameServer_SteamGameServer002_BSecure_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->BSecure(  );
}

void cppISteamGameServer_SteamGameServer002_GetSteamID( struct cppISteamGameServer_SteamGameServer002_GetSteamID_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    *params->_ret = iface->GetSteamID(  );
}

void cppISteamGameServer_SteamGameServer002_GSSetServerType( struct cppISteamGameServer_SteamGameServer002_GSSetServerType_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSSetServerType( params->nGameAppId, params->unServerFlags, params->unGameIP, params->unGamePort, params->pchGameDir, params->pchVersion );
}

void cppISteamGameServer_SteamGameServer002_GSSetServerType2( struct cppISteamGameServer_SteamGameServer002_GSSetServerType2_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSSetServerType2( params->nGameAppId, params->unServerFlags, params->unGameIP, params->unGamePort, params->unSpectatorPort, params->usQueryPort, params->pchGameDir, params->pchVersion, params->bLANMode );
}

void cppISteamGameServer_SteamGameServer002_GSUpdateStatus2( struct cppISteamGameServer_SteamGameServer002_GSUpdateStatus2_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSUpdateStatus2( params->cPlayers, params->cPlayersMax, params->cBotPlayers, params->pchServerName, params->pSpectatorServerName, params->pchMapName );
}

void cppISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser( struct cppISteamGameServer_SteamGameServer002_GSCreateUnauthenticatedUser_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSCreateUnauthenticatedUser( params->pSteamID );
}

void cppISteamGameServer_SteamGameServer002_GSSetUserData( struct cppISteamGameServer_SteamGameServer002_GSSetUserData_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    params->_ret = iface->GSSetUserData( params->steamID, params->pPlayerName, params->nFrags );
}

void cppISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort( struct cppISteamGameServer_SteamGameServer002_GSUpdateSpectatorPort_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    iface->GSUpdateSpectatorPort( params->unSpectatorPort );
}

void cppISteamGameServer_SteamGameServer002_GSSetGameType( struct cppISteamGameServer_SteamGameServer002_GSSetGameType_params *params )
{
    struct cppISteamGameServer_SteamGameServer002 *iface = (struct cppISteamGameServer_SteamGameServer002 *)params->linux_side;
    iface->GSSetGameType( params->pchType );
}

#ifdef __cplusplus
}
#endif
