// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: gps_trajectory.proto

#ifndef PROTOBUF_gps_5ftrajectory_2eproto__INCLUDED
#define PROTOBUF_gps_5ftrajectory_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2005000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2005000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_gps_5ftrajectory_2eproto();
void protobuf_AssignDesc_gps_5ftrajectory_2eproto();
void protobuf_ShutdownFile_gps_5ftrajectory_2eproto();

class GpsTraj;
class TrajPoint;

// ===================================================================

class GpsTraj : public ::google::protobuf::Message {
 public:
  GpsTraj();
  virtual ~GpsTraj();

  GpsTraj(const GpsTraj& from);

  inline GpsTraj& operator=(const GpsTraj& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const GpsTraj& default_instance();

  void Swap(GpsTraj* other);

  // implements Message ----------------------------------------------

  GpsTraj* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const GpsTraj& from);
  void MergeFrom(const GpsTraj& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // repeated .TrajPoint point = 1;
  inline int point_size() const;
  inline void clear_point();
  static const int kPointFieldNumber = 1;
  inline const ::TrajPoint& point(int index) const;
  inline ::TrajPoint* mutable_point(int index);
  inline ::TrajPoint* add_point();
  inline const ::google::protobuf::RepeatedPtrField< ::TrajPoint >&
      point() const;
  inline ::google::protobuf::RepeatedPtrField< ::TrajPoint >*
      mutable_point();

  // @@protoc_insertion_point(class_scope:GpsTraj)
 private:

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::RepeatedPtrField< ::TrajPoint > point_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(1 + 31) / 32];

  friend void  protobuf_AddDesc_gps_5ftrajectory_2eproto();
  friend void protobuf_AssignDesc_gps_5ftrajectory_2eproto();
  friend void protobuf_ShutdownFile_gps_5ftrajectory_2eproto();

  void InitAsDefaultInstance();
  static GpsTraj* default_instance_;
};
// -------------------------------------------------------------------

class TrajPoint : public ::google::protobuf::Message {
 public:
  TrajPoint();
  virtual ~TrajPoint();

  TrajPoint(const TrajPoint& from);

  inline TrajPoint& operator=(const TrajPoint& from) {
    CopyFrom(from);
    return *this;
  }

  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }

  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const TrajPoint& default_instance();

  void Swap(TrajPoint* other);

  // implements Message ----------------------------------------------

  TrajPoint* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const TrajPoint& from);
  void MergeFrom(const TrajPoint& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // required int32 car_id = 1;
  inline bool has_car_id() const;
  inline void clear_car_id();
  static const int kCarIdFieldNumber = 1;
  inline ::google::protobuf::int32 car_id() const;
  inline void set_car_id(::google::protobuf::int32 value);

  // required uint32 timestamp = 2;
  inline bool has_timestamp() const;
  inline void clear_timestamp();
  static const int kTimestampFieldNumber = 2;
  inline ::google::protobuf::uint32 timestamp() const;
  inline void set_timestamp(::google::protobuf::uint32 value);

  // required int32 lon = 3;
  inline bool has_lon() const;
  inline void clear_lon();
  static const int kLonFieldNumber = 3;
  inline ::google::protobuf::int32 lon() const;
  inline void set_lon(::google::protobuf::int32 value);

  // required int32 lat = 4;
  inline bool has_lat() const;
  inline void clear_lat();
  static const int kLatFieldNumber = 4;
  inline ::google::protobuf::int32 lat() const;
  inline void set_lat(::google::protobuf::int32 value);

  // required int32 head = 5;
  inline bool has_head() const;
  inline void clear_head();
  static const int kHeadFieldNumber = 5;
  inline ::google::protobuf::int32 head() const;
  inline void set_head(::google::protobuf::int32 value);

  // required int32 speed = 6;
  inline bool has_speed() const;
  inline void clear_speed();
  static const int kSpeedFieldNumber = 6;
  inline ::google::protobuf::int32 speed() const;
  inline void set_speed(::google::protobuf::int32 value);

  // required float x = 7;
  inline bool has_x() const;
  inline void clear_x();
  static const int kXFieldNumber = 7;
  inline float x() const;
  inline void set_x(float value);

  // required float y = 8;
  inline bool has_y() const;
  inline void clear_y();
  static const int kYFieldNumber = 8;
  inline float y() const;
  inline void set_y(float value);

  // @@protoc_insertion_point(class_scope:TrajPoint)
 private:
  inline void set_has_car_id();
  inline void clear_has_car_id();
  inline void set_has_timestamp();
  inline void clear_has_timestamp();
  inline void set_has_lon();
  inline void clear_has_lon();
  inline void set_has_lat();
  inline void clear_has_lat();
  inline void set_has_head();
  inline void clear_has_head();
  inline void set_has_speed();
  inline void clear_has_speed();
  inline void set_has_x();
  inline void clear_has_x();
  inline void set_has_y();
  inline void clear_has_y();

  ::google::protobuf::UnknownFieldSet _unknown_fields_;

  ::google::protobuf::int32 car_id_;
  ::google::protobuf::uint32 timestamp_;
  ::google::protobuf::int32 lon_;
  ::google::protobuf::int32 lat_;
  ::google::protobuf::int32 head_;
  ::google::protobuf::int32 speed_;
  float x_;
  float y_;

  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(8 + 31) / 32];

  friend void  protobuf_AddDesc_gps_5ftrajectory_2eproto();
  friend void protobuf_AssignDesc_gps_5ftrajectory_2eproto();
  friend void protobuf_ShutdownFile_gps_5ftrajectory_2eproto();

  void InitAsDefaultInstance();
  static TrajPoint* default_instance_;
};
// ===================================================================


