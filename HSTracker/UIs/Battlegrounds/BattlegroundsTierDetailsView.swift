//
//  BattlegroundsTierDetailsView.swift
//  HSTracker
//
//  Created by Martin BONNIN on 04/01/2020.
//  Copyright © 2020 Benjamin Michotte. All rights reserved.
//

import Foundation

struct BattlegroundMinion {
    let cardId: String
    let techLevel: Int
    
    init(cardId: String, techLevel: Int) {
        self.cardId = cardId
        self.techLevel = techLevel
    }
}

class BattlegroundsTierDetailsView: NSStackView {
    init() {
        super.init(frame: NSRect.zero)
        self.orientation = .vertical
    }

    override init(frame frameRect: NSRect) {
        super.init(frame: frameRect)
        self.orientation = .vertical
    }

    required init?(coder: NSCoder) {
        super.init(coder: coder)
        self.orientation = .vertical
    }
    
    func score(race: Race?) -> Int {
        guard let r = race else {
            return 0
        }
        return Race.allCases.firstIndex { $0 == r } ?? 0
    }
    
    func setTier(tier: Int) {
        let availableRaces = AppDelegate.instance().coreManager.game.availableRaces
        var cardBars: [CardBar] = Cards.battlegroundsMinions.filter {
            let race = $0.race
            return ($0.techLevel == tier && (race == .invalid || (availableRaces?.firstIndex(of: race) != nil)))
        }.map { inCard in
            let card = Card()
            
            let cardBar = CardBar.factory()
            card.cost = -1
            card.id = inCard.id
            card.name = inCard.name
            card.race = inCard.race
            card.count = 1
            card.rarity = inCard.rarity
            cardBar.card = card
            return cardBar
        }
        
        var cardBar = CardBar.factory()

        let size = NSSize(width: cardBar.imageRect.width, height: cardBar.imageRect.height)
        let blackImage = NSImage(color: NSColor(red: 35/255.0, green: 39/255.0, blue: 42/255.0, alpha: 1.0), size: size)

        cardBar.playerName = "Neutral"
        let race = Race(rawValue: "invalid")
        cardBar.playerRace = race
        cardBar.backgroundImage = blackImage
        cardBars.append(cardBar)
        for i in 0..<availableRaces!.count {
            let race: String = availableRaces![i].rawValue
            cardBar = CardBar.factory()
            cardBar.playerName = NSLocalizedString(race, comment: "")
            let cardRace = Race(rawValue: race)
            cardBar.playerRace = cardRace
            cardBar.backgroundImage = blackImage
            cardBars.append(cardBar)
        }
        cardBars = cardBars.sorted(by: {(a: CardBar, b: CardBar) -> Bool in
            var raceA: String
            var nameA: String
            var isTitleA: Int
            if a.card?.race != nil {
                raceA = a.card!.race.rawValue
                nameA = a.card!.name
                isTitleA = 1
            } else {
                raceA = a.playerRace!.rawValue
                nameA = a.playerName!
                isTitleA = 0
            }
            if raceA == "invalid" {
                raceA = "neutral"
            }
            var raceB: String
            var nameB: String
            var isTitleB: Int
            if b.card?.race != nil {
                raceB = b.card!.race.rawValue
                nameB = b.card!.name
                isTitleB = 1
            } else {
                raceB = b.playerRace!.rawValue
                nameB = b.playerName!
                isTitleB = 0
            }
            if raceB == "invalid" {
                raceB = "neutral"
            }
            return (raceA, isTitleA, nameA) > (raceB, isTitleB, nameB)
        })
        while self.subviews.count > 0 {
            self.subviews[0].removeFromSuperviewWithoutNeedingDisplay()
        }
        
        var cardHeight: CGFloat
        switch Settings.cardSize {
        case .tiny: cardHeight = CGFloat(kTinyRowHeight)
        case .small: cardHeight = CGFloat(kSmallRowHeight)
        case .medium: cardHeight = CGFloat(kMediumRowHeight)
        case .huge: cardHeight = CGFloat(kHighRowHeight)
        case .big: cardHeight = CGFloat(kRowHeight)
        }

        var totalHeight = CGFloat(cardBars.count) * cardHeight
        if totalHeight > self.frame.height {
            totalHeight = self.frame.height
            cardHeight = totalHeight / CGFloat(cardBars.count)
        }
        
        for i in 0...(cardBars.count - 1) {
            let y = CGFloat(i) * cardHeight + self.frame.height - totalHeight
            let cardBar = cardBars[i]
            cardBar.frame = NSRect(x: 0, y: y, width: self.frame.width, height: cardHeight)
            self.addSubview(cardBar)
        }
    }
}
