//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFViewModelObject.h"

@class KGKTVManager, KTVPitchModel, KtvAccompanyHttpADO, KtvKrcModel, NSArray, NSMutableArray, NSMutableDictionary;

@interface KTVKrcPitchModel : KFViewModelObject
{
    double totalTime;
    double leftWidth;
    double leftTime;
    double rightTime;
    int songState;
    double speed;
    double lineGap;
    _Bool canUpdate;
    _Bool _isKrcSearchChanged;
    _Bool _hasSong;
    _Bool _isSingleRecord;
    _Bool _ensureScore;
    _Bool _isChorus;
    _Bool _isPrepared;
    int _singleRecordStartRow;
    int _singleRecordEndRow;
    int _averageScore;
    int _totalKrcCount;
    int _vaildKrcCount;
    int _useKrcCount;
    int _lastBeginIndex;
    long long _songId;
    KtvKrcModel *_usedkrcModel;
    KtvKrcModel *_wholeKrcModel;
    KGKTVManager *_livePlayer;
    NSMutableArray *_krcScoreMuArr;
    NSArray *_krcPitchArr;
    KTVPitchModel *_krcPitchModel;
    double _krcAjustTime;
    NSArray *_scoreRankArr;
    CDUnknownBlockType _rightBlock;
    CDUnknownBlockType _sentenceBlock;
    CDUnknownBlockType _refreshBlock;
    CDUnknownBlockType _totalScoreBlock;
    CDUnknownBlockType _indicateLocationBlock;
    CDUnknownBlockType _drawCorrectLineBlock;
    double _recordTime;
    NSMutableDictionary *_localKrcPitchDict;
    KTVPitchModel *_totalPitchModel;
    KTVPitchModel *_correctPitchModel;
    NSMutableArray *_standardArr;
    KtvAccompanyHttpADO *_httpDao;
    double _currentTime;
    NSMutableArray *_tempScoreMuArr;
    NSMutableArray *_finalScoreMuArr;
    long long _singleRecordCurrentRow;
    NSArray *_preKrcScoreArr;
    double _lastTime;
    long long _currentIndex;
    NSMutableArray *_chorusScoreMuArr;
}

