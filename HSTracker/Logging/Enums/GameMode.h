/*
 * This file is part of the HSTracker package.
 * (c) Benjamin Michotte <bmichotte@gmail.com>
 *
 * For the full copyright and license information, please view the LICENSE
 * file that was distributed with this source code.
 *
 * Created on 17/02/16.
 */
#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, EGameMode) {
    EGameMode_Unknow,
    EGameMode_Ranked,
    EGameMode_Casual,
    EGameMode_Arena,
    EGameMode_Brawl,
    EGameMode_Spectator,
    EGameMode_Friendly,
    EGameMode_Practice
};

@interface GameMode : NSObject
+ (NSString *)toString:(EGameMode)gameMode;
@end
