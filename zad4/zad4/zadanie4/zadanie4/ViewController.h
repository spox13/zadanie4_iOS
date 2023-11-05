//
//  ViewController.h
//  zadanie4
//
//  Created by Adam Prus on 04/11/2023.
//

#import <UIKit/UIKit.h>
#import "SecondViewController.h"

@interface ViewController : UIViewController <SecondViewControllerDelegate>

@property (weak, nonatomic) IBOutlet UILabel *messageLabel;
@property (weak, nonatomic) IBOutlet UITextField *nameTextField;
@property (weak, nonatomic) IBOutlet UITextField *surnameTextField;
- (IBAction)enter:(UIButton *)sender;

@end

