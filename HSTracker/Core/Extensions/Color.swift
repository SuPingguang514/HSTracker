//
//  Color.swift
//  HSTracker
//
//  Created by Benjamin Michotte on 12/04/16.
//  Copyright © 2016 Benjamin Michotte. All rights reserved.
//

import Foundation
import AppKit

extension NSColor {
    func darken(amount: CGFloat = 0.5) -> NSColor {
        var hue: CGFloat = 0
        var saturation: CGFloat = 0
        var brightness: CGFloat = 0
        var alpha: CGFloat = 0

        getHue(&hue, saturation: &saturation, brightness: &brightness, alpha: &alpha)
        return NSColor(hue: hue,
                       saturation: saturation,
                       brightness: brightness * amount,
                       alpha: alpha)
    }
    
    class func fromHexString(hex: String, alpha: CGFloat = 1.0) -> NSColor? {
        // Handle two types of literals: 0x and # prefixed
        var cleanedString = ""
        if hex.hasPrefix("0x") {
            cleanedString = hex.substring(from: 2)
        } else if hex.hasPrefix("#") {
            cleanedString = hex.substring(from: 1)
        }
        var theInt: UInt64 = 0
        let scanner = Scanner(string: cleanedString)
        scanner.scanHexInt64(&theInt)
        let myAlpha = cleanedString.count == 8 ? CGFloat((theInt & 0xFF000000) >> 24) / 255.0 : alpha
        let red = CGFloat((theInt & 0xFF0000) >> 16) / 255.0
        let green = CGFloat((theInt & 0xFF00) >> 8) / 255.0
        let blue = CGFloat((theInt & 0xFF)) / 255.0
        return NSColor(colorSpace: .deviceRGB, components: [red, green, blue, myAlpha], count: 4)
    }
    
    class func fromRgb(_ r: Int, _ g: Int, _ b: Int) -> NSColor {
        return NSColor(colorSpace: .deviceRGB, components: [ CGFloat(r) / 255.0, CGFloat(g) / 255.0, CGFloat(b) / 255.0, 1.0 ], count: 4)
    }
}
