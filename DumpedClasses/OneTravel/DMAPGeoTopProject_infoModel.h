//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class DMAPGeoTopFast_carModel<Optional>, DMAPGeoTopTopic_carModel<Optional>, NSNumber<Optional>;

@interface DMAPGeoTopProject_infoModel : JSONModel
{
    NSNumber<Optional> *_open;
    DMAPGeoTopFast_carModel<Optional> *_fast_car;
    DMAPGeoTopTopic_carModel<Optional> *_topic_car;
}

@property(retain, nonatomic) DMAPGeoTopTopic_carModel<Optional> *topic_car; // @synthesize topic_car=_topic_car;
@property(retain, nonatomic) DMAPGeoTopFast_carModel<Optional> *fast_car; // @synthesize fast_car=_fast_car;
@property(retain, nonatomic) NSNumber<Optional> *open; // @synthesize open=_open;
- (void).cxx_destruct;

@end
