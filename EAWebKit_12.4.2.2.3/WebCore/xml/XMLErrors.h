/*
 * Copyright (C) 2011 Google Inc. All rights reserved.
 * Copyright (C) 2011 Electronic Arts, Inc. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * 1. Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY GOOGLE INC. AND ITS CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL GOOGLE INC.
 * OR ITS CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef XMLErrors_h
#define XMLErrors_h

#include <wtf/text/StringBuilder.h>
#include <wtf/text/TextPosition.h>

//+EAWebKitChange
//10/19/2011 - We define USE(LIBXML2) if interested in using it.
#if USE(LIBXML2)
//#if !USE(QXMLSTREAM)
#include <libxml/parser.h>
#endif
//-EAWebKitChange

namespace WebCore {

class Document;

class XMLErrors {
public:
    explicit XMLErrors(Document*);

    // Exposed for callbacks:
    enum ErrorType { warning, nonFatal, fatal };
    void handleError(ErrorType, const char* message, int lineNumber, int columnNumber);
    void handleError(ErrorType, const char* message, TextPosition1);

    void insertErrorMessageBlock();

private:
    void appendErrorMessage(const String& typeString, TextPosition1, const char* message);

    Document* m_document;

    int m_errorCount;
    TextPosition1 m_lastErrorPosition;
    StringBuilder m_errorMessages;
};

} // namespace WebCore

#endif // XMLErrors_h
