#include "steam_defs.h"
#pragma push_macro("__cdecl")
#undef __cdecl
#define __cdecl
#include "steamworks_sdk_116/steam_api.h"
#pragma pop_macro("__cdecl")
#include "steamclient_private.h"
#ifdef __cplusplus
extern "C" {
#endif
#define SDKVER_116
#include "struct_converters.h"
#include "cppISteamFriends_SteamFriends009.h"

struct cppISteamFriends_SteamFriends009
{
#ifdef __cplusplus
    virtual const char * GetPersonaName(  ) = 0;
    virtual void SetPersonaName( const char * ) = 0;
    virtual uint32_t GetPersonaState(  ) = 0;
    virtual int32_t GetFriendCount( int32_t ) = 0;
    virtual CSteamID GetFriendByIndex( int32_t, int32_t ) = 0;
    virtual uint32_t GetFriendRelationship( CSteamID ) = 0;
    virtual uint32_t GetFriendPersonaState( CSteamID ) = 0;
    virtual const char * GetFriendPersonaName( CSteamID ) = 0;
    virtual bool GetFriendGamePlayed( CSteamID, FriendGameInfo_t * ) = 0;
    virtual const char * GetFriendPersonaNameHistory( CSteamID, int32_t ) = 0;
    virtual bool HasFriend( CSteamID, int32_t ) = 0;
    virtual int32_t GetClanCount(  ) = 0;
    virtual CSteamID GetClanByIndex( int32_t ) = 0;
    virtual const char * GetClanName( CSteamID ) = 0;
    virtual const char * GetClanTag( CSteamID ) = 0;
    virtual int32_t GetFriendCountFromSource( CSteamID ) = 0;
    virtual CSteamID GetFriendFromSourceByIndex( CSteamID, int32_t ) = 0;
    virtual bool IsUserInSource( CSteamID, CSteamID ) = 0;
    virtual void SetInGameVoiceSpeaking( CSteamID, bool ) = 0;
    virtual void ActivateGameOverlay( const char * ) = 0;
    virtual void ActivateGameOverlayToUser( const char *, CSteamID ) = 0;
    virtual void ActivateGameOverlayToWebPage( const char * ) = 0;
    virtual void ActivateGameOverlayToStore( uint32_t ) = 0;
    virtual void SetPlayedWith( CSteamID ) = 0;
    virtual void ActivateGameOverlayInviteDialog( CSteamID ) = 0;
    virtual int32_t GetSmallFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetMediumFriendAvatar( CSteamID ) = 0;
    virtual int32_t GetLargeFriendAvatar( CSteamID ) = 0;
    virtual bool RequestUserInformation( CSteamID, bool ) = 0;
    virtual uint64_t RequestClanOfficerList( CSteamID ) = 0;
    virtual CSteamID GetClanOwner( CSteamID ) = 0;
    virtual int32_t GetClanOfficerCount( CSteamID ) = 0;
    virtual CSteamID GetClanOfficerByIndex( CSteamID, int32_t ) = 0;
    virtual uint32_t GetUserRestrictions(  ) = 0;
    virtual bool SetRichPresence( const char *, const char * ) = 0;
    virtual void ClearRichPresence(  ) = 0;
    virtual const char * GetFriendRichPresence( CSteamID, const char * ) = 0;
    virtual int32_t GetFriendRichPresenceKeyCount( CSteamID ) = 0;
    virtual const char * GetFriendRichPresenceKeyByIndex( CSteamID, int32_t ) = 0;
    virtual bool InviteUserToGame( CSteamID, const char * ) = 0;
    virtual int32_t GetCoplayFriendCount(  ) = 0;
    virtual CSteamID GetCoplayFriend( int32_t ) = 0;
    virtual int32_t GetFriendCoplayTime( CSteamID ) = 0;
    virtual uint32_t GetFriendCoplayGame( CSteamID ) = 0;
#endif /* __cplusplus */
};

void cppISteamFriends_SteamFriends009_GetPersonaName( struct cppISteamFriends_SteamFriends009_GetPersonaName_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetPersonaName(  );
}

void cppISteamFriends_SteamFriends009_SetPersonaName( struct cppISteamFriends_SteamFriends009_SetPersonaName_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    iface->SetPersonaName( params->pchPersonaName );
}

void cppISteamFriends_SteamFriends009_GetPersonaState( struct cppISteamFriends_SteamFriends009_GetPersonaState_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetPersonaState(  );
}

void cppISteamFriends_SteamFriends009_GetFriendCount( struct cppISteamFriends_SteamFriends009_GetFriendCount_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendCount( params->iFriendFlags );
}

void cppISteamFriends_SteamFriends009_GetFriendByIndex( struct cppISteamFriends_SteamFriends009_GetFriendByIndex_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    *params->_ret = iface->GetFriendByIndex( params->iFriend, params->iFriendFlags );
}

void cppISteamFriends_SteamFriends009_GetFriendRelationship( struct cppISteamFriends_SteamFriends009_GetFriendRelationship_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendRelationship( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends009_GetFriendPersonaState( struct cppISteamFriends_SteamFriends009_GetFriendPersonaState_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaState( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends009_GetFriendPersonaName( struct cppISteamFriends_SteamFriends009_GetFriendPersonaName_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaName( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends009_GetFriendGamePlayed( struct cppISteamFriends_SteamFriends009_GetFriendGamePlayed_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendGamePlayed( params->steamIDFriend, params->pFriendGameInfo );
}

void cppISteamFriends_SteamFriends009_GetFriendPersonaNameHistory( struct cppISteamFriends_SteamFriends009_GetFriendPersonaNameHistory_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendPersonaNameHistory( params->steamIDFriend, params->iPersonaName );
}

void cppISteamFriends_SteamFriends009_HasFriend( struct cppISteamFriends_SteamFriends009_HasFriend_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->HasFriend( params->steamIDFriend, params->iFriendFlags );
}

void cppISteamFriends_SteamFriends009_GetClanCount( struct cppISteamFriends_SteamFriends009_GetClanCount_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetClanCount(  );
}

void cppISteamFriends_SteamFriends009_GetClanByIndex( struct cppISteamFriends_SteamFriends009_GetClanByIndex_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    *params->_ret = iface->GetClanByIndex( params->iClan );
}

void cppISteamFriends_SteamFriends009_GetClanName( struct cppISteamFriends_SteamFriends009_GetClanName_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetClanName( params->steamIDClan );
}

void cppISteamFriends_SteamFriends009_GetClanTag( struct cppISteamFriends_SteamFriends009_GetClanTag_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetClanTag( params->steamIDClan );
}

void cppISteamFriends_SteamFriends009_GetFriendCountFromSource( struct cppISteamFriends_SteamFriends009_GetFriendCountFromSource_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendCountFromSource( params->steamIDSource );
}

void cppISteamFriends_SteamFriends009_GetFriendFromSourceByIndex( struct cppISteamFriends_SteamFriends009_GetFriendFromSourceByIndex_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    *params->_ret = iface->GetFriendFromSourceByIndex( params->steamIDSource, params->iFriend );
}

void cppISteamFriends_SteamFriends009_IsUserInSource( struct cppISteamFriends_SteamFriends009_IsUserInSource_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->IsUserInSource( params->steamIDUser, params->steamIDSource );
}

void cppISteamFriends_SteamFriends009_SetInGameVoiceSpeaking( struct cppISteamFriends_SteamFriends009_SetInGameVoiceSpeaking_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    iface->SetInGameVoiceSpeaking( params->steamIDUser, params->bSpeaking );
}

void cppISteamFriends_SteamFriends009_ActivateGameOverlay( struct cppISteamFriends_SteamFriends009_ActivateGameOverlay_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    iface->ActivateGameOverlay( params->pchDialog );
}

void cppISteamFriends_SteamFriends009_ActivateGameOverlayToUser( struct cppISteamFriends_SteamFriends009_ActivateGameOverlayToUser_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    iface->ActivateGameOverlayToUser( params->pchDialog, params->steamID );
}

void cppISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage( struct cppISteamFriends_SteamFriends009_ActivateGameOverlayToWebPage_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    iface->ActivateGameOverlayToWebPage( params->pchURL );
}

void cppISteamFriends_SteamFriends009_ActivateGameOverlayToStore( struct cppISteamFriends_SteamFriends009_ActivateGameOverlayToStore_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    iface->ActivateGameOverlayToStore( params->nAppID );
}

void cppISteamFriends_SteamFriends009_SetPlayedWith( struct cppISteamFriends_SteamFriends009_SetPlayedWith_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    iface->SetPlayedWith( params->steamIDUserPlayedWith );
}

void cppISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog( struct cppISteamFriends_SteamFriends009_ActivateGameOverlayInviteDialog_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    iface->ActivateGameOverlayInviteDialog( params->steamIDLobby );
}

void cppISteamFriends_SteamFriends009_GetSmallFriendAvatar( struct cppISteamFriends_SteamFriends009_GetSmallFriendAvatar_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetSmallFriendAvatar( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends009_GetMediumFriendAvatar( struct cppISteamFriends_SteamFriends009_GetMediumFriendAvatar_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetMediumFriendAvatar( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends009_GetLargeFriendAvatar( struct cppISteamFriends_SteamFriends009_GetLargeFriendAvatar_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetLargeFriendAvatar( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends009_RequestUserInformation( struct cppISteamFriends_SteamFriends009_RequestUserInformation_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->RequestUserInformation( params->steamIDUser, params->bRequireNameOnly );
}

void cppISteamFriends_SteamFriends009_RequestClanOfficerList( struct cppISteamFriends_SteamFriends009_RequestClanOfficerList_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->RequestClanOfficerList( params->steamIDClan );
}

void cppISteamFriends_SteamFriends009_GetClanOwner( struct cppISteamFriends_SteamFriends009_GetClanOwner_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    *params->_ret = iface->GetClanOwner( params->steamIDClan );
}

void cppISteamFriends_SteamFriends009_GetClanOfficerCount( struct cppISteamFriends_SteamFriends009_GetClanOfficerCount_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetClanOfficerCount( params->steamIDClan );
}

void cppISteamFriends_SteamFriends009_GetClanOfficerByIndex( struct cppISteamFriends_SteamFriends009_GetClanOfficerByIndex_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    *params->_ret = iface->GetClanOfficerByIndex( params->steamIDClan, params->iOfficer );
}

void cppISteamFriends_SteamFriends009_GetUserRestrictions( struct cppISteamFriends_SteamFriends009_GetUserRestrictions_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetUserRestrictions(  );
}

void cppISteamFriends_SteamFriends009_SetRichPresence( struct cppISteamFriends_SteamFriends009_SetRichPresence_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->SetRichPresence( params->pchKey, params->pchValue );
}

void cppISteamFriends_SteamFriends009_ClearRichPresence( struct cppISteamFriends_SteamFriends009_ClearRichPresence_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    iface->ClearRichPresence(  );
}

void cppISteamFriends_SteamFriends009_GetFriendRichPresence( struct cppISteamFriends_SteamFriends009_GetFriendRichPresence_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresence( params->steamIDFriend, params->pchKey );
}

void cppISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount( struct cppISteamFriends_SteamFriends009_GetFriendRichPresenceKeyCount_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyCount( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex( struct cppISteamFriends_SteamFriends009_GetFriendRichPresenceKeyByIndex_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendRichPresenceKeyByIndex( params->steamIDFriend, params->iKey );
}

void cppISteamFriends_SteamFriends009_InviteUserToGame( struct cppISteamFriends_SteamFriends009_InviteUserToGame_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->InviteUserToGame( params->steamIDFriend, params->pchConnectString );
}

void cppISteamFriends_SteamFriends009_GetCoplayFriendCount( struct cppISteamFriends_SteamFriends009_GetCoplayFriendCount_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetCoplayFriendCount(  );
}

void cppISteamFriends_SteamFriends009_GetCoplayFriend( struct cppISteamFriends_SteamFriends009_GetCoplayFriend_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    *params->_ret = iface->GetCoplayFriend( params->iCoplayFriend );
}

void cppISteamFriends_SteamFriends009_GetFriendCoplayTime( struct cppISteamFriends_SteamFriends009_GetFriendCoplayTime_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayTime( params->steamIDFriend );
}

void cppISteamFriends_SteamFriends009_GetFriendCoplayGame( struct cppISteamFriends_SteamFriends009_GetFriendCoplayGame_params *params )
{
    struct cppISteamFriends_SteamFriends009 *iface = (struct cppISteamFriends_SteamFriends009 *)params->linux_side;
    params->_ret = iface->GetFriendCoplayGame( params->steamIDFriend );
}

#ifdef __cplusplus
}
#endif
