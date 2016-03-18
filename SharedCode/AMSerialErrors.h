//
//  AMSerialErrors.h
//
//  Created by Andreas Mayer on 2006-07-27.
//  Copyright (c) 2006-2016 Andreas Mayer. All rights reserved.
//

typedef NS_ENUM(NSInteger, AMSerialError) {
	kAMSerialErrorNone = 0,
	kAMSerialErrorFatal = 99,
	
	// reading only
	kAMSerialErrorTimeout = 100,
	kAMSerialErrorInternalBufferFull = 101,
	
	// writing only
	kAMSerialErrorNoDataToWrite = 200,
	kAMSerialErrorOnlySomeDataWritten = 201,
};

typedef NS_ENUM(int, AMSerialEndCode) {
	// reading only
	kAMSerialEndCodeEndOfStream = 0,
	kAMSerialEndCodeStopCharReached = 1,
	kAMSerialEndCodeStopLengthReached = 2,
	kAMSerialEndCodeStopLengthExceeded = 3,
	
	// old names, deprecated
	kAMSerialEndOfStream DEPRECATED_MSG_ATTRIBUTE("Use kAMSerialEndCodeEndOfStream") = kAMSerialEndCodeEndOfStream,
	kAMSerialStopCharReached DEPRECATED_MSG_ATTRIBUTE("Use kAMSerialEndCodeStopCharReached") = kAMSerialEndCodeStopCharReached,
	kAMSerialStopLengthReached DEPRECATED_MSG_ATTRIBUTE("Use kAMSerialEndCodeStopLengthReached") = kAMSerialEndCodeStopLengthReached,
	kAMSerialStopLengthExceeded DEPRECATED_MSG_ATTRIBUTE("Use kAMSerialEndCodeStopLengthExceeded") = kAMSerialEndCodeStopLengthExceeded,
};
