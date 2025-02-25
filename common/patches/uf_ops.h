/*	EQEMu: Everquest Server Emulator
	
	Copyright (C) 2001-2016 EQEMu Development Team (http://eqemulator.net)

	This program is free software; you can redistribute it and/or modify
	it under the terms of the GNU General Public License as published by
	the Free Software Foundation; version 2 of the License.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY except by those people which sell it, which
	are required to give you total support for your newly bought product;
	without even the implied warranty of MERCHANTABILITY or FITNESS FOR
	A PARTICULAR PURPOSE.  See the GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/


// out-going packets that require an ENCODE translation:
E(OP_Action)
E(OP_AdventureMerchantSell)
E(OP_AltCurrency)
E(OP_AltCurrencySell)
E(OP_ApplyPoison)
E(OP_AugmentInfo)
E(OP_Barter)
E(OP_BazaarSearch)
E(OP_Buff)
E(OP_BuffCreate)
E(OP_CancelTrade)
E(OP_ChannelMessage)
E(OP_CharInventory)
E(OP_ClientUpdate)
E(OP_Consider)
E(OP_Damage)
E(OP_DeleteCharge)
E(OP_DeleteItem)
E(OP_DisciplineUpdate)
E(OP_DzChooseZone)
E(OP_DzExpeditionEndsWarning)
E(OP_DzExpeditionInfo)
E(OP_DzExpeditionInvite)
E(OP_DzExpeditionLockoutTimers)
E(OP_DzMemberList)
E(OP_DzMemberListName)
E(OP_DzMemberListStatus)
E(OP_DzSetLeaderName)
E(OP_Emote)
E(OP_ExpansionInfo)
E(OP_FormattedMessage)
E(OP_GroundSpawn)
E(OP_GroupCancelInvite)
E(OP_GroupFollow)
E(OP_GroupFollow2)
E(OP_GroupInvite)
E(OP_GroupUpdate)
E(OP_GuildMemberList)
E(OP_GuildsList)
E(OP_Illusion)
E(OP_InspectBuffs)
E(OP_InspectRequest)
E(OP_ItemLinkResponse)
E(OP_ItemPacket)
E(OP_ItemVerifyReply)
E(OP_LeadershipExpUpdate)
E(OP_LogServer)
E(OP_LootItem)
E(OP_MercenaryDataResponse)
E(OP_MercenaryDataUpdate)
E(OP_MoveItem)
E(OP_NewSpawn)
E(OP_NewZone)
E(OP_OnLevelMessage)
E(OP_PetBuffWindow)
E(OP_PlayerProfile)
E(OP_RaidJoin)
E(OP_RaidUpdate)
E(OP_ReadBook)
E(OP_RespondAA)
E(OP_SendAATable)
E(OP_SendCharInfo)
E(OP_SendZonepoints)
E(OP_ShopPlayerBuy)
E(OP_ShopPlayerSell)
E(OP_SomeItemPacketMaybe)
E(OP_SpawnAppearance)
E(OP_SpawnDoor)
E(OP_SpecialMesg)
E(OP_Stun)
E(OP_TargetBuffs)
E(OP_TaskDescription)
E(OP_Track)
E(OP_Trader)
E(OP_TraderBuy)
E(OP_TributeItem)
E(OP_VetRewardsAvaliable)
E(OP_WearChange)
E(OP_WhoAllResponse)
E(OP_ZoneEntry)
E(OP_ZonePlayerToBind)
E(OP_ZoneServerInfo)
E(OP_ZoneSpawns)
// incoming packets that require a DECODE translation:
D(OP_AdventureMerchantSell)
D(OP_AltCurrencySell)
D(OP_AltCurrencySellSelection)
D(OP_ApplyPoison)
D(OP_AugmentInfo)
D(OP_AugmentItem)
D(OP_BazaarSearch)
D(OP_BookButton)
D(OP_Buff)
D(OP_BuffRemoveRequest)
D(OP_CastSpell)
D(OP_ChannelMessage)
D(OP_CharacterCreate)
D(OP_ClientUpdate)
D(OP_Consider)
D(OP_ConsiderCorpse)
D(OP_Consume)
D(OP_Damage)
D(OP_DeleteItem)
D(OP_DzAddPlayer)
D(OP_DzChooseZoneReply)
D(OP_DzExpeditionInviteResponse)
D(OP_DzMakeLeader)
D(OP_DzRemovePlayer)
D(OP_DzSwapPlayer)
D(OP_Emote)
D(OP_EnvDamage)
D(OP_FaceChange)
D(OP_FindPersonRequest)
D(OP_GroupCancelInvite)
D(OP_GroupDisband)
D(OP_GroupFollow)
D(OP_GroupFollow2)
D(OP_GroupInvite)
D(OP_GroupInvite2)
D(OP_InspectRequest)
D(OP_ItemLinkClick)
D(OP_ItemVerifyRequest)
D(OP_LoadSpellSet)
D(OP_LootItem)
D(OP_MoveItem)
D(OP_PetCommands)
D(OP_RaidInvite)
D(OP_ReadBook)
D(OP_Save)
D(OP_SetServerFilter)
D(OP_ShopPlayerBuy)
D(OP_ShopPlayerSell)
D(OP_TraderBuy)
D(OP_TradeSkillCombine)
D(OP_TributeItem)
D(OP_WearChange)
D(OP_WhoAllRequest)

#undef E
#undef D
