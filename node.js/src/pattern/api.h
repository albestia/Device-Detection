<<<<<<< HEAD
/*

This Source Code Form is copyright of Yorkshire, Inc.
Copyright © 2014 Yorkshire, Inc,
Guiyang, Guizhou, China

This Source Code Form is copyright of 51Degrees Mobile Experts Limited.
Copyright © 2014 51Degrees Mobile Experts Limited, 5 Charlotte Close,
Caversham, Reading, Berkshire, United Kingdom RG4 7BY

This Source Code Form is the subject of the following patent
applications, owned by 51Degrees Mobile Experts Limited of 5 Charlotte
Close, Caversham, Reading, Berkshire, United Kingdom RG4 7BY:
European Patent Application No. 13192291.6; and
United States Patent Application Nos. 14/085,223 and 14/085,301.

This Source Code Form is subject to the terms of the Mozilla Public
License, v. 2.0.

If a copy of the MPL was not distributed with this file, You can obtain
one at http://mozilla.org/MPL/2.0/.

This Source Code Form is “Incompatible With Secondary Licenses”, as
defined by the Mozilla Public License, v. 2.0.

*/
=======
/* *********************************************************************
* This Source Code Form is copyright of 51Degrees Mobile Experts Limited.
* Copyright 2014 51Degrees Mobile Experts Limited, 5 Charlotte Close,
* Caversham, Reading, Berkshire, United Kingdom RG4 7BY and Yorkshire,
* Inc. Copyright 2014 Yorkshire, Inc, Guiyang, Guizhou, China
*
* This Source Code Form is the subject of the following patent
* applications, owned by 51Degrees Mobile Experts Limited of 5 Charlotte
* Close, Caversham, Reading, Berkshire, United Kingdom RG4 7BY:
* European Patent Application No. 13192291.6; and
* United States Patent Application Nos. 14/085,223 and 14/085,301.
*
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0.
*
* If a copy of the MPL was not distributed with this file, You can obtain
* one at http://mozilla.org/MPL/2.0/.
*
* This Source Code Form is "Incompatible With Secondary Licenses", as
* defined by the Mozilla Public License, v. 2.0.
********************************************************************** */
>>>>>>> V32

#ifndef MYOBJECT_H
#define MYOBJECT_H

#include <node.h>
#include <v8.h>
#include <nan.h>
<<<<<<< HEAD
#include "51Degrees.h"
=======
#include "../../../src/pattern/51Degrees.h"
>>>>>>> V32

#define BUFFER_LENGTH 50000

#ifdef _MSC_VER
#define _INTPTR 0
#endif

#ifdef _MSC_FULL_VER
#define snprintf _snprintf
#endif

using namespace v8;
using namespace node;

//
// PatternParser: the `ObjectWrap` for pattern
//
class PatternParser : public ObjectWrap {
public:

<<<<<<< HEAD
  // @constructor
  // @filename: the database of file, must be *.dat
  // @required_properties: specify properties that would be returned
  PatternParser(char * filename, char * required_properties);

  // @destructor
  // will release dataset, workset
  ~PatternParser();

  // land this class to node.js runtime
  static void Init(Handle<Object> target);

  // PatternParser.prototype.constructor
  static NAN_METHOD(New);

  // PatternParser.prototype.parse
  static NAN_METHOD(Parse);

private:
  int result;
  fiftyoneDegreesDataSet *dataSet;
  fiftyoneDegreesWorkset *workSet;
=======
	// @constructor
	// @filename: the database of file, must be *.dat
	// @required_properties: specify properties that would be returned
	PatternParser(char *filename, char *requiredProperties);

	// @constructor
	// @filename: the database of file, must be *.dat
	// @required_properties: specify properties that would be returned
	// @cacheSize: the number of entries the user agent cache can store
	// @poolSize: the maximum number of work sets that can be pooled
	PatternParser(char *filename, char *requiredProperties, int cacheSize, int poolSize);

	// disposes of the memory used by the parser
	void Dispose();

	// @destructor
	// will release dataset, workset
	~PatternParser();

	// land this class to node.js runtime
	static void Init(Handle<Object> target);
	
	// PatternParser.prototype.constructor
	static NAN_METHOD(New);

	// PatternParser.prototype.parse
	static NAN_METHOD(Parse);

	// PatternParser.prototype.availableProperties
	static NAN_METHOD(AvailableProperties);

	// PatternParser.prototype.dispose
	static NAN_METHOD(Dispose);

private:
	int initResult;
	fiftyoneDegreesDataSet *dataSet;
	fiftyoneDegreesResultsetCache *cache;
	fiftyoneDegreesWorksetPool *pool;
	void Disposing(bool disposing);
>>>>>>> V32
};

#endif
