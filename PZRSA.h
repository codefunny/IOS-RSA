//
//  PZCRSA.h
//  
//
//  Created by peter on 15/7/2.
//  Copyright (c) 2015年 XXXX. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PZCRSA : NSObject {
    SecKeyRef publicKey;
    size_t maxPlainLen;
}
- (instancetype)initWithPubKey:(NSData *)data ;

- (NSData *) encryptWithData:(NSData *)content;
- (NSData *) encryptWithString:(NSString *)content;

@end
