/* AUTOMATICALLY GENERATED FILE - DO NOT EDIT */

#ifndef TRACEFILES_TRACEEVENTCLASSES_HPP
#define TRACEFILES_TRACEEVENTCLASSES_HPP

// On purpose outside the INCLUDE_TRACE
// Some parts of traceEvent.hpp are used outside of
// INCLUDE_TRACE

#include "memory/resourceArea.hpp"
#include "tracefiles/traceTypes.hpp"
#include "trace/traceEvent.hpp"
#include "utilities/macros.hpp"
#include "utilities/ticks.hpp"
#if INCLUDE_TRACE
#include "trace/traceStream.hpp"
#include "utilities/ostream.hpp"

  
struct TraceStructVirtualSpace
{
private:
  u8 _start; 
  u8 _committedEnd; 
  u8 _committedSize; 
  u8 _reservedEnd; 
  u8 _reservedSize;
public:
  void set_start(u8 value) { this->_start = value; }
  void set_committedEnd(u8 value) { this->_committedEnd = value; }
  void set_committedSize(u8 value) { this->_committedSize = value; }
  void set_reservedEnd(u8 value) { this->_reservedEnd = value; }
  void set_reservedSize(u8 value) { this->_reservedSize = value; }

  void writeStruct(TraceStream& ts) {
    ts.print_val("Start Address", _start);
    ts.print(", ");
    ts.print_val("Committed End Address", _committedEnd);
    ts.print(", ");
    ts.print_val("Committed Size", _committedSize);
    ts.print(", ");
    ts.print_val("Reserved End Address", _reservedEnd);
    ts.print(", ");
    ts.print_val("Reserved Size", _reservedSize);
  }
};


struct TraceStructObjectSpace
{
private:
  u8 _start; 
  u8 _end; 
  u8 _used; 
  u8 _size;
public:
  void set_start(u8 value) { this->_start = value; }
  void set_end(u8 value) { this->_end = value; }
  void set_used(u8 value) { this->_used = value; }
  void set_size(u8 value) { this->_size = value; }

  void writeStruct(TraceStream& ts) {
    ts.print_val("Start Address", _start);
    ts.print(", ");
    ts.print_val("End Address", _end);
    ts.print(", ");
    ts.print_val("Used", _used);
    ts.print(", ");
    ts.print_val("Size", _size);
  }
};


struct TraceStructMetaspaceSizes
{
private:
  u8 _committed; 
  u8 _used; 
  u8 _reserved;
public:
  void set_committed(u8 value) { this->_committed = value; }
  void set_used(u8 value) { this->_used = value; }
  void set_reserved(u8 value) { this->_reserved = value; }

  void writeStruct(TraceStream& ts) {
    ts.print_val("Committed", _committed);
    ts.print(", ");
    ts.print_val("Used", _used);
    ts.print(", ");
    ts.print_val("Reserved", _reserved);
  }
};


struct TraceStructCopyFailed
{
private:
  u8 _objectCount; 
  u8 _firstSize; 
  u8 _smallestSize; 
  u8 _totalSize;
public:
  void set_objectCount(u8 value) { this->_objectCount = value; }
  void set_firstSize(u8 value) { this->_firstSize = value; }
  void set_smallestSize(u8 value) { this->_smallestSize = value; }
  void set_totalSize(u8 value) { this->_totalSize = value; }

  void writeStruct(TraceStream& ts) {
    ts.print_val("Object Count", _objectCount);
    ts.print(", ");
    ts.print_val("First Failed Object Size", _firstSize);
    ts.print(", ");
    ts.print_val("Smallest Failed Object Size", _smallestSize);
    ts.print(", ");
    ts.print_val("Total Object Size", _totalSize);
  }
};

class EventThreadStart : public TraceEvent<EventThreadStart>
{
 public:
  static const bool hasThread = true;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceThreadStartEvent;

 private:
  s8 _javalangthread;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Java Thread Start: [");
    ts.print_val("Java Thread", _javalangthread);
    ts.print("]\n");
  }

 public:
  void set_javalangthread(s8 value) { this->_javalangthread = value; }

  bool should_write(void) {
    return true;
  }


