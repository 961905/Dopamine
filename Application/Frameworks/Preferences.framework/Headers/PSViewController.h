
#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>


@interface PSViewController : UIViewController  {

}

- (BOOL)canBeShownFromSuspendedState;
- (void)dealloc;
- (void)didLock;
- (void)didUnlock;
- (void)didWake;
- (void)formSheetViewDidDisappear;
- (void)formSheetViewWillDisappear;
- (void)handleURL:(id)arg1;
- (id)parentController;
- (void)popupViewDidDisappear;
- (void)popupViewWillDisappear;
- (void)pushController:(id)arg1;
- (id)readPreferenceValue:(id)arg1;
- (id)rootController;
- (void)setParentController:(id)arg1;
- (void)setPreferenceValue:(id)arg1 specifier:(id)arg2;
- (void)setRootController:(id)arg1;
- (void)setSpecifier:(id)arg1;
- (id)specifier;
- (void)statusBarWillAnimateByHeight:(float)arg1;
- (void)suspend;
- (void)willBecomeActive;
- (void)willResignActive;
- (void)willUnlock;

@end