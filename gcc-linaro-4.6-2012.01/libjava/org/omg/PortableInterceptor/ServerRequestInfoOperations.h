
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __org_omg_PortableInterceptor_ServerRequestInfoOperations__
#define __org_omg_PortableInterceptor_ServerRequestInfoOperations__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace org
  {
    namespace omg
    {
      namespace CORBA
      {
          class Any;
          class Object;
          class Policy;
          class TypeCode;
      }
      namespace Dynamic
      {
          class Parameter;
      }
      namespace IOP
      {
          class ServiceContext;
      }
      namespace PortableInterceptor
      {
          class ServerRequestInfoOperations;
      }
    }
  }
}

class org::omg::PortableInterceptor::ServerRequestInfoOperations : public ::java::lang::Object
{

public:
  virtual void add_reply_service_context(::org::omg::IOP::ServiceContext *, jboolean) = 0;
  virtual JArray< jbyte > * adapter_id() = 0;
  virtual JArray< jbyte > * object_id() = 0;
  virtual ::org::omg::CORBA::Policy * get_server_policy(jint) = 0;
  virtual ::org::omg::CORBA::Any * sending_exception() = 0;
  virtual void set_slot(jint, ::org::omg::CORBA::Any *) = 0;
  virtual jboolean target_is_a(::java::lang::String *) = 0;
  virtual ::java::lang::String * target_most_derived_interface() = 0;
  virtual JArray< ::java::lang::String * > * adapter_name() = 0;
  virtual ::java::lang::String * orb_id() = 0;
  virtual ::java::lang::String * server_id() = 0;
  virtual JArray< ::org::omg::Dynamic::Parameter * > * arguments() = 0;
  virtual JArray< ::java::lang::String * > * contexts() = 0;
  virtual JArray< ::org::omg::CORBA::TypeCode * > * exceptions() = 0;
  virtual ::org::omg::CORBA::Object * forward_reference() = 0;
  virtual ::org::omg::IOP::ServiceContext * get_reply_service_context(jint) = 0;
  virtual ::org::omg::IOP::ServiceContext * get_request_service_context(jint) = 0;
  virtual ::org::omg::CORBA::Any * get_slot(jint) = 0;
  virtual JArray< ::java::lang::String * > * operation_context() = 0;
  virtual ::java::lang::String * operation() = 0;
  virtual jshort reply_status() = 0;
  virtual jint request_id() = 0;
  virtual jboolean response_expected() = 0;
  virtual ::org::omg::CORBA::Any * result() = 0;
  virtual jshort sync_scope() = 0;
  static ::java::lang::Class class$;
} __attribute__ ((java_interface));

#endif // __org_omg_PortableInterceptor_ServerRequestInfoOperations__