/* AUTOMATICALLY GENERATED FILE - DO NOT EDIT */

#ifndef TRACEFILES_TRACETYPES_HPP
#define TRACEFILES_TRACETYPES_HPP

#include "oops/symbol.hpp"
#include "trace/traceDataTypes.hpp"
#include "utilities/globalDefinitions.hpp"
#include "utilities/ticks.hpp"

enum JVMContentType {
  _not_a_content_type = (JVM_CONTENT_TYPES_START - 1),
  
  CONTENT_TYPE_VMTHREAD,
  CONTENT_TYPE_THREADGROUP,
  CONTENT_TYPE_METHOD,
  CONTENT_TYPE_SYMBOL,
  CONTENT_TYPE_THREADSTATE,
  CONTENT_TYPE_GCNAME,
  CONTENT_TYPE_GCCAUSE,
  CONTENT_TYPE_GCWHEN,
  CONTENT_TYPE_G1YCTYPE,
  CONTENT_TYPE_GCTHRESHOLDUPDATER,
  CONTENT_TYPE_REFERENCETYPE,
  CONTENT_TYPE_METADATATYPE,
  CONTENT_TYPE_METASPACEOBJTYPE,
  CONTENT_TYPE_NARROWOOPMODE,
  CONTENT_TYPE_VMOPERATIONTYPE,
  CONTENT_TYPE_COMPILERPHASETYPE,
  CONTENT_TYPE_FLAGVALUEORIGIN,

  NUM_JVM_CONTENT_TYPES
};


enum JVMEventRelations {
  JVM_REL_NOT_AVAILABLE = 0,
  
  JVM_REL_GC_ID,
  JVM_REL_COMP_ID,
  JVM_REL_SWEEP_ID,
  JVM_REL_JAVA_MONITOR_ADDRESS,

  NUM_EVENT_RELATIONS
};

/**
 * Create typedefs for the TRACE types:
 *   typedef s8 TYPE_LONG;
 *   typedef s4 TYPE_INTEGER;
 *   typedef const char * TYPE_STRING;
 *   ...
 */

typedef s8  TYPE_LONG;

typedef u8  TYPE_ULONG;

typedef s4  TYPE_INTEGER;

typedef unsigned  TYPE_UINT;

typedef u2  TYPE_USHORT;

typedef s2  TYPE_SHORT;

typedef s1  TYPE_BYTE;

typedef u1  TYPE_UBYTE;

typedef float  TYPE_FLOAT;

typedef double  TYPE_DOUBLE;

typedef bool  TYPE_BOOLEAN;

typedef u4  TYPE_BYTES;

typedef u4  TYPE_IOBYTES;

typedef u8  TYPE_BYTES64;

typedef s8  TYPE_EPOCHMILLIS;

typedef s8  TYPE_MILLIS;

typedef s8  TYPE_NANOS;

typedef Ticks  TYPE_TICKS;

typedef Tickspan  TYPE_TICKSPAN;

typedef u8  TYPE_ADDRESS;

typedef float  TYPE_PERCENT;

typedef const char *  TYPE_UTF8;

typedef TraceUnicodeString*  TYPE_STRING;

typedef Symbol *  TYPE_SYMBOL;

typedef Klass *  TYPE_CLASS;

typedef Method *  TYPE_METHOD;

typedef u8  TYPE_STACKTRACE;

typedef u4  TYPE_OSTHREAD;

typedef u8  TYPE_VMTHREAD;

typedef s8  TYPE_JAVALANGTHREAD;

typedef u8  TYPE_THREADGROUP;

typedef u1  TYPE_FRAMETYPE;

typedef u2  TYPE_THREADSTATE;

typedef u1  TYPE_GCNAME;

typedef u2  TYPE_GCCAUSE;

typedef u1  TYPE_GCWHEN;

typedef u1  TYPE_G1YCTYPE;

typedef u1  TYPE_GCTHRESHOLDUPDATER;

typedef u1  TYPE_REFERENCETYPE;

typedef u1  TYPE_METADATATYPE;

typedef u1  TYPE_METASPACEOBJTYPE;

typedef u1  TYPE_NARROWOOPMODE;

typedef u1  TYPE_COMPILERPHASETYPE;

typedef u2  TYPE_VMOPERATIONTYPE;

typedef u1  TYPE_FLAGVALUEORIGIN;


#endif // TRACEFILES_TRACETYPES_HPP