  EventThreadStart(EventStartTime timing=TIMED) : TraceEvent<EventThreadStart>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventThreadEnd : public TraceEvent<EventThreadEnd>
{
 public:
  static const bool hasThread = true;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceThreadEndEvent;

 private:
  s8 _javalangthread;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Java Thread End: [");
    ts.print_val("Java Thread", _javalangthread);
    ts.print("]\n");
  }

 public:
  void set_javalangthread(s8 value) { this->_javalangthread = value; }

  bool should_write(void) {
    return true;
  }


  EventThreadEnd(EventStartTime timing=TIMED) : TraceEvent<EventThreadEnd>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventThreadSleep : public TraceEvent<EventThreadSleep>
{
 public:
  static const bool hasThread = true;
  static const bool hasStackTrace = true;
  static const bool isInstant = false;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceThreadSleepEvent;

 private:
  s8 _time;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Java Thread Sleep: [");
    ts.print_val("Sleep Time", _time);
    ts.print("]\n");
  }

 public:
  void set_time(s8 value) { this->_time = value; }

  bool should_write(void) {
    return true;
  }


  EventThreadSleep(EventStartTime timing=TIMED) : TraceEvent<EventThreadSleep>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventThreadPark : public TraceEvent<EventThreadPark>
{
 public:
  static const bool hasThread = true;
  static const bool hasStackTrace = true;
  static const bool isInstant = false;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceThreadParkEvent;

 private:
  Klass * _klass; 
  s8 _timeout; 
  u8 _address;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Java Thread Park: [");
    ts.print_val("Class Parked On", _klass);
    ts.print(", ");
    ts.print_val("Park Timeout", _timeout);
    ts.print(", ");
    ts.print_val("Address of Object Parked", _address);
    ts.print("]\n");
  }

 public:
  void set_klass(Klass * value) { this->_klass = value; }
  void set_timeout(s8 value) { this->_timeout = value; }
  void set_address(u8 value) { this->_address = value; }

  bool should_write(void) {
    return true;
  }


  EventThreadPark(EventStartTime timing=TIMED) : TraceEvent<EventThreadPark>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventJavaMonitorEnter : public TraceEvent<EventJavaMonitorEnter>
{
 public:
  static const bool hasThread = true;
  static const bool hasStackTrace = true;
  static const bool isInstant = false;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceJavaMonitorEnterEvent;

 private:
  Klass * _klass; 
  s8 _previousOwner; 
  u8 _address;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Java Monitor Blocked: [");
    ts.print_val("Monitor Class", _klass);
    ts.print(", ");
    ts.print_val("Previous Monitor Owner", _previousOwner);
    ts.print(", ");
    ts.print_val("Monitor Address", _address);
    ts.print("]\n");
  }

 public:
  void set_klass(Klass * value) { this->_klass = value; }
  void set_previousOwner(s8 value) { this->_previousOwner = value; }
  void set_address(u8 value) { this->_address = value; }

  bool should_write(void) {
    return true;
  }


  EventJavaMonitorEnter(EventStartTime timing=TIMED) : TraceEvent<EventJavaMonitorEnter>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventJavaMonitorWait : public TraceEvent<EventJavaMonitorWait>
{
 public:
  static const bool hasThread = true;
  static const bool hasStackTrace = true;
  static const bool isInstant = false;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceJavaMonitorWaitEvent;

 private:
  Klass * _klass; 
  u4 _notifier; 
  s8 _timeout; 
  bool _timedOut; 
  u8 _address;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Java Monitor Wait: [");
    ts.print_val("Monitor Class", _klass);
    ts.print(", ");
    ts.print_val("Notifier Thread", _notifier);
    ts.print(", ");
    ts.print_val("Timeout", _timeout);
    ts.print(", ");
    ts.print_val("Timed Out", _timedOut);
    ts.print(", ");
    ts.print_val("Monitor Address", _address);
    ts.print("]\n");
  }

 public:
  void set_klass(Klass * value) { this->_klass = value; }
  void set_notifier(u4 value) { this->_notifier = value; }
  void set_timeout(s8 value) { this->_timeout = value; }
  void set_timedOut(bool value) { this->_timedOut = value; }
  void set_address(u8 value) { this->_address = value; }

  bool should_write(void) {
    return true;
  }


  EventJavaMonitorWait(EventStartTime timing=TIMED) : TraceEvent<EventJavaMonitorWait>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventClassLoad : public TraceEvent<EventClassLoad>
{
 public:
  static const bool hasThread = true;
  static const bool hasStackTrace = true;
  static const bool isInstant = false;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceClassLoadEvent;

 private:
  Klass * _loadedClass; 
  Klass * _definingClassLoader; 
  Klass * _initiatingClassLoader;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Class Load: [");
    ts.print_val("Loaded Class", _loadedClass);
    ts.print(", ");
    ts.print_val("Defining Class Loader", _definingClassLoader);
    ts.print(", ");
    ts.print_val("Initiating Class Loader", _initiatingClassLoader);
    ts.print("]\n");
  }

 public:
  void set_loadedClass(Klass * value) { this->_loadedClass = value; }
  void set_definingClassLoader(Klass * value) { this->_definingClassLoader = value; }
  void set_initiatingClassLoader(Klass * value) { this->_initiatingClassLoader = value; }

  bool should_write(void) {
    return true;
  }


  EventClassLoad(EventStartTime timing=TIMED) : TraceEvent<EventClassLoad>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventClassUnload : public TraceEvent<EventClassUnload>
{
 public:
  static const bool hasThread = true;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceClassUnloadEvent;

 private:
  Klass * _unloadedClass; 
  Klass * _definingClassLoader;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Class Unload: [");
    ts.print_val("Unloaded Class", _unloadedClass);
    ts.print(", ");
    ts.print_val("Defining Class Loader", _definingClassLoader);
    ts.print("]\n");
  }

 public:
  void set_unloadedClass(Klass * value) { this->_unloadedClass = value; }
  void set_definingClassLoader(Klass * value) { this->_definingClassLoader = value; }

  bool should_write(void) {
    return true;
  }


  EventClassUnload(EventStartTime timing=TIMED) : TraceEvent<EventClassUnload>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventLongFlagChanged : public TraceEvent<EventLongFlagChanged>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceLongFlagChangedEvent;

 private:
  const char * _name; 
  s8 _old_value; 
  s8 _new_value; 
  u1 _origin;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Long Flag Changed: [");
    ts.print_val("Name", _name);
    ts.print(", ");
    ts.print_val("Old Value", _old_value);
    ts.print(", ");
    ts.print_val("New Value", _new_value);
    ts.print(", ");
    ts.print_val("Origin", _origin);
    ts.print("]\n");
  }

 public:
  void set_name(const char * value) { this->_name = value; }
  void set_old_value(s8 value) { this->_old_value = value; }
  void set_new_value(s8 value) { this->_new_value = value; }
  void set_origin(u1 value) { this->_origin = value; }

  bool should_write(void) {
    return true;
  }


  EventLongFlagChanged(EventStartTime timing=TIMED) : TraceEvent<EventLongFlagChanged>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventUnsignedLongFlagChanged : public TraceEvent<EventUnsignedLongFlagChanged>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceUnsignedLongFlagChangedEvent;

 private:
  const char * _name; 
  u8 _old_value; 
  u8 _new_value; 
  u1 _origin;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Unsigned Long Flag Changed: [");
    ts.print_val("Name", _name);
    ts.print(", ");
    ts.print_val("Old Value", _old_value);
    ts.print(", ");
    ts.print_val("New Value", _new_value);
    ts.print(", ");
    ts.print_val("Origin", _origin);
    ts.print("]\n");
  }

 public:
  void set_name(const char * value) { this->_name = value; }
  void set_old_value(u8 value) { this->_old_value = value; }
  void set_new_value(u8 value) { this->_new_value = value; }
  void set_origin(u1 value) { this->_origin = value; }

  bool should_write(void) {
    return true;
  }


  EventUnsignedLongFlagChanged(EventStartTime timing=TIMED) : TraceEvent<EventUnsignedLongFlagChanged>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventDoubleFlagChanged : public TraceEvent<EventDoubleFlagChanged>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceDoubleFlagChangedEvent;

 private:
  const char * _name; 
  double _old_value; 
  double _new_value; 
  u1 _origin;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Double Flag Changed: [");
    ts.print_val("Name", _name);
    ts.print(", ");
    ts.print_val("Old Value", _old_value);
    ts.print(", ");
    ts.print_val("New Value", _new_value);
    ts.print(", ");
    ts.print_val("Origin", _origin);
    ts.print("]\n");
  }

 public:
  void set_name(const char * value) { this->_name = value; }
  void set_old_value(double value) { this->_old_value = value; }
  void set_new_value(double value) { this->_new_value = value; }
  void set_origin(u1 value) { this->_origin = value; }

  bool should_write(void) {
    return true;
  }


  EventDoubleFlagChanged(EventStartTime timing=TIMED) : TraceEvent<EventDoubleFlagChanged>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventBooleanFlagChanged : public TraceEvent<EventBooleanFlagChanged>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceBooleanFlagChangedEvent;

 private:
  const char * _name; 
  bool _old_value; 
  bool _new_value; 
  u1 _origin;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Boolean Flag Changed: [");
    ts.print_val("Name", _name);
    ts.print(", ");
    ts.print_val("Old Value", _old_value);
    ts.print(", ");
    ts.print_val("New Value", _new_value);
    ts.print(", ");
    ts.print_val("Origin", _origin);
    ts.print("]\n");
  }

 public:
  void set_name(const char * value) { this->_name = value; }
  void set_old_value(bool value) { this->_old_value = value; }
  void set_new_value(bool value) { this->_new_value = value; }
  void set_origin(u1 value) { this->_origin = value; }

  bool should_write(void) {
    return true;
  }


  EventBooleanFlagChanged(EventStartTime timing=TIMED) : TraceEvent<EventBooleanFlagChanged>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventStringFlagChanged : public TraceEvent<EventStringFlagChanged>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceStringFlagChangedEvent;

 private:
  const char * _name; 
  const char * _old_value; 
  const char * _new_value; 
  u1 _origin;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("String Flag Changed: [");
    ts.print_val("Name", _name);
    ts.print(", ");
    ts.print_val("Old Value", _old_value);
    ts.print(", ");
    ts.print_val("New Value", _new_value);
    ts.print(", ");
    ts.print_val("Origin", _origin);
    ts.print("]\n");
  }

 public:
  void set_name(const char * value) { this->_name = value; }
  void set_old_value(const char * value) { this->_old_value = value; }
  void set_new_value(const char * value) { this->_new_value = value; }
  void set_origin(u1 value) { this->_origin = value; }

  bool should_write(void) {
    return true;
  }


  EventStringFlagChanged(EventStartTime timing=TIMED) : TraceEvent<EventStringFlagChanged>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventGCHeapSummary : public TraceEvent<EventGCHeapSummary>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceGCHeapSummaryEvent;

 private:
  unsigned _gcId; 
  u1 _when; 
  TraceStructVirtualSpace _heapSpace;
  u8 _heapUsed;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Heap Summary: [");
    ts.print_val("GC ID", _gcId);
    ts.print(", ");
    ts.print_val("When", _when);
    ts.print(", ");
    _heapSpace.writeStruct(ts);
    ts.print(", ");
    ts.print_val("Heap Used", _heapUsed);
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }
  void set_when(u1 value) { this->_when = value; }
  void set_heapSpace(const TraceStructVirtualSpace& value) { this->_heapSpace = value; }
  void set_heapUsed(u8 value) { this->_heapUsed = value; }

  bool should_write(void) {
    return true;
  }


  EventGCHeapSummary(EventStartTime timing=TIMED) : TraceEvent<EventGCHeapSummary>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventMetaspaceSummary : public TraceEvent<EventMetaspaceSummary>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceMetaspaceSummaryEvent;

 private:
  unsigned _gcId; 
  u1 _when; 
  u8 _gcThreshold; 
  TraceStructMetaspaceSizes _metaspace;
  TraceStructMetaspaceSizes _dataSpace;
  TraceStructMetaspaceSizes _classSpace;


  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Metaspace Summary: [");
    ts.print_val("GC ID", _gcId);
    ts.print(", ");
    ts.print_val("When", _when);
    ts.print(", ");
    ts.print_val("GC Threshold", _gcThreshold);
    ts.print(", ");
    _metaspace.writeStruct(ts);
    ts.print(", ");
    _dataSpace.writeStruct(ts);
    ts.print(", ");
    _classSpace.writeStruct(ts);
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }
  void set_when(u1 value) { this->_when = value; }
  void set_gcThreshold(u8 value) { this->_gcThreshold = value; }
  void set_metaspace(const TraceStructMetaspaceSizes& value) { this->_metaspace = value; }
  void set_dataSpace(const TraceStructMetaspaceSizes& value) { this->_dataSpace = value; }
  void set_classSpace(const TraceStructMetaspaceSizes& value) { this->_classSpace = value; }

  bool should_write(void) {
    return true;
  }


  EventMetaspaceSummary(EventStartTime timing=TIMED) : TraceEvent<EventMetaspaceSummary>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventMetaspaceGCThreshold : public TraceEvent<EventMetaspaceGCThreshold>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceMetaspaceGCThresholdEvent;

 private:
  u8 _oldValue; 
  u8 _newValue; 
  u1 _updater;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Metaspace GC Threshold: [");
    ts.print_val("Old Value", _oldValue);
    ts.print(", ");
    ts.print_val("New Value", _newValue);
    ts.print(", ");
    ts.print_val("Updater", _updater);
    ts.print("]\n");
  }

 public:
  void set_oldValue(u8 value) { this->_oldValue = value; }
  void set_newValue(u8 value) { this->_newValue = value; }
  void set_updater(u1 value) { this->_updater = value; }

  bool should_write(void) {
    return true;
  }


  EventMetaspaceGCThreshold(EventStartTime timing=TIMED) : TraceEvent<EventMetaspaceGCThreshold>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventMetaspaceAllocationFailure : public TraceEvent<EventMetaspaceAllocationFailure>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = true;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceMetaspaceAllocationFailureEvent;

 private:
  Klass * _classLoader; 
  bool _anonymousClassLoader; 
  u8 _size; 
  u1 _metadataType; 
  u1 _metaspaceObjectType;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Metaspace Allocation Failure: [");
    ts.print_val("Class Loader", _classLoader);
    ts.print(", ");
    ts.print_val("Anonymous Class Loader", _anonymousClassLoader);
    ts.print(", ");
    ts.print_val("Size", _size);
    ts.print(", ");
    ts.print_val("Metadata Type", _metadataType);
    ts.print(", ");
    ts.print_val("Metaspace Object Type", _metaspaceObjectType);
    ts.print("]\n");
  }

 public:
  void set_classLoader(Klass * value) { this->_classLoader = value; }
  void set_anonymousClassLoader(bool value) { this->_anonymousClassLoader = value; }
  void set_size(u8 value) { this->_size = value; }
  void set_metadataType(u1 value) { this->_metadataType = value; }
  void set_metaspaceObjectType(u1 value) { this->_metaspaceObjectType = value; }

  bool should_write(void) {
    return true;
  }


  EventMetaspaceAllocationFailure(EventStartTime timing=TIMED) : TraceEvent<EventMetaspaceAllocationFailure>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventMetaspaceOOM : public TraceEvent<EventMetaspaceOOM>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = true;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceMetaspaceOOMEvent;

 private:
  Klass * _classLoader; 
  bool _anonymousClassLoader; 
  u8 _size; 
  u1 _metadataType; 
  u1 _metaspaceObjectType;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Metaspace Out of Memory: [");
    ts.print_val("Class Loader", _classLoader);
    ts.print(", ");
    ts.print_val("Anonymous Class Loader", _anonymousClassLoader);
    ts.print(", ");
    ts.print_val("Size", _size);
    ts.print(", ");
    ts.print_val("Metadata Type", _metadataType);
    ts.print(", ");
    ts.print_val("Metaspace Object Type", _metaspaceObjectType);
    ts.print("]\n");
  }

 public:
  void set_classLoader(Klass * value) { this->_classLoader = value; }
  void set_anonymousClassLoader(bool value) { this->_anonymousClassLoader = value; }
  void set_size(u8 value) { this->_size = value; }
  void set_metadataType(u1 value) { this->_metadataType = value; }
  void set_metaspaceObjectType(u1 value) { this->_metaspaceObjectType = value; }

  bool should_write(void) {
    return true;
  }


  EventMetaspaceOOM(EventStartTime timing=TIMED) : TraceEvent<EventMetaspaceOOM>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventMetaspaceChunkFreeListSummary : public TraceEvent<EventMetaspaceChunkFreeListSummary>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceMetaspaceChunkFreeListSummaryEvent;

 private:
  unsigned _gcId; 
  u1 _when; 
  u1 _metadataType; 
  u8 _specializedChunks; 
  u8 _specializedChunksTotalSize; 
  u8 _smallChunks; 
  u8 _smallChunksTotalSize; 
  u8 _mediumChunks; 
  u8 _mediumChunksTotalSize; 
  u8 _humongousChunks; 
  u8 _humongousChunksTotalSize;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Metaspace Chunk Free List Summary: [");
    ts.print_val("GC ID", _gcId);
    ts.print(", ");
    ts.print_val("When", _when);
    ts.print(", ");
    ts.print_val("Metadata Type", _metadataType);
    ts.print(", ");
    ts.print_val("Specialized Chunks", _specializedChunks);
    ts.print(", ");
    ts.print_val("Specialized Chunks Total Size", _specializedChunksTotalSize);
    ts.print(", ");
    ts.print_val("Small Chunks", _smallChunks);
    ts.print(", ");
    ts.print_val("Small Chunks Total Size", _smallChunksTotalSize);
    ts.print(", ");
    ts.print_val("Medium Chunks", _mediumChunks);
    ts.print(", ");
    ts.print_val("Medium Chunks Total Size", _mediumChunksTotalSize);
    ts.print(", ");
    ts.print_val("Humongous Chunks", _humongousChunks);
    ts.print(", ");
    ts.print_val("Humongous Chunks Total Size", _humongousChunksTotalSize);
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }
  void set_when(u1 value) { this->_when = value; }
  void set_metadataType(u1 value) { this->_metadataType = value; }
  void set_specializedChunks(u8 value) { this->_specializedChunks = value; }
  void set_specializedChunksTotalSize(u8 value) { this->_specializedChunksTotalSize = value; }
  void set_smallChunks(u8 value) { this->_smallChunks = value; }
  void set_smallChunksTotalSize(u8 value) { this->_smallChunksTotalSize = value; }
  void set_mediumChunks(u8 value) { this->_mediumChunks = value; }
  void set_mediumChunksTotalSize(u8 value) { this->_mediumChunksTotalSize = value; }
  void set_humongousChunks(u8 value) { this->_humongousChunks = value; }
  void set_humongousChunksTotalSize(u8 value) { this->_humongousChunksTotalSize = value; }

  bool should_write(void) {
    return true;
  }


  EventMetaspaceChunkFreeListSummary(EventStartTime timing=TIMED) : TraceEvent<EventMetaspaceChunkFreeListSummary>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventPSHeapSummary : public TraceEvent<EventPSHeapSummary>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TracePSHeapSummaryEvent;

 private:
  unsigned _gcId; 
  u1 _when; 
  TraceStructVirtualSpace _oldSpace;
  TraceStructObjectSpace _oldObjectSpace;
  TraceStructVirtualSpace _youngSpace;
  TraceStructObjectSpace _edenSpace;
  TraceStructObjectSpace _fromSpace;
  TraceStructObjectSpace _toSpace;


  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Parallel Scavenge Heap Summary: [");
    ts.print_val("GC ID", _gcId);
    ts.print(", ");
    ts.print_val("When", _when);
    ts.print(", ");
    _oldSpace.writeStruct(ts);
    ts.print(", ");
    _oldObjectSpace.writeStruct(ts);
    ts.print(", ");
    _youngSpace.writeStruct(ts);
    ts.print(", ");
    _edenSpace.writeStruct(ts);
    ts.print(", ");
    _fromSpace.writeStruct(ts);
    ts.print(", ");
    _toSpace.writeStruct(ts);
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }
  void set_when(u1 value) { this->_when = value; }
  void set_oldSpace(const TraceStructVirtualSpace& value) { this->_oldSpace = value; }
  void set_oldObjectSpace(const TraceStructObjectSpace& value) { this->_oldObjectSpace = value; }
  void set_youngSpace(const TraceStructVirtualSpace& value) { this->_youngSpace = value; }
  void set_edenSpace(const TraceStructObjectSpace& value) { this->_edenSpace = value; }
  void set_fromSpace(const TraceStructObjectSpace& value) { this->_fromSpace = value; }
  void set_toSpace(const TraceStructObjectSpace& value) { this->_toSpace = value; }

  bool should_write(void) {
    return true;
  }


  EventPSHeapSummary(EventStartTime timing=TIMED) : TraceEvent<EventPSHeapSummary>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventGCGarbageCollection : public TraceEvent<EventGCGarbageCollection>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = false;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceGCGarbageCollectionEvent;

 private:
  unsigned _gcId; 
  u1 _name; 
  u2 _cause; 
  Tickspan _sumOfPauses; 
  Tickspan _longestPause;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Garbage Collection: [");
    ts.print_val("GC ID", _gcId);
    ts.print(", ");
    ts.print_val("Name", _name);
    ts.print(", ");
    ts.print_val("Cause", _cause);
    ts.print(", ");
    ts.print_val("Sum of Pauses", _sumOfPauses.value());
    ts.print(", ");
    ts.print_val("Longest Pause", _longestPause.value());
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }
  void set_name(u1 value) { this->_name = value; }
  void set_cause(u2 value) { this->_cause = value; }

#if INCLUDE_TRACE
    void set_sumOfPauses(const Tickspan& time) { _sumOfPauses = time; }
#else
    void set_sumOfPauses(const Tickspan& ignore) {}
#endif

#if INCLUDE_TRACE
    void set_longestPause(const Tickspan& time) { _longestPause = time; }
#else
    void set_longestPause(const Tickspan& ignore) {}
#endif


  bool should_write(void) {
    return true;
  }


  EventGCGarbageCollection(EventStartTime timing=TIMED) : TraceEvent<EventGCGarbageCollection>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventGCParallelOld : public TraceEvent<EventGCParallelOld>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = false;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceGCParallelOldEvent;

 private:
  unsigned _gcId; 
  u8 _densePrefix;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Parallel Old Garbage Collection: [");
    ts.print_val("GC ID", _gcId);
    ts.print(", ");
    ts.print_val("Dense Prefix", _densePrefix);
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }
  void set_densePrefix(u8 value) { this->_densePrefix = value; }

  bool should_write(void) {
    return true;
  }


  EventGCParallelOld(EventStartTime timing=TIMED) : TraceEvent<EventGCParallelOld>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventGCYoungGarbageCollection : public TraceEvent<EventGCYoungGarbageCollection>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = false;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceGCYoungGarbageCollectionEvent;

 private:
  unsigned _gcId; 
  unsigned _tenuringThreshold;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Young Garbage Collection: [");
    ts.print_val("GC ID", _gcId);
    ts.print(", ");
    ts.print_val("Tenuring Threshold", _tenuringThreshold);
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }
  void set_tenuringThreshold(unsigned value) { this->_tenuringThreshold = value; }

  bool should_write(void) {
    return true;
  }


  EventGCYoungGarbageCollection(EventStartTime timing=TIMED) : TraceEvent<EventGCYoungGarbageCollection>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventGCOldGarbageCollection : public TraceEvent<EventGCOldGarbageCollection>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = false;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceGCOldGarbageCollectionEvent;

 private:
  unsigned _gcId;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Old Garbage Collection: [");
    ts.print_val("GC ID", _gcId);
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }

  bool should_write(void) {
    return true;
  }


  EventGCOldGarbageCollection(EventStartTime timing=TIMED) : TraceEvent<EventGCOldGarbageCollection>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventGCG1GarbageCollection : public TraceEvent<EventGCG1GarbageCollection>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = false;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceGCG1GarbageCollectionEvent;

 private:
  unsigned _gcId; 
  u1 _type;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("G1 Garbage Collection: [");
    ts.print_val("GC ID", _gcId);
    ts.print(", ");
    ts.print_val("Type", _type);
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }
  void set_type(u1 value) { this->_type = value; }

  bool should_write(void) {
    return true;
  }


  EventGCG1GarbageCollection(EventStartTime timing=TIMED) : TraceEvent<EventGCG1GarbageCollection>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventEvacuationInfo : public TraceEvent<EventEvacuationInfo>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceEvacuationInfoEvent;

 private:
  unsigned _gcId; 
  unsigned _cSetRegions; 
  u8 _cSetUsedBefore; 
  u8 _cSetUsedAfter; 
  unsigned _allocationRegions; 
  u8 _allocRegionsUsedBefore; 
  u8 _allocRegionsUsedAfter; 
  u8 _bytesCopied; 
  unsigned _regionsFreed;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Evacuation Information: [");
    ts.print_val("GC ID", _gcId);
    ts.print(", ");
    ts.print_val("Collection Set Regions", _cSetRegions);
    ts.print(", ");
    ts.print_val("Collection Set Before", _cSetUsedBefore);
    ts.print(", ");
    ts.print_val("Collection Set After", _cSetUsedAfter);
    ts.print(", ");
    ts.print_val("Allocation Regions", _allocationRegions);
    ts.print(", ");
    ts.print_val("Alloc Regions Before", _allocRegionsUsedBefore);
    ts.print(", ");
    ts.print_val("Alloc Regions After", _allocRegionsUsedAfter);
    ts.print(", ");
    ts.print_val("Bytes Copied", _bytesCopied);
    ts.print(", ");
    ts.print_val("Regions Freed", _regionsFreed);
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }
  void set_cSetRegions(unsigned value) { this->_cSetRegions = value; }
  void set_cSetUsedBefore(u8 value) { this->_cSetUsedBefore = value; }
  void set_cSetUsedAfter(u8 value) { this->_cSetUsedAfter = value; }
  void set_allocationRegions(unsigned value) { this->_allocationRegions = value; }
  void set_allocRegionsUsedBefore(u8 value) { this->_allocRegionsUsedBefore = value; }
  void set_allocRegionsUsedAfter(u8 value) { this->_allocRegionsUsedAfter = value; }
  void set_bytesCopied(u8 value) { this->_bytesCopied = value; }
  void set_regionsFreed(unsigned value) { this->_regionsFreed = value; }

  bool should_write(void) {
    return true;
  }


  EventEvacuationInfo(EventStartTime timing=TIMED) : TraceEvent<EventEvacuationInfo>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventGCReferenceStatistics : public TraceEvent<EventGCReferenceStatistics>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceGCReferenceStatisticsEvent;

 private:
  unsigned _gcId; 
  u1 _type; 
  u8 _count;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("GC Reference Statistics: [");
    ts.print_val("GC ID", _gcId);
    ts.print(", ");
    ts.print_val("Type", _type);
    ts.print(", ");
    ts.print_val("Total Count", _count);
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }
  void set_type(u1 value) { this->_type = value; }
  void set_count(u8 value) { this->_count = value; }

  bool should_write(void) {
    return true;
  }


  EventGCReferenceStatistics(EventStartTime timing=TIMED) : TraceEvent<EventGCReferenceStatistics>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventObjectCountAfterGC : public TraceEvent<EventObjectCountAfterGC>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceObjectCountAfterGCEvent;

 private:
  unsigned _gcId; 
  Klass * _class; 
  s8 _count; 
  u8 _totalSize;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Object Count after GC: [");
    ts.print_val("GC ID", _gcId);
    ts.print(", ");
    ts.print_val("Class", _class);
    ts.print(", ");
    ts.print_val("Count", _count);
    ts.print(", ");
    ts.print_val("Total Size", _totalSize);
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }
  void set_class(Klass * value) { this->_class = value; }
  void set_count(s8 value) { this->_count = value; }
  void set_totalSize(u8 value) { this->_totalSize = value; }

  bool should_write(void) {
    return true;
  }


  EventObjectCountAfterGC(EventStartTime timing=TIMED) : TraceEvent<EventObjectCountAfterGC>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventPromotionFailed : public TraceEvent<EventPromotionFailed>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TracePromotionFailedEvent;

 private:
  unsigned _gcId; 
  TraceStructCopyFailed _data;
  u4 _thread;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Promotion Failed: [");
    ts.print_val("GC ID", _gcId);
    ts.print(", ");
    _data.writeStruct(ts);
    ts.print(", ");
    ts.print_val("Running thread", _thread);
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }
  void set_data(const TraceStructCopyFailed& value) { this->_data = value; }
  void set_thread(u4 value) { this->_thread = value; }

  bool should_write(void) {
    return true;
  }


  EventPromotionFailed(EventStartTime timing=TIMED) : TraceEvent<EventPromotionFailed>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventEvacuationFailed : public TraceEvent<EventEvacuationFailed>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceEvacuationFailedEvent;

 private:
  unsigned _gcId; 
  TraceStructCopyFailed _data;


  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Evacuation Failed: [");
    ts.print_val("GC ID", _gcId);
    ts.print(", ");
    _data.writeStruct(ts);
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }
  void set_data(const TraceStructCopyFailed& value) { this->_data = value; }

  bool should_write(void) {
    return true;
  }


  EventEvacuationFailed(EventStartTime timing=TIMED) : TraceEvent<EventEvacuationFailed>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventConcurrentModeFailure : public TraceEvent<EventConcurrentModeFailure>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceConcurrentModeFailureEvent;

 private:
  unsigned _gcId;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Concurrent Mode Failure: [");
    ts.print_val("GC ID", _gcId);
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }

  bool should_write(void) {
    return true;
  }


  EventConcurrentModeFailure(EventStartTime timing=TIMED) : TraceEvent<EventConcurrentModeFailure>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventGCPhasePause : public TraceEvent<EventGCPhasePause>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = false;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceGCPhasePauseEvent;

 private:
  unsigned _gcId; 
  const char * _name;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("GC Phase Pause: [");
    ts.print_val("GC ID", _gcId);
    ts.print(", ");
    ts.print_val("Name", _name);
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }
  void set_name(const char * value) { this->_name = value; }

  bool should_write(void) {
    return true;
  }


  EventGCPhasePause(EventStartTime timing=TIMED) : TraceEvent<EventGCPhasePause>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventGCPhasePauseLevel1 : public TraceEvent<EventGCPhasePauseLevel1>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = false;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceGCPhasePauseLevel1Event;

 private:
  unsigned _gcId; 
  const char * _name;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("GC Phase Pause Level 1: [");
    ts.print_val("GC ID", _gcId);
    ts.print(", ");
    ts.print_val("Name", _name);
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }
  void set_name(const char * value) { this->_name = value; }

  bool should_write(void) {
    return true;
  }


  EventGCPhasePauseLevel1(EventStartTime timing=TIMED) : TraceEvent<EventGCPhasePauseLevel1>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventGCPhasePauseLevel2 : public TraceEvent<EventGCPhasePauseLevel2>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = false;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceGCPhasePauseLevel2Event;

 private:
  unsigned _gcId; 
  const char * _name;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("GC Phase Pause Level 2: [");
    ts.print_val("GC ID", _gcId);
    ts.print(", ");
    ts.print_val("Name", _name);
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }
  void set_name(const char * value) { this->_name = value; }

  bool should_write(void) {
    return true;
  }


  EventGCPhasePauseLevel2(EventStartTime timing=TIMED) : TraceEvent<EventGCPhasePauseLevel2>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventGCPhasePauseLevel3 : public TraceEvent<EventGCPhasePauseLevel3>
{
 public:
  static const bool hasThread = false;
  static const bool hasStackTrace = false;
  static const bool isInstant = false;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceGCPhasePauseLevel3Event;

 private:
  unsigned _gcId; 
  const char * _name;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("GC Phase Pause Level 3: [");
    ts.print_val("GC ID", _gcId);
    ts.print(", ");
    ts.print_val("Name", _name);
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }
  void set_name(const char * value) { this->_name = value; }

  bool should_write(void) {
    return true;
  }


  EventGCPhasePauseLevel3(EventStartTime timing=TIMED) : TraceEvent<EventGCPhasePauseLevel3>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventAllocationRequiringGC : public TraceEvent<EventAllocationRequiringGC>
{
 public:
  static const bool hasThread = true;
  static const bool hasStackTrace = true;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceAllocationRequiringGCEvent;

 private:
  unsigned _gcId; 
  u8 _size;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Allocation Requiring GC: [");
    ts.print_val("Pending GC ID", _gcId);
    ts.print(", ");
    ts.print_val("Allocation Size", _size);
    ts.print("]\n");
  }

 public:
  void set_gcId(unsigned value) { this->_gcId = value; }
  void set_size(u8 value) { this->_size = value; }

  bool should_write(void) {
    return true;
  }


  EventAllocationRequiringGC(EventStartTime timing=TIMED) : TraceEvent<EventAllocationRequiringGC>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventCompilation : public TraceEvent<EventCompilation>
{
 public:
  static const bool hasThread = true;
  static const bool hasStackTrace = false;
  static const bool isInstant = false;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceCompilationEvent;

 private:
  Method * _method; 
  unsigned _compileID; 
  u2 _compileLevel; 
  bool _succeded; 
  bool _isOsr; 
  u4 _codeSize; 
  u4 _inlinedBytes;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Compilation: [");
    ts.print_val("Java Method", _method);
    ts.print(", ");
    ts.print_val("Compilation ID", _compileID);
    ts.print(", ");
    ts.print_val("Compilation Level", _compileLevel);
    ts.print(", ");
    ts.print_val("Succeeded", _succeded);
    ts.print(", ");
    ts.print_val("On Stack Replacement", _isOsr);
    ts.print(", ");
    ts.print_val("Compiled Code Size", _codeSize);
    ts.print(", ");
    ts.print_val("Inlined Code Size", _inlinedBytes);
    ts.print("]\n");
  }

 public:
  void set_method(Method * value) { this->_method = value; }
  void set_compileID(unsigned value) { this->_compileID = value; }
  void set_compileLevel(u2 value) { this->_compileLevel = value; }
  void set_succeded(bool value) { this->_succeded = value; }
  void set_isOsr(bool value) { this->_isOsr = value; }
  void set_codeSize(u4 value) { this->_codeSize = value; }
  void set_inlinedBytes(u4 value) { this->_inlinedBytes = value; }

  bool should_write(void) {
    return true;
  }


  EventCompilation(EventStartTime timing=TIMED) : TraceEvent<EventCompilation>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventCompilerPhase : public TraceEvent<EventCompilerPhase>
{
 public:
  static const bool hasThread = true;
  static const bool hasStackTrace = false;
  static const bool isInstant = false;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceCompilerPhaseEvent;

 private:
  u1 _phase; 
  unsigned _compileID; 
  u2 _phaseLevel;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Compiler Phase: [");
    ts.print_val("Compile Phase", _phase);
    ts.print(", ");
    ts.print_val("Compilation ID", _compileID);
    ts.print(", ");
    ts.print_val("Phase Level", _phaseLevel);
    ts.print("]\n");
  }

 public:
  void set_phase(u1 value) { this->_phase = value; }
  void set_compileID(unsigned value) { this->_compileID = value; }
  void set_phaseLevel(u2 value) { this->_phaseLevel = value; }

  bool should_write(void) {
    return true;
  }


  EventCompilerPhase(EventStartTime timing=TIMED) : TraceEvent<EventCompilerPhase>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventCompilerFailure : public TraceEvent<EventCompilerFailure>
{
 public:
  static const bool hasThread = true;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceCompilerFailureEvent;

 private:
  const char * _failure; 
  unsigned _compileID;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Compilation Failure: [");
    ts.print_val("Message", _failure);
    ts.print(", ");
    ts.print_val("Compilation ID", _compileID);
    ts.print("]\n");
  }

 public:
  void set_failure(const char * value) { this->_failure = value; }
  void set_compileID(unsigned value) { this->_compileID = value; }

  bool should_write(void) {
    return true;
  }


  EventCompilerFailure(EventStartTime timing=TIMED) : TraceEvent<EventCompilerFailure>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventSweepCodeCache : public TraceEvent<EventSweepCodeCache>
{
 public:
  static const bool hasThread = true;
  static const bool hasStackTrace = false;
  static const bool isInstant = false;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceSweepCodeCacheEvent;

 private:
  s4 _sweepIndex; 
  u2 _sweepFractionIndex; 
  unsigned _sweptCount; 
  unsigned _flushedCount; 
  unsigned _markedCount; 
  unsigned _zombifiedCount;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Sweep Code Cache: [");
    ts.print_val("Sweep Index", _sweepIndex);
    ts.print(", ");
    ts.print_val("Fraction Index", _sweepFractionIndex);
    ts.print(", ");
    ts.print_val("Methods Swept", _sweptCount);
    ts.print(", ");
    ts.print_val("Methods Flushed", _flushedCount);
    ts.print(", ");
    ts.print_val("Methods Reclaimed", _markedCount);
    ts.print(", ");
    ts.print_val("Methods Zombified", _zombifiedCount);
    ts.print("]\n");
  }

 public:
  void set_sweepIndex(s4 value) { this->_sweepIndex = value; }
  void set_sweepFractionIndex(u2 value) { this->_sweepFractionIndex = value; }
  void set_sweptCount(unsigned value) { this->_sweptCount = value; }
  void set_flushedCount(unsigned value) { this->_flushedCount = value; }
  void set_markedCount(unsigned value) { this->_markedCount = value; }
  void set_zombifiedCount(unsigned value) { this->_zombifiedCount = value; }

  bool should_write(void) {
    return true;
  }


  EventSweepCodeCache(EventStartTime timing=TIMED) : TraceEvent<EventSweepCodeCache>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventCodeCacheFull : public TraceEvent<EventCodeCacheFull>
{
 public:
  static const bool hasThread = true;
  static const bool hasStackTrace = false;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceCodeCacheFullEvent;

 private:
  u8 _startAddress; 
  u8 _commitedTopAddress; 
  u8 _reservedTopAddress; 
  s4 _entryCount; 
  s4 _methodCount; 
  s4 _adaptorCount; 
  u8 _unallocatedCapacity; 
  s4 _fullCount;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Code Cache Full: [");
    ts.print_val("Start Address", _startAddress);
    ts.print(", ");
    ts.print_val("Commited Top", _commitedTopAddress);
    ts.print(", ");
    ts.print_val("Reserved Top", _reservedTopAddress);
    ts.print(", ");
    ts.print_val("Entries", _entryCount);
    ts.print(", ");
    ts.print_val("Methods", _methodCount);
    ts.print(", ");
    ts.print_val("Adaptors", _adaptorCount);
    ts.print(", ");
    ts.print_val("Unallocated", _unallocatedCapacity);
    ts.print(", ");
    ts.print_val("Full Count", _fullCount);
    ts.print("]\n");
  }

 public:
  void set_startAddress(u8 value) { this->_startAddress = value; }
  void set_commitedTopAddress(u8 value) { this->_commitedTopAddress = value; }
  void set_reservedTopAddress(u8 value) { this->_reservedTopAddress = value; }
  void set_entryCount(s4 value) { this->_entryCount = value; }
  void set_methodCount(s4 value) { this->_methodCount = value; }
  void set_adaptorCount(s4 value) { this->_adaptorCount = value; }
  void set_unallocatedCapacity(u8 value) { this->_unallocatedCapacity = value; }
  void set_fullCount(s4 value) { this->_fullCount = value; }

  bool should_write(void) {
    return true;
  }


  EventCodeCacheFull(EventStartTime timing=TIMED) : TraceEvent<EventCodeCacheFull>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventExecuteVMOperation : public TraceEvent<EventExecuteVMOperation>
{
 public:
  static const bool hasThread = true;
  static const bool hasStackTrace = false;
  static const bool isInstant = false;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceExecuteVMOperationEvent;

 private:
  u2 _operation; 
  bool _safepoint; 
  bool _blocking; 
  u4 _caller;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("VM Operation: [");
    ts.print_val("Operation", _operation);
    ts.print(", ");
    ts.print_val("At Safepoint", _safepoint);
    ts.print(", ");
    ts.print_val("Caller Blocked", _blocking);
    ts.print(", ");
    ts.print_val("Caller", _caller);
    ts.print("]\n");
  }

 public:
  void set_operation(u2 value) { this->_operation = value; }
  void set_safepoint(bool value) { this->_safepoint = value; }
  void set_blocking(bool value) { this->_blocking = value; }
  void set_caller(u4 value) { this->_caller = value; }

  bool should_write(void) {
    return true;
  }


  EventExecuteVMOperation(EventStartTime timing=TIMED) : TraceEvent<EventExecuteVMOperation>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventAllocObjectInNewTLAB : public TraceEvent<EventAllocObjectInNewTLAB>
{
 public:
  static const bool hasThread = true;
  static const bool hasStackTrace = true;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceAllocObjectInNewTLABEvent;

 private:
  Klass * _class; 
  u8 _allocationSize; 
  u8 _tlabSize;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Allocation in new TLAB: [");
    ts.print_val("Class", _class);
    ts.print(", ");
    ts.print_val("Allocation Size", _allocationSize);
    ts.print(", ");
    ts.print_val("TLAB Size", _tlabSize);
    ts.print("]\n");
  }

 public:
  void set_class(Klass * value) { this->_class = value; }
  void set_allocationSize(u8 value) { this->_allocationSize = value; }
  void set_tlabSize(u8 value) { this->_tlabSize = value; }

  bool should_write(void) {
    return true;
  }


  EventAllocObjectInNewTLAB(EventStartTime timing=TIMED) : TraceEvent<EventAllocObjectInNewTLAB>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};

class EventAllocObjectOutsideTLAB : public TraceEvent<EventAllocObjectOutsideTLAB>
{
 public:
  static const bool hasThread = true;
  static const bool hasStackTrace = true;
  static const bool isInstant = true;
  static const bool isRequestable = false;
  static const TraceEventId eventId = TraceAllocObjectOutsideTLABEvent;

 private:
  Klass * _class; 
  u8 _allocationSize;

  void writeEventContent(void) {
    TraceStream ts(*tty);
    ts.print("Allocation outside TLAB: [");
    ts.print_val("Class", _class);
    ts.print(", ");
    ts.print_val("Allocation Size", _allocationSize);
    ts.print("]\n");
  }

 public:
  void set_class(Klass * value) { this->_class = value; }
  void set_allocationSize(u8 value) { this->_allocationSize = value; }

  bool should_write(void) {
    return true;
  }


  EventAllocObjectOutsideTLAB(EventStartTime timing=TIMED) : TraceEvent<EventAllocObjectOutsideTLAB>(timing) {}

  void writeEvent(void) {
    ResourceMark rm;
    if (UseLockedTracing) {
      ttyLocker lock;
      writeEventContent();
    } else {
      writeEventContent();
    }
  }
};



#else // !INCLUDE_TRACE

class TraceEvent {
public:
  TraceEvent() {}
  void set_starttime(const Ticks& time) {}
  void set_endtime(const Ticks& time) {}
  bool should_commit() const { return false; }
  void commit() const {}
};

  
struct TraceStructVirtualSpace 
{
public:
  void set_start(u8 value) { }
  void set_committedEnd(u8 value) { }
  void set_committedSize(u8 value) { }
  void set_reservedEnd(u8 value) { }
  void set_reservedSize(u8 value) { }
};

struct TraceStructObjectSpace 
{
public:
  void set_start(u8 value) { }
  void set_end(u8 value) { }
  void set_used(u8 value) { }
  void set_size(u8 value) { }
};

struct TraceStructMetaspaceSizes 
{
public:
  void set_committed(u8 value) { }
  void set_used(u8 value) { }
  void set_reserved(u8 value) { }
};

struct TraceStructCopyFailed 
{
public:
  void set_objectCount(u8 value) { }
  void set_firstSize(u8 value) { }
  void set_smallestSize(u8 value) { }
  void set_totalSize(u8 value) { }
};
class EventThreadStart : public TraceEvent
{
 public:
  EventThreadStart(bool ignore=true) {}
  void set_javalangthread(s8 value) { }
};

class EventThreadEnd : public TraceEvent
{
 public:
  EventThreadEnd(bool ignore=true) {}
  void set_javalangthread(s8 value) { }
};

class EventThreadSleep : public TraceEvent
{
 public:
  EventThreadSleep(bool ignore=true) {}
  void set_time(s8 value) { }
};

class EventThreadPark : public TraceEvent
{
 public:
  EventThreadPark(bool ignore=true) {}
  void set_klass(Klass * value) { }
  void set_timeout(s8 value) { }
  void set_address(u8 value) { }
};

class EventJavaMonitorEnter : public TraceEvent
{
 public:
  EventJavaMonitorEnter(bool ignore=true) {}
  void set_klass(Klass * value) { }
  void set_previousOwner(s8 value) { }
  void set_address(u8 value) { }
};

class EventJavaMonitorWait : public TraceEvent
{
 public:
  EventJavaMonitorWait(bool ignore=true) {}
  void set_klass(Klass * value) { }
  void set_notifier(u4 value) { }
  void set_timeout(s8 value) { }
  void set_timedOut(bool value) { }
  void set_address(u8 value) { }
};

class EventClassLoad : public TraceEvent
{
 public:
  EventClassLoad(bool ignore=true) {}
  void set_loadedClass(Klass * value) { }
  void set_definingClassLoader(Klass * value) { }
  void set_initiatingClassLoader(Klass * value) { }
};

class EventClassUnload : public TraceEvent
{
 public:
  EventClassUnload(bool ignore=true) {}
  void set_unloadedClass(Klass * value) { }
  void set_definingClassLoader(Klass * value) { }
};

class EventLongFlagChanged : public TraceEvent
{
 public:
  EventLongFlagChanged(bool ignore=true) {}
  void set_name(const char * value) { }
  void set_old_value(s8 value) { }
  void set_new_value(s8 value) { }
  void set_origin(u1 value) { }
};

class EventUnsignedLongFlagChanged : public TraceEvent
{
 public:
  EventUnsignedLongFlagChanged(bool ignore=true) {}
  void set_name(const char * value) { }
  void set_old_value(u8 value) { }
  void set_new_value(u8 value) { }
  void set_origin(u1 value) { }
};

class EventDoubleFlagChanged : public TraceEvent
{
 public:
  EventDoubleFlagChanged(bool ignore=true) {}
  void set_name(const char * value) { }
  void set_old_value(double value) { }
  void set_new_value(double value) { }
  void set_origin(u1 value) { }
};

class EventBooleanFlagChanged : public TraceEvent
{
 public:
  EventBooleanFlagChanged(bool ignore=true) {}
  void set_name(const char * value) { }
  void set_old_value(bool value) { }
  void set_new_value(bool value) { }
  void set_origin(u1 value) { }
};

class EventStringFlagChanged : public TraceEvent
{
 public:
  EventStringFlagChanged(bool ignore=true) {}
  void set_name(const char * value) { }
  void set_old_value(const char * value) { }
  void set_new_value(const char * value) { }
  void set_origin(u1 value) { }
};

class EventGCHeapSummary : public TraceEvent
{
 public:
  EventGCHeapSummary(bool ignore=true) {}
  void set_gcId(unsigned value) { }
  void set_when(u1 value) { }
  void set_heapSpace(const TraceStructVirtualSpace& value) { }
  void set_heapUsed(u8 value) { }
};

class EventMetaspaceSummary : public TraceEvent
{
 public:
  EventMetaspaceSummary(bool ignore=true) {}
  void set_gcId(unsigned value) { }
  void set_when(u1 value) { }
  void set_gcThreshold(u8 value) { }
  void set_metaspace(const TraceStructMetaspaceSizes& value) { }
  void set_dataSpace(const TraceStructMetaspaceSizes& value) { }
  void set_classSpace(const TraceStructMetaspaceSizes& value) { }
};

class EventMetaspaceGCThreshold : public TraceEvent
{
 public:
  EventMetaspaceGCThreshold(bool ignore=true) {}
  void set_oldValue(u8 value) { }
  void set_newValue(u8 value) { }
  void set_updater(u1 value) { }
};

class EventMetaspaceAllocationFailure : public TraceEvent
{
 public:
  EventMetaspaceAllocationFailure(bool ignore=true) {}
  void set_classLoader(Klass * value) { }
  void set_anonymousClassLoader(bool value) { }
  void set_size(u8 value) { }
  void set_metadataType(u1 value) { }
  void set_metaspaceObjectType(u1 value) { }
};

class EventMetaspaceOOM : public TraceEvent
{
 public:
  EventMetaspaceOOM(bool ignore=true) {}
  void set_classLoader(Klass * value) { }
  void set_anonymousClassLoader(bool value) { }
  void set_size(u8 value) { }
  void set_metadataType(u1 value) { }
  void set_metaspaceObjectType(u1 value) { }
};

class EventMetaspaceChunkFreeListSummary : public TraceEvent
{
 public:
  EventMetaspaceChunkFreeListSummary(bool ignore=true) {}
  void set_gcId(unsigned value) { }
  void set_when(u1 value) { }
  void set_metadataType(u1 value) { }
  void set_specializedChunks(u8 value) { }
  void set_specializedChunksTotalSize(u8 value) { }
  void set_smallChunks(u8 value) { }
  void set_smallChunksTotalSize(u8 value) { }
  void set_mediumChunks(u8 value) { }
  void set_mediumChunksTotalSize(u8 value) { }
  void set_humongousChunks(u8 value) { }
  void set_humongousChunksTotalSize(u8 value) { }
};

class EventPSHeapSummary : public TraceEvent
{
 public:
  EventPSHeapSummary(bool ignore=true) {}
  void set_gcId(unsigned value) { }
  void set_when(u1 value) { }
  void set_oldSpace(const TraceStructVirtualSpace& value) { }
  void set_oldObjectSpace(const TraceStructObjectSpace& value) { }
  void set_youngSpace(const TraceStructVirtualSpace& value) { }
  void set_edenSpace(const TraceStructObjectSpace& value) { }
  void set_fromSpace(const TraceStructObjectSpace& value) { }
  void set_toSpace(const TraceStructObjectSpace& value) { }
};

class EventGCGarbageCollection : public TraceEvent
{
 public:
  EventGCGarbageCollection(bool ignore=true) {}
  void set_gcId(unsigned value) { }
  void set_name(u1 value) { }
  void set_cause(u2 value) { }
  void set_sumOfPauses(Tickspan value) { }
  void set_longestPause(Tickspan value) { }
};

class EventGCParallelOld : public TraceEvent
{
 public:
  EventGCParallelOld(bool ignore=true) {}
  void set_gcId(unsigned value) { }
  void set_densePrefix(u8 value) { }
};

class EventGCYoungGarbageCollection : public TraceEvent
{
 public:
  EventGCYoungGarbageCollection(bool ignore=true) {}
  void set_gcId(unsigned value) { }
  void set_tenuringThreshold(unsigned value) { }
};

class EventGCOldGarbageCollection : public TraceEvent
{
 public:
  EventGCOldGarbageCollection(bool ignore=true) {}
  void set_gcId(unsigned value) { }
};

class EventGCG1GarbageCollection : public TraceEvent
{
 public:
  EventGCG1GarbageCollection(bool ignore=true) {}
  void set_gcId(unsigned value) { }
  void set_type(u1 value) { }
};

class EventEvacuationInfo : public TraceEvent
{
 public:
  EventEvacuationInfo(bool ignore=true) {}
  void set_gcId(unsigned value) { }
  void set_cSetRegions(unsigned value) { }
  void set_cSetUsedBefore(u8 value) { }
  void set_cSetUsedAfter(u8 value) { }
  void set_allocationRegions(unsigned value) { }
  void set_allocRegionsUsedBefore(u8 value) { }
  void set_allocRegionsUsedAfter(u8 value) { }
  void set_bytesCopied(u8 value) { }
  void set_regionsFreed(unsigned value) { }
};

class EventGCReferenceStatistics : public TraceEvent
{
 public:
  EventGCReferenceStatistics(bool ignore=true) {}
  void set_gcId(unsigned value) { }
  void set_type(u1 value) { }
  void set_count(u8 value) { }
};

class EventObjectCountAfterGC : public TraceEvent
{
 public:
  EventObjectCountAfterGC(bool ignore=true) {}
  void set_gcId(unsigned value) { }
  void set_class(Klass * value) { }
  void set_count(s8 value) { }
  void set_totalSize(u8 value) { }
};

class EventPromotionFailed : public TraceEvent
{
 public:
  EventPromotionFailed(bool ignore=true) {}
  void set_gcId(unsigned value) { }
  void set_data(const TraceStructCopyFailed& value) { }
  void set_thread(u4 value) { }
};

class EventEvacuationFailed : public TraceEvent
{
 public:
  EventEvacuationFailed(bool ignore=true) {}
  void set_gcId(unsigned value) { }
  void set_data(const TraceStructCopyFailed& value) { }
};

class EventConcurrentModeFailure : public TraceEvent
{
 public:
  EventConcurrentModeFailure(bool ignore=true) {}
  void set_gcId(unsigned value) { }
};

class EventGCPhasePause : public TraceEvent
{
 public:
  EventGCPhasePause(bool ignore=true) {}
  void set_gcId(unsigned value) { }
  void set_name(const char * value) { }
};

class EventGCPhasePauseLevel1 : public TraceEvent
{
 public:
  EventGCPhasePauseLevel1(bool ignore=true) {}
  void set_gcId(unsigned value) { }
  void set_name(const char * value) { }
};

class EventGCPhasePauseLevel2 : public TraceEvent
{
 public:
  EventGCPhasePauseLevel2(bool ignore=true) {}
  void set_gcId(unsigned value) { }
  void set_name(const char * value) { }
};

class EventGCPhasePauseLevel3 : public TraceEvent
{
 public:
  EventGCPhasePauseLevel3(bool ignore=true) {}
  void set_gcId(unsigned value) { }
  void set_name(const char * value) { }
};

class EventAllocationRequiringGC : public TraceEvent
{
 public:
  EventAllocationRequiringGC(bool ignore=true) {}
  void set_gcId(unsigned value) { }
  void set_size(u8 value) { }
};

class EventCompilation : public TraceEvent
{
 public:
  EventCompilation(bool ignore=true) {}
  void set_method(Method * value) { }
  void set_compileID(unsigned value) { }
  void set_compileLevel(u2 value) { }
  void set_succeded(bool value) { }
  void set_isOsr(bool value) { }
  void set_codeSize(u4 value) { }
  void set_inlinedBytes(u4 value) { }
};

class EventCompilerPhase : public TraceEvent
{
 public:
  EventCompilerPhase(bool ignore=true) {}
  void set_phase(u1 value) { }
  void set_compileID(unsigned value) { }
  void set_phaseLevel(u2 value) { }
};

class EventCompilerFailure : public TraceEvent
{
 public:
  EventCompilerFailure(bool ignore=true) {}
  void set_failure(const char * value) { }
  void set_compileID(unsigned value) { }
};

class EventSweepCodeCache : public TraceEvent
{
 public:
  EventSweepCodeCache(bool ignore=true) {}
  void set_sweepIndex(s4 value) { }
  void set_sweepFractionIndex(u2 value) { }
  void set_sweptCount(unsigned value) { }
  void set_flushedCount(unsigned value) { }
  void set_markedCount(unsigned value) { }
  void set_zombifiedCount(unsigned value) { }
};

class EventCodeCacheFull : public TraceEvent
{
 public:
  EventCodeCacheFull(bool ignore=true) {}
  void set_startAddress(u8 value) { }
  void set_commitedTopAddress(u8 value) { }
  void set_reservedTopAddress(u8 value) { }
  void set_entryCount(s4 value) { }
  void set_methodCount(s4 value) { }
  void set_adaptorCount(s4 value) { }
  void set_unallocatedCapacity(u8 value) { }
  void set_fullCount(s4 value) { }
};

class EventExecuteVMOperation : public TraceEvent
{
 public:
  EventExecuteVMOperation(bool ignore=true) {}
  void set_operation(u2 value) { }
  void set_safepoint(bool value) { }
  void set_blocking(bool value) { }
  void set_caller(u4 value) { }
};

class EventAllocObjectInNewTLAB : public TraceEvent
{
 public:
  EventAllocObjectInNewTLAB(bool ignore=true) {}
  void set_class(Klass * value) { }
  void set_allocationSize(u8 value) { }
  void set_tlabSize(u8 value) { }
};

class EventAllocObjectOutsideTLAB : public TraceEvent
{
 public:
  EventAllocObjectOutsideTLAB(bool ignore=true) {}
  void set_class(Klass * value) { }
  void set_allocationSize(u8 value) { }
};



#endif // INCLUDE_TRACE
#endif // TRACEFILES_TRACEEVENTCLASSES_HPP
