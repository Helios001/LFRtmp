//
//  LFRtmpUrlParser.h
//  myrtmp
//
//  Created by liuf on 16/7/25.
// 
//

#import <Foundation/Foundation.h>

@interface LFRtmpUrlParser : NSObject
/**
 *  地址为rtmp://xxx/userlive/liuf 
    tcUrl:rtmp://xxx/userlive
    domainName:xxx
    appName:userlive
    streamName:liuf
 */
@property (strong,nonatomic,readonly) NSString *originalUrl;//原始地址
@property (strong,nonatomic,readonly) NSString *tcUrl;
@property (strong,nonatomic,readonly) NSString *domain;
@property (strong,nonatomic,readonly) NSString *appName;
@property (strong,nonatomic,readonly) NSString *streamName;
@property (assign,nonatomic,readonly) int port;
@property (assign,nonatomic,readonly) BOOL isAvailable;
/**
 *  通过url初始化解析器
 */
-(instancetype)initWithUrl:(NSString *)url port:(int)port;
@end
