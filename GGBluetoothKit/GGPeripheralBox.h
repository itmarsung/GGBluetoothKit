/**
 *
 *     _ __ __ __        _ __ __ __
 *    / __ __ __ |     /  __ __ __ |
 *   / /              / /
 *  | |     __ __    | |      _ _ _
 *  | |    |_ __ |   | |     |_ _  |
 *   \ \ __ __ | |    \ \ __ __ _| |
 *    \ __ __ __ |     \ __ __ __ _|
 *
 *
 * This code is distributed under the terms and conditions of the MIT license.
 *
 * Created by GG on 2020/9/25
 * Copyright © 2018-2020 GG. All rights reserved.
 *
 * Organization: GGWirlessConnect (https://github.com/GGWirelessConnect)
 * Github Pages: https://github.com/GGWirelessConnect/GGBluetoothKit
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THESOFTWARE
*/

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CBPeripheral.h>
NS_ASSUME_NONNULL_BEGIN

@interface GGPeripheralBox : NSObject
/// peripheral
@property (nonatomic, strong, readonly) CBPeripheral *peripheral;
/// advertisementData
@property (nonatomic, strong, readonly) NSDictionary<NSString *, id> *advertisementData;
/// RSSI
@property (nonatomic, strong, readonly) NSNumber *RSSI;
/// localName
@property (nonatomic, copy, readonly) NSString *localName;
/// mac adress
@property (nonatomic, copy, readonly) NSString *mac;

/// init method for custom
/// @param peripheral <#peripheral description#>
/// @param adData <#adData description#>
/// @param rssi <#rssi description#>
- (instancetype)initWithPeripheral:(CBPeripheral *)peripheral adData:(NSDictionary <NSString* ,id> *)adData rssi:(NSNumber *)rssi;
@end

NS_ASSUME_NONNULL_END
