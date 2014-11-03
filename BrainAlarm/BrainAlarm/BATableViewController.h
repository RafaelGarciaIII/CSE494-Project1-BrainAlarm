//
//  BATableViewController.h
//  BrainAlarm
//
//  Created by Nathaniel Mendoza on 10/22/14.
//  Copyright (c) 2014 ___CSE494___. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BATableViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate>

+(NSMutableArray *)alarms;

+(void)LoadAlarmList;
+(void)SaveAlarmList;

@end

