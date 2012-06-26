
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_crypto_key_dh_GnuDHKey__
#define __gnu_javax_crypto_key_dh_GnuDHKey__

#pragma interface

#include <java/lang/Object.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace crypto
      {
        namespace key
        {
          namespace dh
          {
              class GnuDHKey;
          }
        }
      }
    }
  }
  namespace java
  {
    namespace math
    {
        class BigInteger;
    }
  }
  namespace javax
  {
    namespace crypto
    {
      namespace spec
      {
          class DHParameterSpec;
      }
    }
  }
}

class gnu::javax::crypto::key::dh::GnuDHKey : public ::java::lang::Object
{

public: // actually protected
  GnuDHKey(jint, ::java::math::BigInteger *, ::java::math::BigInteger *, ::java::math::BigInteger *);
public:
  virtual ::javax::crypto::spec::DHParameterSpec * getParams();
  virtual ::java::lang::String * getAlgorithm();
  virtual JArray< jbyte > * getEncoded();
  virtual ::java::lang::String * getFormat();
  virtual ::java::math::BigInteger * getQ();
  virtual jboolean equals(::java::lang::Object *);
  virtual ::java::lang::String * toString();
  virtual JArray< jbyte > * getEncoded(jint) = 0;
public: // actually protected
  ::java::math::BigInteger * __attribute__((aligned(__alignof__( ::java::lang::Object)))) q;
  ::java::math::BigInteger * p;
  ::java::math::BigInteger * g;
  jint defaultFormat;
private:
  ::java::lang::String * str;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_crypto_key_dh_GnuDHKey__
