#import "WebView.h"

@interface MyWebView ()
@end

@implementation MyWebView

-(id) init{
    if (self=[super init])
    {
        self->pWebView = [[WKWebView alloc] init];
    }
    return self;
}


-(void)dealloc {
    [self->pWebView dealloc];
    [super dealloc];
}

@end