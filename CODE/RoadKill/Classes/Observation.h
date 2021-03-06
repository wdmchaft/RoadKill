//
//  Observation.h
//  RoadKill
//
//  Created by Hal Mueller on 10/12/10.
//

#import <CoreData/CoreData.h>

@class Photo;
@class Species;
@class SpeciesCategory;
@class State;
@class User;

@interface Observation :  NSManagedObject  
{
}

@property (nonatomic, retain) NSString * formIDConfidence;
@property (nonatomic, retain) NSString * sentStatus;
@property (nonatomic, retain) NSString * observerName;
@property (nonatomic, retain) NSNumber * longitude;
@property (nonatomic, retain) NSNumber * decayDurationHours;
@property (nonatomic, retain) NSString * street;
@property (nonatomic, retain) NSNumber * latitude;
@property (nonatomic, retain) NSString * observationID;
@property (nonatomic, retain) NSString * freeText;
@property (nonatomic, retain) NSDate * observationTimestamp;
@property (nonatomic, retain) State * state;
@property (nonatomic, retain) Species * species;
@property (nonatomic, retain) NSSet* photos;
@property (nonatomic, retain) User * user;

+ (Observation *)addObservationInContext:(NSManagedObjectContext *)moc;
- (void)markAsTestObservation;
- (BOOL)isValidForSubmission;

@end

@interface Observation (CoreDataGeneratedAccessors)
- (void)addPhotosObject:(Photo *)value;
- (void)removePhotosObject:(Photo *)value;
- (void)addPhotos:(NSSet *)value;
- (void)removePhotos:(NSSet *)value;

@end



