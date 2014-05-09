#import <Foundation/Foundation.h>


/**
A category to check whether the array is empty or not.
This approach is more human friendly comparing to [NSArray lastObject].
*/
@interface NSArray (IsEmpty)

/**
Checks whether the array is empty.

@return YES - the array contains at least one object. NO - otherwise.
*/
- (BOOL)hasElements;

@end