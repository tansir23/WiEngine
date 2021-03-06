/*
 * Copyright (c) 2010 WiYun Inc.
 * Author: luma(stubma@gmail.com)
 *
 * For all entities this program is free software; you can redistribute
 * it and/or modify it under the terms of the 'WiEngine' license with
 * the additional provision that 'WiEngine' must be credited in a manner
 * that can be be observed by end users, for example, in the credits or during
 * start up. (please find WiEngine logo in sdk's logo folder)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#if IOS || MACOSX

#ifndef __wyHttpResponse_cocoa_h__
#define __wyHttpResponse_cocoa_h__

#include "wyHttpResponse.h"
#include <Foundation/Foundation.h>

/**
 * @class wyHttpResponse_cocoa
 *
 * http response implementation for cocoa, which is available for iOS and Mac OS X
 */
class wyHttpResponse_cocoa : public wyHttpResponse {
private:
    /// cocoa response
    NSHTTPURLResponse* m_response;
    
protected:
	wyHttpResponse_cocoa(NSHTTPURLResponse* response);
    
public:
	virtual ~wyHttpResponse_cocoa();
    
	/**
	 * Create http response object from a cocoa HTTP URL response
	 */
	static wyHttpResponse_cocoa* make(NSHTTPURLResponse* response);
    
	/// @see wyHttpResponse::getHeader
	virtual const char* getHeader(const char* name);
    
	/// @see wyHttpResponse::getStatusCode
	virtual int getStatusCode();
    
    /// get body memory buffer
	wyMemoryOutputStream* getBodyStream() { return m_body; }
};

#endif // __wyHttpResponse_cocoa_h__

#endif // #if IOS || MACOSX
