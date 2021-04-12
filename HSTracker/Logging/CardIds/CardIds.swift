/*
 This file is generated by https://github.com/HearthSim/HearthDb

 The MIT License (MIT)

 Copyright (c) 2015 Alexander Zeier

 Permission is hereby granted, free of charge, to any person obtaining a copy of this
 software and associated documentation files (the "Software"), to deal in the Software
 without restriction, including without limitation the rights to use, copy, modify,
 merge, publish, distribute, sublicense, and/or sell copies of the Software, and to
 permit persons to whom the Software is furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in all copies
 or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED,
 INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A
 PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT
 HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION
 OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE
 SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.

 Source: https://github.com/HearthSim/HearthDb

 */

import Foundation

struct CardIds {
    static let keyMasterAlabasterDbfId = 61174
    
    static let hiddenCardidPrefixes: [String] = [ "PVPDR_TEST_" ]
    
    static let upgradeOverrides = [
        CardIds.NonCollectible.DemonHunter.FuryRank1_FuryRank2Token: CardIds.Collectible.DemonHunter.FuryRank1,
        CardIds.NonCollectible.DemonHunter.FuryRank1_FuryRank3Token: CardIds.Collectible.DemonHunter.FuryRank1,
        CardIds.NonCollectible.Druid.LivingSeedRank1_LivingSeedRank2Token: CardIds.Collectible.Druid.LivingSeedRank1,
        CardIds.NonCollectible.Druid.LivingSeedRank1_LivingSeedRank3Token: CardIds.Collectible.Druid.LivingSeedRank1,
        CardIds.NonCollectible.Hunter.TameBeastRank1_TameBeastRank2Token: CardIds.Collectible.Hunter.TameBeastRank1,
        CardIds.NonCollectible.Hunter.TameBeastRank1_TameBeastRank3Token: CardIds.Collectible.Hunter.TameBeastRank1,
        CardIds.NonCollectible.Mage.FlurryRank1_FlurryRank2Token: CardIds.Collectible.Mage.FlurryRank1,
        CardIds.NonCollectible.Mage.FlurryRank1_FlurryRank3Token: CardIds.Collectible.Mage.FlurryRank1,
        CardIds.NonCollectible.Paladin.ConvictionRank1_ConvictionRank2Token: CardIds.Collectible.Paladin.ConvictionRank1,
        CardIds.NonCollectible.Paladin.ConvictionRank1_ConvictionRank3Token: CardIds.Collectible.Paladin.ConvictionRank1,
        CardIds.NonCollectible.Priest.CondemnRank1_CondemnRank2Token: CardIds.Collectible.Priest.CondemnRank1,
        CardIds.NonCollectible.Priest.CondemnRank1_CondemnRank3Token: CardIds.Collectible.Priest.CondemnRank1,
        CardIds.NonCollectible.Rogue.WickedStabRank1_WickedStabRank2Token: CardIds.Collectible.Rogue.WickedStabRank1,
        CardIds.NonCollectible.Rogue.WickedStabRank1_WickedStabRank3Token: CardIds.Collectible.Rogue.WickedStabRank1,
        CardIds.NonCollectible.Shaman.ChainLightningRank1_ChainLightningRank2Token: CardIds.Collectible.Shaman.ChainLightningRank1,
        CardIds.NonCollectible.Shaman.ChainLightningRank1_ChainLightningRank3Token: CardIds.Collectible.Shaman.ChainLightningRank1,
        CardIds.NonCollectible.Warlock.ImpSwarmRank1_ImpSwarmRank2Token: CardIds.Collectible.Warlock.ImpSwarmRank1,
        CardIds.NonCollectible.Warlock.ImpSwarmRank1_ImpSwarmRank3Token: CardIds.Collectible.Warlock.ImpSwarmRank1,
        CardIds.NonCollectible.Warrior.ConditioningRank1_ConditioningRank2Token: CardIds.Collectible.Warrior.ConditioningRank1,
        CardIds.NonCollectible.Warrior.ConditioningRank1_ConditioningRank3Token: CardIds.Collectible.Warrior.ConditioningRank1,
    ]
    
    struct Collectible {}

    struct NonCollectible {}

    struct Secrets {}

    static let DeathrattleSummonCardIds: [String: Int] = [
        CardIds.Collectible.Druid.MountedRaptor: 1,
        CardIds.Collectible.Hunter.InfestedWolf: 2,
        CardIds.Collectible.Hunter.KindlyGrandmother: 1,
        CardIds.Collectible.Hunter.RatPack: 2,
        CardIds.Collectible.Hunter.SavannahHighmane: 2,
        CardIds.Collectible.Rogue.Anubarak: 1,
        CardIds.Collectible.Rogue.JadeSwarmer: 1,
        CardIds.Collectible.Warlock.Dreadsteed: 1,
        CardIds.Collectible.Warlock.Voidcaller: 1, // false negative better than false positive
        CardIds.Collectible.Neutral.AyaBlackpaw: 1,
        CardIds.Collectible.Neutral.CairneBloodhoof: 1,
        CardIds.Collectible.Neutral.DevilsaurEgg: 1,
        CardIds.Collectible.Neutral.Eggnapper: 2,
        CardIds.Collectible.Neutral.HarvestGolem: 1,
        CardIds.Collectible.Neutral.HauntedCreeper: 2,
        CardIds.Collectible.Neutral.InfestedTauren: 1,
        CardIds.Collectible.Neutral.NerubianEgg: 1,
        CardIds.Collectible.Neutral.PilotedShredder: 1,
        CardIds.Collectible.Neutral.PilotedSkyGolem: 1,
        CardIds.Collectible.Neutral.SatedThreshadon: 3,
        CardIds.Collectible.Neutral.SludgeBelcher: 1,
        CardIds.Collectible.Neutral.SneedsOldShredder: 1,
        CardIds.Collectible.Neutral.TwilightSummoner: 1,
        CardIds.Collectible.Neutral.WobblingRunts: 3
    ]

    static let HeroIdDict: [String: String] = [
        CardIds.Collectible.Warrior.GarroshHellscream: "Warrior",
        CardIds.Collectible.Shaman.Thrall: "Shaman",
        CardIds.Collectible.Rogue.ValeeraSanguinar: "Rogue",
        CardIds.Collectible.Paladin.UtherLightbringer: "Paladin",
        CardIds.Collectible.Hunter.Rexxar: "Hunter",
        CardIds.Collectible.Druid.MalfurionStormrage: "Druid",
        CardIds.Collectible.Warlock.Guldan: "Warlock",
        CardIds.Collectible.Mage.JainaProudmoore: "Mage",
        CardIds.Collectible.Priest.AnduinWrynn: "Priest",
        CardIds.Collectible.Warlock.LordJaraxxus: "Jaraxxus",
        CardIds.Collectible.Neutral.MajordomoExecutus: "Ragnaros the Firelord"
    ]
}
