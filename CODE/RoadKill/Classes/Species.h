//
//  Species.h
//  RoadKill
//
//  Created by Pamela on 10/17/10.
//  Copyright 2010 Seattle RoadKill Team. All rights reserved.
//

#import <CoreData/CoreData.h>

@class Observation;
@class SpeciesCategory;

@interface Species :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * nidCode;
@property (nonatomic, retain) NSString * latinName;
@property (nonatomic, retain) NSString * commonName;
@property (nonatomic, retain) SpeciesCategory * speciesCategory;
@property (nonatomic, retain) NSSet* observations;

+ (Species *)findOrCreateSpeciesWithCommonName:(NSString *)theCommonName
									 latinName:(NSString *)theLatinName
									   nidCode:(NSString *)theNidCode
							   speciesCategory:(SpeciesCategory *)theSpeciesCategory
									 inContext:(NSManagedObjectContext *)moc;
@end


@interface Species (CoreDataGeneratedAccessors)
- (void)addObservationsObject:(Observation *)value;
- (void)removeObservationsObject:(Observation *)value;
- (void)addObservations:(NSSet *)value;
- (void)removeObservations:(NSSet *)value;

@end

