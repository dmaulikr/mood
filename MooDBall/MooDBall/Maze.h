//
//  Maze.h
//  MooDBall
//
//  Created by Vladislav Saveliev on 29 Nov.
//  Copyright (c) 2012 Mariia Fofanova. All rights reserved.
//

#import "MazeEntity.h"

@interface Maze : NSObject {
    size_t width;
    size_t height;
    BOOL * data;
    MazeEntity * entity;
}

@property (atomic) size_t width;
@property (atomic) size_t height;
@property (nonatomic) BOOL * data;
@property (nonatomic) MazeEntity * entity;

- (id) initWithWidth: (size_t)theWidth andHeight: (size_t)theHeight andEmptyEntity: (MazeEntity *) emptyEntity;

- (id) initWithEntity: (MazeEntity *) entity;

- (void) dealloc;

- (void) setFreeAtX: (int)x andY: (int)y;

- (void) setFilledAtX: (int)x andY: (int)y;

- (BOOL) getAtX: (int)x andY: (int)y;

@end
