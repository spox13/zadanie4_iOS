//
//  SecondViewController.h
//  zadanie4
//
//  Created by Adam Prus on 04/11/2023.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@class SecondViewController;

@protocol SecondViewControllerDelegate <NSObject>
- (void) addItemViewController:(SecondViewController *) controller didFinishEnteringItem:(NSString *) item;
@end

@interface SecondViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITextField *modifiedSurnameTextField;
@property NSString *surname;
@property (nonatomic, weak) id <SecondViewControllerDelegate> delegate;
- (IBAction)Back:(UIButton *)sender;


@end

NS_ASSUME_NONNULL_END
