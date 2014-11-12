//
//  BAMathProblem.h
//  BrainAlarm
//
//  Created by Nathaniel Mendoza on 11/5/14.
//  Copyright (c) 2014 ___CSE494___. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BAMathProblem : NSObject

//instance variables for each math object
@property int answer;
@property int operand1;
@property int operand2;
//string representation of the operator (add, subtract, multiply)
@property NSString *operation;

//if answer is correct, returns yes
-(BOOL) isAnswerCorrect:(int)answer;

//string representation of the math problem, can send to a label directly
-(NSString*)ToString;

//used to get value for hint
-(int)returnAnswer;

//custom constructor / init method
-(instancetype)initGenerateProblem;

@end