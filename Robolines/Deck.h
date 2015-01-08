//
//  Deck.h
//  Robolines
//
//  Created by Benjamin Wishart on 2012-09-23.
//  Copyright (c) 2012 Benjamin Wishart. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject <NSXMLParserDelegate>
{
    NSXMLParser *parser;
    NSMutableString *element;
    NSMutableArray *cardActions;
    NSMutableArray *parts;
    //CardAction *tempCardAction;
    Card *tempCard;
    int quantity;
}

-(id) init;
-(void) shuffle;
-(void) parseDeckFile;
-(void) print;

-(void) addCard: (Card *) card;
-(Card *) draw;

@property (nonatomic, retain, readwrite) NSMutableArray *cards;

@end