// ===================================================================

// GpsTraj

// repeated .TrajPoint point = 1;
inline int GpsTraj::point_size() const {
  return point_.size();
}
inline void GpsTraj::clear_point() {
  point_.Clear();
}
inline const ::TrajPoint& GpsTraj::point(int index) const {
  return point_.Get(index);
}
inline ::TrajPoint* GpsTraj::mutable_point(int index) {
  return point_.Mutable(index);
}
inline ::TrajPoint* GpsTraj::add_point() {
  return point_.Add();
}
inline const ::google::protobuf::RepeatedPtrField< ::TrajPoint >&
GpsTraj::point() const {
  return point_;
}
inline ::google::protobuf::RepeatedPtrField< ::TrajPoint >*
GpsTraj::mutable_point() {
  return &point_;
}

// -------------------------------------------------------------------

// TrajPoint

// required int32 car_id = 1;
inline bool TrajPoint::has_car_id() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void TrajPoint::set_has_car_id() {
  _has_bits_[0] |= 0x00000001u;
}
inline void TrajPoint::clear_has_car_id() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void TrajPoint::clear_car_id() {
  car_id_ = 0;
  clear_has_car_id();
}
inline ::google::protobuf::int32 TrajPoint::car_id() const {
  return car_id_;
}
inline void TrajPoint::set_car_id(::google::protobuf::int32 value) {
  set_has_car_id();
  car_id_ = value;
}

// required uint32 timestamp = 2;
inline bool TrajPoint::has_timestamp() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void TrajPoint::set_has_timestamp() {
  _has_bits_[0] |= 0x00000002u;
}
inline void TrajPoint::clear_has_timestamp() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void TrajPoint::clear_timestamp() {
  timestamp_ = 0u;
  clear_has_timestamp();
}
inline ::google::protobuf::uint32 TrajPoint::timestamp() const {
  return timestamp_;
}
inline void TrajPoint::set_timestamp(::google::protobuf::uint32 value) {
  set_has_timestamp();
  timestamp_ = value;
}

// required int32 lon = 3;
inline bool TrajPoint::has_lon() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void TrajPoint::set_has_lon() {
  _has_bits_[0] |= 0x00000004u;
}
inline void TrajPoint::clear_has_lon() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void TrajPoint::clear_lon() {
  lon_ = 0;
  clear_has_lon();
}
inline ::google::protobuf::int32 TrajPoint::lon() const {
  return lon_;
}
inline void TrajPoint::set_lon(::google::protobuf::int32 value) {
  set_has_lon();
  lon_ = value;
}

// required int32 lat = 4;
inline bool TrajPoint::has_lat() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void TrajPoint::set_has_lat() {
  _has_bits_[0] |= 0x00000008u;
}
inline void TrajPoint::clear_has_lat() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void TrajPoint::clear_lat() {
  lat_ = 0;
  clear_has_lat();
}
inline ::google::protobuf::int32 TrajPoint::lat() const {
  return lat_;
}
inline void TrajPoint::set_lat(::google::protobuf::int32 value) {
  set_has_lat();
  lat_ = value;
}

// required int32 head = 5;
inline bool TrajPoint::has_head() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void TrajPoint::set_has_head() {
  _has_bits_[0] |= 0x00000010u;
}
inline void TrajPoint::clear_has_head() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void TrajPoint::clear_head() {
  head_ = 0;
  clear_has_head();
}
inline ::google::protobuf::int32 TrajPoint::head() const {
  return head_;
}
inline void TrajPoint::set_head(::google::protobuf::int32 value) {
  set_has_head();
  head_ = value;
}

// required int32 speed = 6;
inline bool TrajPoint::has_speed() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void TrajPoint::set_has_speed() {
  _has_bits_[0] |= 0x00000020u;
}
inline void TrajPoint::clear_has_speed() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void TrajPoint::clear_speed() {
  speed_ = 0;
  clear_has_speed();
}
inline ::google::protobuf::int32 TrajPoint::speed() const {
  return speed_;
}
inline void TrajPoint::set_speed(::google::protobuf::int32 value) {
  set_has_speed();
  speed_ = value;
}

// required float x = 7;
inline bool TrajPoint::has_x() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void TrajPoint::set_has_x() {
  _has_bits_[0] |= 0x00000040u;
}
inline void TrajPoint::clear_has_x() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void TrajPoint::clear_x() {
  x_ = 0;
  clear_has_x();
}
inline float TrajPoint::x() const {
  return x_;
}
inline void TrajPoint::set_x(float value) {
  set_has_x();
  x_ = value;
}

// required float y = 8;
inline bool TrajPoint::has_y() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void TrajPoint::set_has_y() {
  _has_bits_[0] |= 0x00000080u;
}
inline void TrajPoint::clear_has_y() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void TrajPoint::clear_y() {
  y_ = 0;
  clear_has_y();
}
inline float TrajPoint::y() const {
  return y_;
}
inline void TrajPoint::set_y(float value) {
  set_has_y();
  y_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {


}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_gps_5ftrajectory_2eproto__INCLUDED
