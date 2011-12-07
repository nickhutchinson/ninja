/* Generated by re2c 0.13.5 */
#line 1 "src/depfile_parser.in.cc"
// Copyright 2011 Google Inc. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "depfile_parser.h"

bool DepfileParser::Parse(const string& content, string* err) {
  const char* p = content.data();
  const char* end = content.data() + content.size();
  for (;;) {
    const char* start = p;
    char yych;
    
#line 27 "src/depfile_parser.cc"
    {
      static const unsigned char yybm[] = {
          0,   0,   0,   0,   0,   0,   0,   0, 
          0,   0, 128,   0,   0,   0,   0,   0, 
          0,   0,   0,   0,   0,   0,   0,   0, 
          0,   0,   0,   0,   0,   0,   0,   0, 
        128,   0,   0,   0,   0,   0,   0,   0, 
          0,   0,   0,  64,  64,  64,  64,  64, 
         64,  64,  64,  64,  64,  64,  64,  64, 
         64,  64,  64,   0,   0,   0,   0,   0, 
          0,  64,  64,  64,  64,  64,  64,  64, 
         64,  64,  64,  64,  64,  64,  64,  64, 
         64,  64,  64,  64,  64,  64,  64,  64, 
         64,  64,  64,   0,   0,   0,   0,  64, 
          0,  64,  64,  64,  64,  64,  64,  64, 
         64,  64,  64,  64,  64,  64,  64,  64, 
         64,  64,  64,  64,  64,  64,  64,  64, 
         64,  64,  64,   0,   0,   0,   0,   0, 
          0,   0,   0,   0,   0,   0,   0,   0, 
          0,   0,   0,   0,   0,   0,   0,   0, 
          0,   0,   0,   0,   0,   0,   0,   0, 
          0,   0,   0,   0,   0,   0,   0,   0, 
          0,   0,   0,   0,   0,   0,   0,   0, 
          0,   0,   0,   0,   0,   0,   0,   0, 
          0,   0,   0,   0,   0,   0,   0,   0, 
          0,   0,   0,   0,   0,   0,   0,   0, 
          0,   0,   0,   0,   0,   0,   0,   0, 
          0,   0,   0,   0,   0,   0,   0,   0, 
          0,   0,   0,   0,   0,   0,   0,   0, 
          0,   0,   0,   0,   0,   0,   0,   0, 
          0,   0,   0,   0,   0,   0,   0,   0, 
          0,   0,   0,   0,   0,   0,   0,   0, 
          0,   0,   0,   0,   0,   0,   0,   0, 
          0,   0,   0,   0,   0,   0,   0,   0, 
      };

      if ((end - p) < 2) break;
      yych = *p;
      if (yych <= '@') {
        if (yych <= 0x1F) {
          if (yych == '\n') goto yy5;
          goto yy8;
        } else {
          if (yych <= ' ') goto yy5;
          if (yych <= '*') goto yy8;
          if (yych <= ':') goto yy6;
          goto yy8;
        }
      } else {
        if (yych <= '^') {
          if (yych <= 'Z') goto yy6;
          if (yych == '\\') goto yy3;
          goto yy8;
        } else {
          if (yych == '`') goto yy8;
          if (yych <= 'z') goto yy6;
          goto yy8;
        }
      }
yy2:
#line 38 "src/depfile_parser.in.cc"
      { continue; }
#line 90 "src/depfile_parser.cc"
yy3:
      ++p;
      if ((yych = *p) == '\n') goto yy13;
yy4:
#line 48 "src/depfile_parser.in.cc"
      {
      *err = "BUG: depfile lexer encountered unknown state";
      return false;
    }
#line 100 "src/depfile_parser.cc"
yy5:
      yych = *++p;
      goto yy12;
yy6:
      ++p;
      yych = *p;
      goto yy10;
yy7:
#line 39 "src/depfile_parser.in.cc"
      {
      // Got a filename.
      if (p[-1] == ':') {
        out_ = StringPiece(start, p - start - 1);
      } else {
        ins_.push_back(StringPiece(start, p - start));
      }
      continue;
    }
#line 119 "src/depfile_parser.cc"
yy8:
      yych = *++p;
      goto yy4;
yy9:
      ++p;
      if (end <= p) break;
      yych = *p;
yy10:
      if (yybm[0+yych] & 64) {
        goto yy9;
      }
      goto yy7;
yy11:
      ++p;
      if (end <= p) break;
      yych = *p;
yy12:
      if (yybm[0+yych] & 128) {
        goto yy11;
      }
      goto yy2;
yy13:
      ++p;
#line 37 "src/depfile_parser.in.cc"
      { continue; }
#line 145 "src/depfile_parser.cc"
    }
#line 52 "src/depfile_parser.in.cc"

  }
  return true;
}
