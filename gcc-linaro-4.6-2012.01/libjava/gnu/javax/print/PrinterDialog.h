
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_print_PrinterDialog__
#define __gnu_javax_print_PrinterDialog__

#pragma interface

#include <javax/swing/JDialog.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace print
      {
          class PrinterDialog;
          class PrinterDialog$AppearancePanel;
          class PrinterDialog$GeneralPanel;
          class PrinterDialog$PageSetupPanel;
      }
    }
  }
  namespace java
  {
    namespace awt
    {
        class GraphicsConfiguration;
      namespace event
      {
          class ActionEvent;
      }
    }
  }
  namespace javax
  {
    namespace print
    {
        class DocFlavor;
        class PrintService;
      namespace attribute
      {
          class Attribute;
          class PrintRequestAttributeSet;
      }
    }
    namespace swing
    {
        class JButton;
    }
  }
}

class gnu::javax::print::PrinterDialog : public ::javax::swing::JDialog
{

  PrinterDialog(::java::awt::GraphicsConfiguration *, JArray< ::javax::print::PrintService * > *, ::javax::print::PrintService *, ::javax::print::DocFlavor *, ::javax::print::attribute::PrintRequestAttributeSet *, jboolean, ::java::lang::String *);
public:
  PrinterDialog(::java::awt::GraphicsConfiguration *, ::javax::print::PrintService *, ::javax::print::DocFlavor *, ::javax::print::attribute::PrintRequestAttributeSet *);
  PrinterDialog(::java::awt::GraphicsConfiguration *, JArray< ::javax::print::PrintService * > *, ::javax::print::PrintService *, ::javax::print::DocFlavor *, ::javax::print::attribute::PrintRequestAttributeSet *);
private:
  void initUI(jboolean);
public:
  ::javax::print::attribute::PrintRequestAttributeSet * getAttributes();
  ::javax::print::PrintService * getSelectedPrintService();
public: // actually protected
  void setSelectedPrintService(::javax::print::PrintService *);
  JArray< ::javax::print::PrintService * > * getPrintServices();
public: // actually package-private
  void updateAll();
  jboolean categorySupported(::java::lang::Class *);
  ::java::lang::Object * defaultValue(::java::lang::Class *);
  ::javax::print::attribute::Attribute * attribute(::java::lang::Class *);
public:
  void actionPerformed(::java::awt::event::ActionEvent *);
public: // actually package-private
  static ::java::lang::String * getLocalizedString(::java::lang::String *);
  static ::javax::print::attribute::PrintRequestAttributeSet * access$0(::gnu::javax::print::PrinterDialog *);
  static ::javax::print::DocFlavor * access$1(::gnu::javax::print::PrinterDialog *);
private:
  ::javax::swing::JButton * __attribute__((aligned(__alignof__( ::javax::swing::JDialog)))) ok_bt;
  ::javax::swing::JButton * cancel_bt;
  ::gnu::javax::print::PrinterDialog$GeneralPanel * general_panel;
  ::gnu::javax::print::PrinterDialog$PageSetupPanel * pagesetup_panel;
  ::gnu::javax::print::PrinterDialog$AppearancePanel * appearance_panel;
  JArray< ::javax::print::PrintService * > * services;
  ::javax::print::PrintService * defaultService;
  ::javax::print::PrintService * selectedService;
  ::javax::print::DocFlavor * flavor;
  ::javax::print::attribute::PrintRequestAttributeSet * attributes;
  jboolean onlyPageDialog;
  ::javax::print::attribute::PrintRequestAttributeSet * atts;
  static ::java::util::ResourceBundle * messages;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_print_PrinterDialog__
