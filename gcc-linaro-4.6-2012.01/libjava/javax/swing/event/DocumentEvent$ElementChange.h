
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __javax_swing_event_DocumentEvent$ElementChange__
#define __javax_swing_event_DocumentEvent$ElementChange__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace javax
  {
    namespace swing
    {
      namespace event
      {
          class DocumentEvent$ElementChange;
      }
      namespace text
      {
          class Element;
      }
    }
  }
}

class javax::swing::event::DocumentEvent$ElementChange : public ::java::lang::Object
{

public:
  virtual jint getIndex() = 0;
  virtual ::javax::swing::text::Element * getElement() = 0;
  virtual JArray< ::javax::swing::text::Element * > * getChildrenRemoved() = 0;
  virtual JArray< ::javax::swing::text::Element * > * getChildrenAdded() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __javax_swing_event_DocumentEvent$ElementChange__
