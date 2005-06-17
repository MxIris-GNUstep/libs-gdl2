#include "Foundation+Categories.h" 

/* since we don't really have blocks and i don't feel like including them.. */
@implementation NSArray (GDL2PaletteAdditions)

- (NSArray *) arrayWithObjectsRespondingYesToSelector:(SEL)selector;
{
  int i,c;
  BOOL (*sel_imp)(id, SEL, ...);
  NSMutableArray *arr = [[NSMutableArray alloc] init];
  BOOL flag;
  
  for (i = 0, c = [self count]; i < c; i++)
    {
      id obj = [self objectAtIndex:i];

      flag = [obj respondsToSelector:selector];

      if (flag)
	{
	  sel_imp = (BOOL (*)(id, SEL, ...))[obj methodForSelector:selector];
	  flag = (*sel_imp)(obj, selector);
	
	  if (flag)
	    [arr addObject:obj];
	}
    }
  return arr;
}

- (NSArray *) arrayWithObjectsRespondingYesToSelector:(SEL)selector
withObject:(id)argument;
{
  int i,c;
  BOOL (*sel_imp)(id, SEL, ...);
  NSMutableArray *arr = [[NSMutableArray alloc] init];
  BOOL flag;
  
  for (i = 0, c = [self count]; i < c; i++)
    {
      id obj = [self objectAtIndex:i];

      flag = [obj respondsToSelector:selector];

      if (flag)
	{
	  sel_imp = (BOOL (*)(id, SEL, ...))[obj methodForSelector:selector];
	  flag = (*sel_imp)(obj, selector, argument);
	
	  if (flag)
	    [arr addObject:obj];
	}
    }
  return arr;
}

@end

@implementation NSObject(GDL2PaletteAdditions)
- (BOOL) isKindOfClasses:(NSArray *)classes
{
  int i,c;
  BOOL flag;

  for (i = 0, c = [classes count]; i < c; i++)
    {
      if ([self isKindOfClass: [classes objectAtIndex:i]])
	return YES;
    }
  return NO;
}

@end