+ (long long)changeRankEnumFromString:(id)arg1;
+ (void)deletePitchFileWithSongID:(long long)arg1;
+ (id)getKrcScoreMuArrWithScores:(id)arg1 andScoreRankArr:(id *)arg2 totalKrcCount:(int *)arg3 vaildKrcCount:(int *)arg4 averageScore:(int *)arg5;
+ (id)base64andZIPScoresWithArray:(id)arg1 andScoreRankArr:(id)arg2 totalKrcCount:(int)arg3 vaildKrcCount:(int)arg4 averageScore:(int)arg5;
+ (void)base64Score:(id)arg1 averageScore:(int *)arg2 totalScore:(int *)arg3 scoreRank:(id *)arg4;
+ (id)base64ScoreAverageScore:(int)arg1 totalScore:(int)arg2 scoreRank:(id)arg3;
+ (id)getScoreRankWithBase64Score:(id)arg1;
+ (id)getScoreRankWithAverageScore:(int)arg1 andScoreRankArr:(id)arg2;
+ (id)getKrcPitchFilePath;
@property(retain, nonatomic) NSMutableArray *chorusScoreMuArr; // @synthesize chorusScoreMuArr=_chorusScoreMuArr;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) int lastBeginIndex; // @synthesize lastBeginIndex=_lastBeginIndex;
@property(nonatomic) int useKrcCount; // @synthesize useKrcCount=_useKrcCount;
@property(nonatomic) double lastTime; // @synthesize lastTime=_lastTime;
@property(retain, nonatomic) NSArray *preKrcScoreArr; // @synthesize preKrcScoreArr=_preKrcScoreArr;
@property(nonatomic) long long singleRecordCurrentRow; // @synthesize singleRecordCurrentRow=_singleRecordCurrentRow;
@property(retain, nonatomic) NSMutableArray *finalScoreMuArr; // @synthesize finalScoreMuArr=_finalScoreMuArr;
@property(retain, nonatomic) NSMutableArray *tempScoreMuArr; // @synthesize tempScoreMuArr=_tempScoreMuArr;
@property(nonatomic) double currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) _Bool isPrepared; // @synthesize isPrepared=_isPrepared;
@property(retain, nonatomic) KtvAccompanyHttpADO *httpDao; // @synthesize httpDao=_httpDao;
@property(retain, nonatomic) NSMutableArray *standardArr; // @synthesize standardArr=_standardArr;
@property(retain, nonatomic) KTVPitchModel *correctPitchModel; // @synthesize correctPitchModel=_correctPitchModel;
@property(retain, nonatomic) KTVPitchModel *totalPitchModel; // @synthesize totalPitchModel=_totalPitchModel;
@property(retain, nonatomic) NSMutableDictionary *localKrcPitchDict; // @synthesize localKrcPitchDict=_localKrcPitchDict;
@property(nonatomic) double recordTime; // @synthesize recordTime=_recordTime;
@property(nonatomic) int vaildKrcCount; // @synthesize vaildKrcCount=_vaildKrcCount;
@property(nonatomic) int totalKrcCount; // @synthesize totalKrcCount=_totalKrcCount;
@property(nonatomic) int averageScore; // @synthesize averageScore=_averageScore;
@property(nonatomic) _Bool isChorus; // @synthesize isChorus=_isChorus;
@property(copy, nonatomic) CDUnknownBlockType drawCorrectLineBlock; // @synthesize drawCorrectLineBlock=_drawCorrectLineBlock;
@property(copy, nonatomic) CDUnknownBlockType indicateLocationBlock; // @synthesize indicateLocationBlock=_indicateLocationBlock;
@property(copy, nonatomic) CDUnknownBlockType totalScoreBlock; // @synthesize totalScoreBlock=_totalScoreBlock;
@property(copy, nonatomic) CDUnknownBlockType refreshBlock; // @synthesize refreshBlock=_refreshBlock;
@property(copy, nonatomic) CDUnknownBlockType sentenceBlock; // @synthesize sentenceBlock=_sentenceBlock;
@property(copy, nonatomic) CDUnknownBlockType rightBlock; // @synthesize rightBlock=_rightBlock;
@property(nonatomic) _Bool ensureScore; // @synthesize ensureScore=_ensureScore;
@property(nonatomic) int singleRecordEndRow; // @synthesize singleRecordEndRow=_singleRecordEndRow;
@property(nonatomic) int singleRecordStartRow; // @synthesize singleRecordStartRow=_singleRecordStartRow;
@property(nonatomic) _Bool isSingleRecord; // @synthesize isSingleRecord=_isSingleRecord;
@property(nonatomic) _Bool hasSong; // @synthesize hasSong=_hasSong;
@property(retain, nonatomic) NSArray *scoreRankArr; // @synthesize scoreRankArr=_scoreRankArr;
@property(nonatomic) double krcAjustTime; // @synthesize krcAjustTime=_krcAjustTime;
@property(retain, nonatomic) KTVPitchModel *krcPitchModel; // @synthesize krcPitchModel=_krcPitchModel;
@property(retain, nonatomic) NSArray *krcPitchArr; // @synthesize krcPitchArr=_krcPitchArr;
@property(retain, nonatomic) NSMutableArray *krcScoreMuArr; // @synthesize krcScoreMuArr=_krcScoreMuArr;
@property(nonatomic) __weak KGKTVManager *livePlayer; // @synthesize livePlayer=_livePlayer;
@property(retain, nonatomic) KtvKrcModel *wholeKrcModel; // @synthesize wholeKrcModel=_wholeKrcModel;
@property(retain, nonatomic) KtvKrcModel *usedkrcModel; // @synthesize usedkrcModel=_usedkrcModel;
@property(nonatomic) _Bool isKrcSearchChanged; // @synthesize isKrcSearchChanged=_isKrcSearchChanged;
@property(nonatomic) long long songId; // @synthesize songId=_songId;
- (void).cxx_destruct;
- (void)decryptSentenceScore:(id)arg1;
- (id)getSentenceScore;
- (_Bool)scoreOverLevel;
- (id)additionCount;
- (id)getPitchLineWithPitchStartTime:(double)arg1 standStartTime:(double)arg2 endTime:(double)arg3 standEndTime:(double)arg4 pitch:(int)arg5 stage:(int)arg6;
- (id)getLineArrWithEachRowString:(id)arg1;
- (id)analyzeZipAndBase64WithData:(id)arg1;
- (void)getAccompanyPitchcomplete:(CDUnknownBlockType)arg1;
- (void)updateSingleScoreLevel;
- (int)getAddScoreFromScoreArrWithIndex:(int)arg1 score:(int)arg2;
- (void)handlePerRowWithIndex:(int)arg1 scale:(double)arg2 isChorusTa:(_Bool)arg3 isRecordComplete:(_Bool)arg4;
- (void)handlePerRowScoreWithTimePoint:(double)arg1 isDrag:(_Bool)arg2 isRecordComplete:(_Bool)arg3;
- (void)clipPitchWithStartTime:(double)arg1 endTime:(double)arg2;
- (void)startRecordFragmentWithStartTime:(long long)arg1 endTime:(long long)arg2 andKrcModel:(id)arg3;
- (void)dragEndToIndicateTime:(double)arg1;
- (double)getStartYWithScorePitch:(long long)arg1 stage:(int)arg2;
- (void)udpateIndicatorLocationWithTimePoint:(double)arg1;
- (void)refreshAccompanyPitchWithCurrentTime:(double)arg1;
- (int)returnSongState;
- (_Bool)isSingRightWithState:(int)arg1;
- (void)shieldScore;
- (void)startTrueScore;
- (int)getSongState;
- (int)getSongScore;
- (void)resumePitchWithStartTime:(double)arg1 endTime:(double)arg2;
- (void)resumeScore;
- (void)saveScore;
- (int)getTotalScore;
- (int)getTotalScoreWithoutPerfectScore;
- (int)getRecordLinesFromWholeKrcModelWithTimePoint:(double)arg1;
- (int)getRecordLinesFromUsedKrcModelWithTimePoint:(double)arg1;
- (int)getAverageScoreWithPerfectScore;
- (long long)takeTheKrcEndTime;
- (long long)takeTheKrcStartTime;
- (void)endEmitStar;
- (void)endScore;
- (void)reset;
- (int)getValidKrcCountWithIndex:(long long)arg1;
- (int)getValidScoreCountWihtKrcModel:(id)arg1 deadLine:(double)arg2;
- (id)getValidScoreArrWithKrcModel:(id)arg1 useKrcCount:(int *)arg2;
- (void)prepareScore;
- (id)initWithSongId:(long long)arg1;
- (id)init;

@end
