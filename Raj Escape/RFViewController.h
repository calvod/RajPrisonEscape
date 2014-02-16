//
//  RFViewController.h
//  Raj Escape
//
//  Created by Diego Calvo on 12/14/13.
//  Copyright (c) 2013 Diego Calvo. All rights reserved.
//

#import <UIKit/UIKit.h>

int Number;

@interface RFViewController : UIViewController {

    
    IBOutlet UIButton *startbutton;
    NSTimer * randomMain;
    CGPoint posgiancarlo;
    CGPoint posnick;
    CGPoint posdanny;
    CGPoint posjake;
    CGPoint posblake;
    CGPoint posdiego;
    CGPoint poskevin;
    BOOL bossMode;
    IBOutlet UIImageView *player;
    IBOutlet UIImageView *enemy;
    IBOutlet UIImageView *nick;
    IBOutlet UIImageView *danny;
    IBOutlet UIImageView *jake;
    IBOutlet UIImageView *blake;
    IBOutlet UIImageView *diego;
    IBOutlet UIImageView *kevin;
    
    IBOutlet UIImageView *bossModeAlert;
    IBOutlet UILabel *seconds;
    NSTimer *timer;


}

-(IBAction)start;
-(void)countdown;
@end
