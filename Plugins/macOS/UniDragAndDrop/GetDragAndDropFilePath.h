#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>

typedef void (*cs_callback)(const char*);

@interface GetDragAndDropFilePath : NSImageView
{
    bool _isDraging;
    cs_callback _callback;
}

- (void)setCallback:(cs_callback) callback;

- (bool)isDraging;

@end
